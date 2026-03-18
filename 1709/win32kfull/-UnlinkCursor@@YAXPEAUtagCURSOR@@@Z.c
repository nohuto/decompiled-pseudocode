/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0109BD0
 * Callers:
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     ZombieCursor @ 0x1C01C7320 (ZombieCursor.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  BOOL v7; // edi
  __int64 *v8; // rcx
  __int64 CurrentLogicalCursorThread; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r8

  v4 = 0LL;
  v6 = *((_QWORD *)a1 + 3);
  v7 = v6 == 0;
  if ( v6 )
    goto LABEL_2;
  v8 = &gpcurFirst;
  while ( 1 )
  {
LABEL_3:
    while ( *v8 )
    {
      if ( (struct tagCURSOR *)*v8 == a1 )
      {
        *v8 = *((_QWORD *)a1 + 4);
LABEL_7:
        *((_QWORD *)a1 + 4) = 0LL;
        *((_DWORD *)a1 + 20) &= ~0x100u;
        return;
      }
      v8 = (__int64 *)(*v8 + 32);
    }
    if ( v7 )
      break;
    v8 = &gpcurFirst;
    v7 = 1;
  }
  if ( !(_DWORD)v4 )
  {
    CurrentLogicalCursorThread = GetCurrentLogicalCursorThread((__int64)v8, v4, a3, a4);
    v4 = 1LL;
    v6 = *(_QWORD *)(CurrentLogicalCursorThread + 400);
LABEL_2:
    v8 = (__int64 *)(v6 + 704);
    goto LABEL_3;
  }
  v10 = gSharedInfo[1];
  v11 = v10 + 32LL * giheLast;
  v12 = (_QWORD *)gpKernelHandleTable;
  while ( v10 <= v11 )
  {
    if ( *(_BYTE *)(v10 + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v12 + 32LL) == a1 )
      {
        *(_QWORD *)(*v12 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v13 = v12[1];
      if ( v13 && *(struct tagCURSOR **)(v13 + 704) == a1 )
      {
        *(_QWORD *)(v13 + 704) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v10 += 32LL;
    v12 += 3;
  }
}
