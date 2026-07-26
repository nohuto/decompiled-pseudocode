/*
 * XREFs of ndisMDpcX @ 0x1C0063224
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0062DC0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0062E70 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 */

char __fastcall ndisMDpcX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v7)(_QWORD); // r14
  char v8; // si
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int32 v11; // eax
  PKINTERRUPT *v12; // rcx
  KSYNCHRONIZE_ROUTINE *v13; // rdx
  __int64 v14; // rax

  v4 = *(_QWORD *)(a2 + 104);
  Clock = 0LL;
  v7 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  if ( HIBYTE(dword_1C009AF18) )
  {
    v8 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL, v9, v10);
  }
  else
  {
    v8 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v11 == 1 )
      LOBYTE(v11) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    v7(*(_QWORD *)(v4 + 24));
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v11 == 1 )
    {
      LOBYTE(v11) = *(_BYTE *)(a2 + 8);
      if ( (_BYTE)v11 )
        LOBYTE(v11) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    }
    v12 = *(PKINTERRUPT **)(v4 + 112);
    if ( v12 )
    {
      v13 = *(KSYNCHRONIZE_ROUTINE **)(v4 + 616);
      if ( v13 )
        LOBYTE(v11) = KeSynchronizeExecution(*v12, v13, *(PVOID *)(v4 + 24));
    }
  }
  if ( v8 )
  {
    v14 = WmiGetClock(0LL, 0LL, a3, a4);
    LOBYTE(v11) = ndisTraceDpcEnd(v4, 1u, v14 - Clock);
  }
  return v11;
}
