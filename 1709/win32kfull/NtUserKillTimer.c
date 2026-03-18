/*
 * XREFs of NtUserKillTimer @ 0x1C0086FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C008A208 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // r12d
  __int64 v7; // rsi
  unsigned int v8; // ebp
  _QWORD *v9; // rdi
  _QWORD *i; // r14
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int64 v19; // rbx
  int v20; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive(v5)
    && (v4 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v5 = 0LL;
    v6 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v19 = (unsigned __int64)(unsigned int)v5 << 6;
      *(_DWORD *)(v19 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v19 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v19 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v19 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v6 = v20;
  }
LABEL_5:
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v8 = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = 0;
  v9 = (_QWORD *)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v7)) & 0x3F));
  for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == v7 && v11[12] == a2 )
    {
      v12 = *((_DWORD *)v11 + 12);
      if ( (v12 & 6) == 0 )
      {
        if ( (v12 & 0x40) != 0
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
              v5 = v11[3],
              CurrentProcessWin32Process == *(_QWORD *)(v5 + 400))
          || !v7 && (v11[6] & 4) == 0 )
        {
          if ( (unsigned int)HMMarkObjectDestroy(i - 14) )
          {
            if ( (v11[6] & 1) != 0 )
              DecTimerCount((struct tagTIMER *)(i - 14));
            v14 = v11[9];
            if ( *(_QWORD **)(v14 + 8) != v11 + 9 || (v15 = (_QWORD *)v11[10], (_QWORD *)*v15 != v11 + 9) )
              __fastfail(3u);
            *v15 = v14;
            *(_QWORD *)(v14 + 8) = v15;
            v16 = (_QWORD *)*i;
            if ( *(_QWORD **)(*i + 8LL) != i || (v17 = (_QWORD *)v11[15], (_QWORD *)*v17 != i) )
              __fastfail(3u);
            *v17 = v16;
            v16[1] = v17;
            if ( !v11[11] )
              _bittestandreset(gTimerId, *((_DWORD *)v11 + 24) - 256);
            EtwTraceKillTimer(i - 14);
            HMAssignmentUnlock(v11 + 11);
            HMFreeObject(i - 14);
          }
          v8 = 1;
          break;
        }
      }
    }
  }
LABEL_25:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v5) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v4 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v5 = (unsigned int)v4;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) == v6 )
              break;
            v4 = (unsigned int)(v4 + 1);
            if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
              goto LABEL_28;
          }
          v5 = (unsigned __int64)(unsigned int)v4 << 6;
          *(_DWORD *)(v5 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v5, v4);
  return v8;
}
