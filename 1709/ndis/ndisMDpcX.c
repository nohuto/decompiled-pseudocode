/*
 * XREFs of ndisMDpcX @ 0x1C0062714
 * Callers:
 *     ndis5InterruptDpc @ 0x1C00622C0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0062370 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 */

char __fastcall ndisMDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v5)(_QWORD); // r14
  char v6; // si
  signed __int32 v7; // eax
  PKINTERRUPT *v8; // rcx
  KSYNCHRONIZE_ROUTINE *v9; // rdx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a2 + 104);
  Clock = 0LL;
  v5 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  if ( HIBYTE(dword_1C0099FD8) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v7 == 1 )
      LOBYTE(v7) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    v5(*(_QWORD *)(v2 + 24));
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v7 == 1 )
    {
      LOBYTE(v7) = *(_BYTE *)(a2 + 8);
      if ( (_BYTE)v7 )
        LOBYTE(v7) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    }
    v8 = *(PKINTERRUPT **)(v2 + 112);
    if ( v8 )
    {
      v9 = *(KSYNCHRONIZE_ROUTINE **)(v2 + 616);
      if ( v9 )
        LOBYTE(v7) = KeSynchronizeExecution(*v8, v9, *(PVOID *)(v2 + 24));
    }
  }
  if ( v6 )
  {
    v10 = WmiGetClock(0LL, 0LL);
    LOBYTE(v7) = ndisTraceDpcEnd(v2, 1u, v10 - Clock);
  }
  return v7;
}
