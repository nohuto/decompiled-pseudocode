/*
 * XREFs of ViDeadlockRemoveNode @ 0x14082A068
 * Callers:
 *     ViDeadlockForgetResourceHistory @ 0x140829BC4 (ViDeadlockForgetResourceHistory.c)
 *     ViDeadlockRemoveResource @ 0x14082A1CC (ViDeadlockRemoveResource.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x14082A6A4 (ViDeadlockUpdateChildrenCount.c)
 */

_QWORD *__fastcall ViDeadlockRemoveNode(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 *v10; // rdx
  __int64 **v11; // r10
  __int64 v12; // rax
  __int64 **v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // rax
  __int64 *v19; // r11
  __int64 *v20; // rdx
  __int64 *v21; // r10

  v2 = a1;
  if ( a2 )
  {
    v3 = a1 + 5;
    v4 = a1[5];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = (_QWORD *)v3[1], (_QWORD *)*result != v3) )
      __fastfail(3u);
  }
  else
  {
    v6 = a1 + 1;
    v7 = (__int64 *)a1[1];
    if ( *v2 )
    {
      while ( v7 != v6 )
      {
        v8 = *v7;
        v9 = v7 - 3;
        v10 = v7;
        v7 = (__int64 *)v8;
        if ( *(__int64 **)(v8 + 8) != v10 || (v11 = (__int64 **)v10[1], *v11 != v10) )
          __fastfail(3u);
        *v11 = (__int64 *)v8;
        *(_QWORD *)(v8 + 8) = v11;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v9 + 19);
        *v9 = *v2;
        v12 = *v2 + 8LL;
        v13 = *(__int64 ***)(*v2 + 16LL);
        if ( *v13 != (__int64 *)v12 )
          __fastfail(3u);
        *v10 = v12;
        v10[1] = (__int64)v13;
        *v13 = v10;
        *(_QWORD *)(v12 + 8) = v10;
      }
      v14 = v2[3];
      if ( *(_QWORD **)(v14 + 8) != v2 + 3 || (v15 = (_QWORD *)v2[4], (_QWORD *)*v15 != v2 + 3) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      ViDeadlockUpdateChildrenCount(*v2, 0xFFFFFFFFLL);
    }
    else
    {
      while ( v7 != v6 )
      {
        v18 = *v7;
        v19 = v7 - 3;
        v20 = v7;
        v7 = (__int64 *)v18;
        if ( *(__int64 **)(v18 + 8) != v20 || (v21 = (__int64 *)v20[1], (__int64 *)*v21 != v20) )
          __fastfail(3u);
        *v21 = v18;
        *(_QWORD *)(v18 + 8) = v21;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v19 + 19);
        *v19 = 0LL;
        *v20 = 0LL;
        v19[4] = 0LL;
      }
    }
    v16 = v2[7];
    v17 = v2 + 5;
    --*(_WORD *)(v16 + 4);
    v4 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (result = (_QWORD *)v17[1], (_QWORD *)*result != v17) )
      __fastfail(3u);
  }
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
