/*
 * XREFs of ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C7090
 * Callers:
 *     TimersProc @ 0x1C00888F0 (TimersProc.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C0088CD8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x1C01C6FC0 (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 */

void __fastcall ReadyTimer(struct tagTIMER *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // rdx

  *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 10);
  ApplyTimerDelay(a1);
  EtwTraceTimerProc(v4);
  v5 = *((_DWORD *)a1 + 12);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x10) != 0 )
      *((_DWORD *)a1 + 12) = v5 | 0x20;
    if ( *((_DWORD *)a1 + 32) == *((_DWORD *)a1 + 33) )
      *((_DWORD *)a1 + 33) = a2;
    v6 = *((_DWORD *)a1 + 12);
    if ( (v6 & 4) != 0 )
    {
      TimerStatistics(a1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD, struct tagTIMER *))a1 + 4))(
        0LL,
        280LL,
        *((_QWORD *)a1 + 12),
        a1);
      *((_DWORD *)a1 + 32) = *((_DWORD *)a1 + 33);
    }
    else
    {
      v7 = (__int64 *)((char *)a1 + 56);
      *((_DWORD *)a1 + 12) = v6 | 1;
      ++*(_DWORD *)(*((_QWORD *)a1 + 3) + 580LL);
      v8 = *((_QWORD *)a1 + 3) + 1168LL;
      v9 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1176LL);
      if ( *v9 != (__int64 *)v8 )
        __fastfail(3u);
      *((_QWORD *)a1 + 8) = v9;
      *v7 = v8;
      *v9 = v7;
      *(_QWORD *)(v8 + 8) = v7;
      SetWakeBit(*((_QWORD *)a1 + 3), 16LL);
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 400LL) + 1000LL);
    }
  }
}
