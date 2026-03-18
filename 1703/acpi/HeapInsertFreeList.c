/*
 * XREFs of HeapInsertFreeList @ 0x1C00162F0
 * Callers:
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ParseAcquire @ 0x1C00156F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 *     WriteFieldLoop @ 0x1C0015A80 (WriteFieldLoop.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     FindNSObj @ 0x1C0015FE0 (FindNSObj.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HeapInsertFreeList(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int *i; // r8
  __int64 **v5; // rcx
  __int64 *v6; // r9
  __int64 v7; // r11
  unsigned int *v8; // rax
  unsigned int *v9; // r11
  _QWORD *result; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  _QWORD *v18; // r11
  __int64 v19; // rcx
  _QWORD *v20; // rax

  v2 = *(unsigned int **)(a1 + 40);
  for ( i = (unsigned int *)(a1 + 40); v2 != i; v2 = *(unsigned int **)v2 )
  {
    if ( a2 + 4 < v2 )
      break;
  }
  v5 = (__int64 **)*((_QWORD *)v2 + 1);
  v6 = (__int64 *)(a2 + 4);
  if ( *v5 != (__int64 *)v2 )
    __fastfail(3u);
  *v6 = (__int64)v2;
  *((_QWORD *)a2 + 3) = v5;
  *v5 = v6;
  *((_QWORD *)v2 + 1) = v6;
  v7 = *v6 - 16;
  if ( (unsigned int *)*v6 != i )
  {
    v16 = a2[1];
    if ( (unsigned int *)v7 == (unsigned int *)((char *)a2 + v16) )
    {
      v17 = *(_DWORD *)(v7 + 4) + v16;
      v18 = (_QWORD *)*v6;
      a2[1] = v17;
      v19 = *v18;
      v20 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
    }
  }
  v8 = (unsigned int *)*((_QWORD *)a2 + 3);
  v9 = v8 - 4;
  if ( v8 != i )
  {
    v13 = v9[1];
    if ( a2 == (unsigned int *)((char *)v9 + v13) )
    {
      v9[1] = a2[1] + v13;
      v14 = (__int64 *)*v6;
      v15 = (__int64 **)*((_QWORD *)a2 + 3);
      if ( *(__int64 **)(*v6 + 8) != v6 || *v15 != v6 )
        __fastfail(3u);
      *v15 = v14;
      a2 = v9;
      v14[1] = (__int64)v15;
    }
  }
  result = (_QWORD *)((char *)a2 + a2[1]);
  if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)result )
  {
    *(_QWORD *)(a1 + 32) = a2;
    v11 = a2 + 4;
    v12 = *v11;
    result = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*result != v11 )
      __fastfail(3u);
    *result = v12;
    *(_QWORD *)(v12 + 8) = result;
  }
  return result;
}
