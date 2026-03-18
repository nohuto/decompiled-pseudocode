/*
 * XREFs of HeapInsertFreeList @ 0x1C0019BF0
 * Callers:
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     ParsePackage @ 0x1C0019240 (ParsePackage.c)
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HeapInsertFreeList(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *i; // r8
  __int64 **v5; // rcx
  __int64 *v6; // r9
  __int64 *v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r11
  int v17; // ecx
  _QWORD *v18; // r11
  __int64 v19; // rcx
  _QWORD *v20; // rax

  v2 = *(__int64 **)(a1 + 40);
  for ( i = (__int64 *)(a1 + 40); v2 != i; v2 = (__int64 *)*v2 )
  {
    if ( a2 + 2 < v2 )
      break;
  }
  v5 = (__int64 **)v2[1];
  v6 = a2 + 2;
  if ( *v5 != v2 )
    __fastfail(3u);
  *v6 = (__int64)v2;
  a2[3] = v5;
  *v5 = v6;
  v2[1] = (__int64)v6;
  if ( (__int64 *)*v6 != i )
  {
    v15 = *((unsigned int *)a2 + 1);
    v16 = *v6 - 16;
    if ( (_QWORD *)v16 == (_QWORD *)((char *)a2 + v15) )
    {
      v17 = *(_DWORD *)(v16 + 4) + v15;
      v18 = (_QWORD *)*v6;
      *((_DWORD *)a2 + 1) = v17;
      v19 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
    }
  }
  v7 = (__int64 *)a2[3];
  if ( v7 != i )
  {
    v11 = *((unsigned int *)v7 - 3);
    v12 = v7 - 2;
    if ( a2 == (__int64 *)((char *)v7 + v11 - 16) )
    {
      *((_DWORD *)v12 + 1) = *((_DWORD *)a2 + 1) + v11;
      v13 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || (v14 = (__int64 **)a2[3], *v14 != v6) )
        __fastfail(3u);
      *v14 = v13;
      a2 = v12;
      v13[1] = (__int64)v14;
    }
  }
  result = (_QWORD *)((char *)a2 + *((unsigned int *)a2 + 1));
  if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)result )
  {
    *(_QWORD *)(a1 + 32) = a2;
    v9 = a2 + 2;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (result = (_QWORD *)v9[1], (_QWORD *)*result != v9) )
      __fastfail(3u);
    *result = v10;
    *(_QWORD *)(v10 + 8) = result;
  }
  return result;
}
