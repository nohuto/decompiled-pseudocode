/*
 * XREFs of ViDeadlockRemoveNode @ 0x1407BCCA8
 * Callers:
 *     ViDeadlockForgetResourceHistory @ 0x1407BC804 (ViDeadlockForgetResourceHistory.c)
 *     ViDeadlockRemoveResource @ 0x1407BCE14 (ViDeadlockRemoveResource.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x1407BD2FC (ViDeadlockUpdateChildrenCount.c)
 */

_QWORD *__fastcall ViDeadlockRemoveNode(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *result; // rax
  _QWORD **v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // r10
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 **v11; // r11
  __int64 v12; // rax
  __int64 **v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // r10
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r11

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
    v6 = (_QWORD **)(a1 + 1);
    if ( *a1 )
    {
      v7 = *v6;
      while ( v7 != v6 )
      {
        v8 = v7 - 3;
        v7 = (_QWORD *)*v7;
        v9 = v8 + 3;
        v10 = v8[3];
        if ( *(_QWORD **)(v10 + 8) != v8 + 3 || (v11 = (__int64 **)v8[4], *v11 != v9) )
          __fastfail(3u);
        *v11 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v8 + 19);
        *v8 = *v2;
        v12 = *v2 + 8LL;
        v13 = *(__int64 ***)(*v2 + 16LL);
        if ( *v13 != (__int64 *)v12 )
          __fastfail(3u);
        *v9 = v12;
        v9[1] = (__int64)v13;
        *v13 = v9;
        *(_QWORD *)(v12 + 8) = v9;
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
      v18 = *v6;
      while ( v18 != v6 )
      {
        v19 = v18 - 3;
        v18 = (_QWORD *)*v18;
        v20 = v19 + 3;
        v21 = v19[3];
        if ( *(_QWORD **)(v21 + 8) != v19 + 3 || (v22 = (_QWORD *)v19[4], (_QWORD *)*v22 != v20) )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
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
