/*
 * XREFs of xxxEnsureMonitorCursors @ 0x1C01122D0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00492E4 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     GetCursorForDim @ 0x1C005196C (GetCursorForDim.c)
 *     xxxClientCopyImage @ 0x1C0053A84 (xxxClientCopyImage.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 xxxEnsureMonitorCursors()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  void *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned int v15; // r14d
  _DWORD *v16; // r12
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = &unk_1C0326688;
  v2 = &gastrSystemCursorPaths;
  do
  {
    xxxSetMonitorIcoCurIndex((int)v2, (*v1 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 33040 : 33024, v0++);
    v1 += 2;
    LODWORD(v2) = (_DWORD)v2 + 16;
  }
  while ( v0 < 0x13 );
  v6 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v8 = v6 + 32LL * giheLast;
  v9 = (__int64 *)gpKernelHandleTable;
  while ( v6 <= v8 )
  {
    if ( *(_BYTE *)(v6 + 24) == 3 )
    {
      v10 = *v9;
      if ( *(_WORD *)(*v9 + 74) == 1 && (*(_DWORD *)(v10 + 80) & 0x1240) == 0 )
      {
        v11 = *(_QWORD *)(v10 + 24);
        if ( !v11 || (result = *(unsigned int *)(v11 + 776), (result & 0x400000) == 0) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
          v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          v14 = v23;
          *(_QWORD *)(ThreadWin32Thread + 392) = v23;
          v23[1] = v10;
          _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
          v15 = 0;
          v16 = &gfCursorSizeNeeded;
          do
          {
            if ( *v16 )
            {
              if ( v15 )
              {
                if ( v15 == 1 )
                {
                  v17 = 48;
                }
                else if ( v15 == 2 )
                {
                  v17 = 64;
                }
                else
                {
                  v17 = v15 == 3 ? 96 : 128;
                }
              }
              else
              {
                v17 = 32;
              }
              if ( !GetCursorForDim(v10, v17) )
              {
                v18 = xxxClientCopyImage(
                        *(_QWORD *)v10,
                        2,
                        (unsigned int)(v17 * *(_DWORD *)(v10 + 140)) / *(_DWORD *)(v10 + 76),
                        ((unsigned int)(v17 * *(_DWORD *)(v10 + 144)) / *(_DWORD *)(v10 + 76)) >> 1,
                        0x40000);
                v20 = v18;
                if ( v18 )
                {
                  v21 = *(_QWORD *)(v10 + 24);
                  if ( v21
                    && *(_QWORD *)(v21 + 296)
                    && (*(_DWORD *)(v20 + 80) & 0x1000) != 0
                    && *(_QWORD *)(v20 + 48) == v20 )
                  {
                    *(_DWORD *)(v20 + 76) = v17;
                    *(_QWORD *)(v20 + 48) = v10;
                    *(_QWORD *)(v20 + 40) = *(_QWORD *)(v10 + 40);
                    v22 = *(_QWORD *)(v10 + 24);
                    *(_QWORD *)(v10 + 40) = v20;
                    HMChangeOwnerPheProcess(
                      gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v20,
                      *(_QWORD *)(v22 + 296));
                  }
                  else
                  {
                    DestroyCursor((struct tagCURSOR *)v20, 0LL, v20, v19);
                  }
                }
              }
            }
            ++v15;
            ++v16;
          }
          while ( v15 < 5 );
          result = ThreadUnlock1(v14, v13);
        }
      }
    }
    v6 += 32LL;
    v9 += 3;
  }
  return result;
}
