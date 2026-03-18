/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01414F0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C0066D34 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  int *v4; // rax
  __int64 v5; // r8
  int *v6; // r11
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ebp
  struct tagMONITORRECTS *v10; // r12
  struct tagSMWP *v11; // rax
  __int64 v12; // r9
  struct tagSMWP *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  int i; // r15d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 ThreadWin32Thread; // rax
  char v23; // r8
  _OWORD *Prop; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD v28[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 40) != a2 || *(_DWORD *)*gpDispInfo <= 1u )
    return 0LL;
  if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v4 = (int *)SnapshotMonitorRects();
    if ( !v4 )
      return (unsigned int)-1073741801;
    v6 = *(int **)(a1 + 16);
    v7 = 0;
    v8 = 0LL;
    if ( *v6 > 0 )
    {
      v9 = *v4;
      while ( 1 )
      {
        v5 = 0LL;
        if ( v9 <= 0 )
          break;
        while ( *(_QWORD *)&v6[12 * (int)v8 + 2] != *(_QWORD *)&v4[12 * (int)v5 + 2]
             || *(_QWORD *)&v6[12 * (int)v8 + 4] != *(_QWORD *)&v4[12 * (int)v5 + 4] )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (int)v5 >= v9 )
            goto LABEL_13;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (int)v8 >= *v6 )
          goto LABEL_14;
      }
LABEL_13:
      v7 = -1073741823;
    }
LABEL_14:
    Win32FreePool(v4, v8, v5);
    v10 = *(struct tagMONITORRECTS **)(a1 + 16);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    v11 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
    v13 = v11;
    if ( !v11 )
      return v7;
    PushW32ThreadLock((__int64)v11, v29, (__int64)DestroySMWP, v12);
    v17 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v17 += 48LL )
    {
      if ( !v13 )
        break;
      LOBYTE(v14) = 1;
      v19 = HMValidateHandleNoSecure(*(_QWORD *)(v17 + 40), v14, v15, v16);
      v20 = v19;
      if ( v19 )
      {
        if ( *(char *)(v19 + 64) >= 0 && IsNonImmersiveBand(v19) )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 400LL);
          if ( (*(_DWORD *)(v14 + 776) & 0x30) != 0x10 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
            v23 = 1;
            v28[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v28;
            v28[1] = v20;
            _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
            if ( (*(_DWORD *)(v17 + 32) & 1) != 0 )
            {
              Prop = (_OWORD *)GetProp(v20, atomCheckpointProp, 1);
              if ( Prop )
                *Prop = *(_OWORD *)(v17 + 16);
            }
            v13 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                      (__int64)v13,
                                      v20,
                                      v10,
                                      (struct tagRECT *)v17,
                                      (v17 + 16) & -(__int64)(((unsigned __int8)v23 & (unsigned __int8)*(_DWORD *)(v17 + 32)) != 0),
                                      20,
                                      v23);
            ThreadUnlock1(v26, v25);
          }
        }
      }
      ++i;
    }
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    *(_QWORD *)(v27 + 16) = v29[0];
    if ( v13 )
      xxxEndDeferWindowPosEx(v13, 1);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
