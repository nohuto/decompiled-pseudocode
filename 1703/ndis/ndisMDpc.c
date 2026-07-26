/*
 * XREFs of ndisMDpc @ 0x1C006200C
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0061DD0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0061E80 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C0050E8C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F70 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(_QWORD); // r15
  __int64 Clock; // r14
  char v6; // bp
  PKINTERRUPT *v7; // rcx
  KSYNCHRONIZE_ROUTINE *v8; // rdx
  __int64 v9; // rax
  unsigned int i; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 104);
  v4 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  Clock = 0LL;
  if ( HIBYTE(dword_1C0093FD8) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 656721;
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    while ( *(_BYTE *)(v2 + 89) )
    {
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
      for ( i = 0; i < 0x32; ++i )
        ;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
      *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 1856) = 656734;
    }
    *(_BYTE *)(v2 + 89) = 1;
    *(_DWORD *)(v2 + 1860) = 656734;
    *(_QWORD *)(v2 + 1864) = KeGetCurrentThread();
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
    v4(*(_QWORD *)(v2 + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 1856) = 656740;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    v7 = *(PKINTERRUPT **)(v2 + 112);
    if ( v7 )
    {
      v8 = *(KSYNCHRONIZE_ROUTINE **)(v2 + 616);
      if ( v8 )
        KeSynchronizeExecution(*v7, v8, *(PVOID *)(v2 + 24));
    }
    ndisMProcessDeferred(v2);
    *(_BYTE *)(v2 + 89) = 0;
    *(_DWORD *)(v2 + 1860) = 0;
    *(_QWORD *)(v2 + 1864) = 0LL;
  }
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
  if ( v6 )
  {
    v9 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v2, 1u, v9 - Clock);
  }
}
