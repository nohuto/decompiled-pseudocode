/*
 * XREFs of _WOWCleanup @ 0x1C01EF890
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 */

__int64 __fastcall WOWCleanup(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  unsigned __int8 v12; // dl

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( !a1 )
  {
    v6 = (_QWORD *)(CurrentProcessWin32Process + 312);
    v7 = 2LL;
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
        if ( *((unsigned __int16 *)v8 + 16) == v2 && (*((_BYTE *)v8 + 34) & 4) != 0 && !*((_DWORD *)v8 + 22) )
          DestroyClass(v5, (_QWORD **)v6);
        else
          v6 = (_QWORD *)*v6;
      }
      v6 = (_QWORD *)((char *)v5 + 320);
      --v7;
    }
    while ( v7 );
    v9 = gSharedInfo[1];
    v10 = v9 + 32LL * giheLast;
    v11 = (_QWORD *)gpKernelHandleTable;
    while ( v9 <= v10 )
    {
      v12 = *(_BYTE *)(v9 + 24);
      if ( v12
        && (gahti[24 * v12 + 12] & 2) != 0
        && (struct tagPROCESSINFO *)v11[1] == v5
        && *(_DWORD *)(*v11 + 16LL) == v2
        && v12 != 7
        && (*(_BYTE *)(v9 + 25) & 1) == 0 )
      {
        HMDestroyUnlockedObject(v9);
      }
      v9 += 32LL;
      v11 += 2;
    }
  }
  return 1LL;
}
