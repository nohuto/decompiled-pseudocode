/*
 * XREFs of ?ReadyTimer@@YAHPEAUtagTIMER@@K@Z @ 0x1C01C4D30
 * Callers:
 *     TimersProc @ 0x1C004BC60 (TimersProc.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C004E2E8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x1C01C4C60 (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 */

__int64 __fastcall ReadyTimer(struct tagTIMER *a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // di
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 10);
  ApplyTimerDelay(a1);
  v4 = 0;
  EtwTraceTimerProc(v5);
  v6 = *((_DWORD *)a1 + 12);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x10) != 0 )
      *((_DWORD *)a1 + 12) = v6 | 0x20;
    if ( *((_DWORD *)a1 + 32) == *((_DWORD *)a1 + 33) )
      *((_DWORD *)a1 + 33) = a2;
    v7 = *((_DWORD *)a1 + 12);
    if ( (v7 & 4) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      ++*((_DWORD *)a1 + 2);
      v16[1] = a1;
      TimerStatistics(a1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD, struct tagTIMER *))a1 + 4))(
        0LL,
        280LL,
        *((_QWORD *)a1 + 12),
        a1);
      v8 = *(_DWORD *)a1;
      *((_DWORD *)a1 + 32) = *((_DWORD *)a1 + 33);
      v9 = gSharedInfo[1];
      v10 = LODWORD(gSharedInfo[2]);
      v11 = *(_BYTE *)((unsigned int)v10 * (unsigned __int16)v8 + v9 + 25);
      ThreadUnlock1(v10, v9);
      return v11 & 1;
    }
    else
    {
      v12 = (__int64 *)((char *)a1 + 56);
      *((_DWORD *)a1 + 12) = v7 | 1;
      ++*(_DWORD *)(*((_QWORD *)a1 + 3) + 524LL);
      v13 = *((_QWORD *)a1 + 3) + 1080LL;
      v14 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1088LL);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *((_QWORD *)a1 + 8) = v14;
      *v12 = v13;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      SetWakeBit(*((_QWORD *)a1 + 3), 0x10u);
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 376LL) + 992LL);
    }
  }
  return v4;
}
