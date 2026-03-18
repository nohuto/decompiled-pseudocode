/*
 * XREFs of PiSwPnPInfoInit @ 0x1405BB888
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406CE580 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PnpAllocateMultiSZ @ 0x1405BB930 (PnpAllocateMultiSZ.c)
 */

__int64 __fastcall PiSwPnPInfoInit(__int64 a1, __int64 a2)
{
  int MultiSZ; // ebx
  _OWORD *PoolWithTag; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  MultiSZ = PnpAllocateMultiSZ(*(void **)(a2 + 32));
  if ( MultiSZ >= 0 )
  {
    MultiSZ = PnpAllocateMultiSZ(*(void **)(a2 + 48));
    if ( MultiSZ >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
        *(_QWORD *)(a1 + 16) = PoolWithTag;
        if ( PoolWithTag )
          *PoolWithTag = *(_OWORD *)*(_QWORD *)(a2 + 56);
        else
          MultiSZ = -1073741670;
      }
      if ( MultiSZ >= 0 )
      {
        MultiSZ = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 72), 0x7FFFuLL, 0x57706E50u, (PVOID *)(a1 + 24));
        if ( MultiSZ >= 0 )
          return (unsigned int)PnpAllocatePWSTR(
                                 *(NTSTRSAFE_PCWSTR *)(a2 + 80),
                                 0x7FFFuLL,
                                 0x57706E50u,
                                 (PVOID *)(a1 + 32));
      }
    }
  }
  return (unsigned int)MultiSZ;
}
