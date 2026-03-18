/*
 * XREFs of TryDetachShellFrame @ 0x1C01C0D90
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     IsDebuggerAttached @ 0x1C00CBEDC (IsDebuggerAttached.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     AssociateShellFrameAppThreads @ 0x1C01B5198 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B5290 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v25; // [rsp+28h] [rbp-29h]
  __int128 v26; // [rsp+38h] [rbp-19h]
  __int128 v27; // [rsp+48h] [rbp-9h] BYREF
  __int128 v28; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v30[3]; // [rsp+80h] [rbp+2Fh] BYREF

  result = gfShellFrameHangResilient;
  if ( gfShellFrameHangResilient )
  {
    result = gdwMDAQThreshold;
    v9 = gdwMDAQThreshold;
    if ( (*(_DWORD *)(a2 + 1184) & 0x100000) == 0 )
    {
      result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
      if ( !result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a1 + 400));
        if ( !(_DWORD)result )
        {
          result = IsDebuggerAttached(*(__int64 **)(a2 + 400));
          if ( !(_DWORD)result )
          {
            if ( !a3 )
              v9 = gdwMDAQThreshold / 0xAu;
            if ( a4
              || (result = *(_QWORD *)(a1 + 408),
                  (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                      - *(_DWORD *)(result + 472)) >= v9) )
            {
              result = AssociateShellFrameAppThreads(a1, a2);
              if ( (_DWORD)result )
              {
                v13 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 112LL);
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
                v29[0] = *(_QWORD *)(ThreadWin32Thread + 392);
                *(_QWORD *)(ThreadWin32Thread + 392) = v29;
                v29[1] = v13;
                if ( v13 )
                  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
                LockW32Thread(a2, v30, v15, v16);
                v17 = zzzAttachThreadInput(a1, a2, 0x4000LL);
                v21 = ThreadUnlock1(v19, v18);
                if ( v17 >= 0 )
                {
                  *(_DWORD *)(a2 + 1184) |= 0x80000u;
                  v22 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)&v25 = v22 + 112;
                  *((_QWORD *)&v25 + 1) = *(_QWORD *)(v22 + 120);
                  v27 = v25;
                  HMAssignmentLock(&v27);
                  if ( v21 )
                  {
                    v23 = *(_QWORD *)(a2 + 408);
                    if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL) == v23 )
                    {
                      *((_QWORD *)&v26 + 1) = v21;
                      *(_QWORD *)&v26 = v23 + 112;
                      v28 = v26;
                      HMAssignmentLock(&v28);
                    }
                  }
                  v24 = *(_QWORD *)(a1 + 1352);
                  if ( v24 )
                    PostMessage(v24, 840LL, 1uLL, 0LL);
                }
                return PopAndFreeW32ThreadLock((__int64)v30, v20);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
