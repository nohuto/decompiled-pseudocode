/*
 * XREFs of xxxEnsureMonitorCursors @ 0x1C010A23C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     GetCursorForDim @ 0x1C00C161C (GetCursorForDim.c)
 *     xxxClientCopyImage @ 0x1C00C36B4 (xxxClientCopyImage.c)
 */

__int64 xxxEnsureMonitorCursors()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  char *v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rcx
  unsigned int i; // r14d
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = &unk_1C032A698;
  v2 = (char *)&gastrSystemCursorPaths;
  do
  {
    xxxSetMonitorIcoCurIndex((__int64)v2, (*v1 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 33040 : 33024, v0++, 0);
    v1 += 2;
    v2 += 16;
  }
  while ( v0 < 0x11 );
  v4 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v6 = v4 + 32LL * giheLast;
  v7 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v6 )
  {
    if ( *(_BYTE *)(v4 + 24) == 3 )
    {
      v8 = *v7;
      if ( *(_WORD *)(*v7 + 74) == 1 && (*(_DWORD *)(v8 + 80) & 0x1240) == 0 )
      {
        v9 = *(_QWORD *)(v8 + 24);
        if ( !v9 || (result = *(unsigned int *)(v9 + 768), (result & 0x400000) == 0) )
        {
          v10 = &gfCursorSizeNeeded;
          v11 = gptiCurrent;
          v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v18;
          v18[1] = v8;
          ++*(_DWORD *)(v8 + 8);
          for ( i = 0; i < 5; ++i )
          {
            if ( *v10 )
            {
              if ( i )
              {
                if ( i == 1 )
                {
                  v13 = 48;
                }
                else if ( i == 2 )
                {
                  v13 = 64;
                }
                else
                {
                  v13 = i == 3 ? 96 : 128;
                }
              }
              else
              {
                v13 = 32;
              }
              if ( !GetCursorForDim(v8, v13) )
              {
                v14 = xxxClientCopyImage(
                        *(_QWORD *)v8,
                        2LL,
                        (unsigned int)(v13 * *(_DWORD *)(v8 + 140)) / *(_DWORD *)(v8 + 76),
                        ((unsigned int)(v13 * *(_DWORD *)(v8 + 144)) / *(_DWORD *)(v8 + 76)) >> 1,
                        0x40000);
                v15 = v14;
                if ( v14 )
                {
                  v16 = *(_QWORD *)(v8 + 24);
                  if ( v16
                    && *(_QWORD *)(v16 + 288)
                    && (*(_DWORD *)(v15 + 80) & 0x1000) != 0
                    && *(_QWORD *)(v15 + 48) == v15 )
                  {
                    *(_DWORD *)(v15 + 76) = v13;
                    *(_QWORD *)(v15 + 48) = v8;
                    *(_QWORD *)(v15 + 40) = *(_QWORD *)(v8 + 40);
                    v17 = *(_QWORD *)(v8 + 24);
                    *(_QWORD *)(v8 + 40) = v15;
                    HMChangeOwnerPheProcess(
                      gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v15,
                      *(_QWORD *)(v17 + 288));
                  }
                  else
                  {
                    DestroyCursor((struct tagCURSOR *)v15, 0LL);
                  }
                }
              }
            }
            ++v10;
          }
          result = ThreadUnlock1(v11, v3);
        }
      }
    }
    v4 += 32LL;
    v7 += 2;
  }
  return result;
}
