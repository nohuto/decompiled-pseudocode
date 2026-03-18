/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00FD87C
 * Callers:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     ZombieCursor @ 0x1C01C5020 (ZombieCursor.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  BOOL v4; // edi
  __int64 *v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax

  v1 = 0LL;
  v3 = *((_QWORD *)a1 + 3);
  v4 = v3 == 0;
  if ( v3 )
    v5 = (__int64 *)(v3 + 696);
  else
    v5 = &gpcurFirst;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( *v5 )
      {
        if ( (struct tagCURSOR *)*v5 == a1 )
        {
          *v5 = *((_QWORD *)a1 + 4);
LABEL_7:
          *((_QWORD *)a1 + 4) = 0LL;
          *((_DWORD *)a1 + 20) &= ~0x100u;
          return;
        }
        v5 = (__int64 *)(*v5 + 32);
      }
      if ( v4 )
        break;
      v5 = &gpcurFirst;
      v4 = 1;
    }
    if ( (_DWORD)v1 )
      break;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v1);
    v1 = 1LL;
    v5 = (__int64 *)(CurrentProcessWin32Process + 696);
  }
  v7 = gSharedInfo[1];
  v8 = v7 + 32LL * giheLast;
  v9 = (_QWORD *)gpKernelHandleTable;
  while ( v7 <= v8 )
  {
    if ( *(_BYTE *)(v7 + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v9 + 32LL) == a1 )
      {
        *(_QWORD *)(*v9 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v10 = v9[1];
      if ( v10 && *(struct tagCURSOR **)(v10 + 696) == a1 )
      {
        *(_QWORD *)(v9[1] + 696LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v7 += 32LL;
    v9 += 2;
  }
}
