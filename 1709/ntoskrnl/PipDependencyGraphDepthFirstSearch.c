/*
 * XREFs of PipDependencyGraphDepthFirstSearch @ 0x1401FDCB4
 * Callers:
 *     PipDependencyGraphDepthFirstSearch @ 0x1401FDCB4 (PipDependencyGraphDepthFirstSearch.c)
 *     PipFindDependencyNodePath @ 0x1401FDD34 (PipFindDependencyNodePath.c)
 * Callees:
 *     PipDependencyGraphDepthFirstSearch @ 0x1401FDCB4 (PipDependencyGraphDepthFirstSearch.c)
 */

char __fastcall PipDependencyGraphDepthFirstSearch(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h]
  __int64 v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  *a3 = 0;
  *a4 = 0;
  if ( a1 != a2 )
  {
    v7 = (_QWORD *)(a1 + 16);
    v8 = *(_QWORD **)(a1 + 16);
    while ( 1 )
    {
      if ( v8 == v7 )
        return 0;
      v9 = v8;
      v8 = (_QWORD *)*v8;
      v10 = v9;
      if ( (unsigned __int8)PipDependencyGraphDepthFirstSearch(v9[4], a2, a3, a4) )
        break;
      a2 = v11;
    }
    ++*a3;
    *a4 = *((_DWORD *)v10 + 12);
  }
  return 1;
}
