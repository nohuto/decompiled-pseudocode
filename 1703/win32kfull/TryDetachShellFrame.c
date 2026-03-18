/*
 * XREFs of TryDetachShellFrame @ 0x1C01BCD5C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C00B44C4 (IsDebuggerAttached.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     AssociateShellFrameAppThreads @ 0x1C01B2094 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B2208 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  signed int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int128 v18; // [rsp+28h] [rbp-29h]
  __int128 v19; // [rsp+38h] [rbp-19h]
  __int128 v20; // [rsp+48h] [rbp-9h] BYREF
  __int128 v21; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v23[3]; // [rsp+80h] [rbp+2Fh] BYREF

  result = gfShellFrameHangResilient;
  if ( gfShellFrameHangResilient )
  {
    result = gdwMDAQThreshold;
    v9 = gdwMDAQThreshold;
    if ( (*(_DWORD *)(a2 + 1096) & 0x100000) == 0 )
    {
      result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
      if ( !result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a1 + 376));
        if ( !(_DWORD)result )
        {
          result = IsDebuggerAttached(*(__int64 **)(a2 + 376));
          if ( !(_DWORD)result )
          {
            if ( !a3 )
              v9 = gdwMDAQThreshold / 0xAu;
            if ( a4
              || (result = *(_QWORD *)(a1 + 384),
                  (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                      - *(_DWORD *)(result + 432)) >= v9) )
            {
              result = AssociateShellFrameAppThreads(a1, a2);
              if ( (_DWORD)result )
              {
                v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
                v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v22;
                v22[1] = v10;
                if ( v10 )
                  ++*(_DWORD *)(v10 + 8);
                LockW32Thread(a2, v23);
                v11 = zzzAttachThreadInput(a1, a2, 0x4000);
                v14 = ThreadUnlock1(v13, v12);
                if ( v11 >= 0 )
                {
                  *(_DWORD *)(a2 + 1096) |= 0x80000u;
                  v15 = *(_QWORD *)(a1 + 384);
                  *(_QWORD *)&v18 = v15 + 80;
                  *((_QWORD *)&v18 + 1) = *(_QWORD *)(v15 + 88);
                  v20 = v18;
                  HMAssignmentLock(&v20);
                  if ( v14 )
                  {
                    v16 = *(_QWORD *)(a2 + 384);
                    if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 384LL) == v16 )
                    {
                      *((_QWORD *)&v19 + 1) = v14;
                      *(_QWORD *)&v19 = v16 + 80;
                      v21 = v19;
                      HMAssignmentLock(&v21);
                    }
                  }
                  v17 = *(_QWORD *)(a1 + 1264);
                  if ( v17 )
                    PostMessage(v17, 840LL, 1LL, 0LL);
                }
                return PopAndFreeW32ThreadLock((__int64)v23);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
