/*
 * XREFs of ndisMQueuedAllocateSharedHandler @ 0x1C0061850
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0025F04 (ndisDereferenceDmaAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     NdisMAllocateSharedMemory @ 0x1C00BC310 (NdisMAllocateSharedMemory.c)
 */

void __fastcall ndisMQueuedAllocateSharedHandler(__int64 a1)
{
  __int64 v1; // rax
  KIRQL v2; // si
  char v3; // r14
  __int64 v5; // rbx
  void (__fastcall *v6)(_QWORD, _QWORD, __int64, _QWORD, _QWORD); // rbp
  __int64 v7; // r15
  KIRQL v8; // al

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)v1 == 17 )
  {
    v3 = 1;
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(v1 + 32) < 6u )
    {
      v6 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(v1 + 3784) + 240LL);
      goto LABEL_7;
    }
    v1 = *(_QWORD *)(v1 + 504);
  }
  else
  {
    v5 = *(_QWORD *)(v1 + 8);
  }
  v6 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(v1 + 40);
LABEL_7:
  v7 = a1 + 64;
  NdisMAllocateSharedMemory(
    (NDIS_HANDLE)v5,
    *(_DWORD *)(a1 + 40),
    *(_BYTE *)(a1 + 44),
    (PVOID *)(a1 + 48),
    (PNDIS_PHYSICAL_ADDRESS)(a1 + 64));
  if ( v3 )
  {
    if ( (*(_DWORD *)(v5 + 120) & 0x40000) != 0 )
    {
      v8 = KfRaiseIrql(2u);
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 1856) = 460505;
    }
    v2 = v8;
  }
  v6(*(_QWORD *)(v5 + 24), *(_QWORD *)(a1 + 48), v7, *(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 56));
  if ( v3 )
  {
    if ( (*(_DWORD *)(v5 + 120) & 0x40000) != 0 )
    {
      KeLowerIrql(v2);
    }
    else
    {
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v2);
    }
  }
  ndisDereferenceDmaAdapter(*(PVOID *)(v5 + 504));
  ndisDereferenceMiniport(v5, 0x41u);
  ExFreePoolWithTag((PVOID)a1, 0);
}
