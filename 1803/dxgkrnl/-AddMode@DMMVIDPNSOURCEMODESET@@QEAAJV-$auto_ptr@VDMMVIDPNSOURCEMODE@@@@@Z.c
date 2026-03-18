/*
 * XREFs of ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00BDE30
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00BD6A0 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0005A08 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AddMode(_QWORD *a1, unsigned int **a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  unsigned int *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = *a2;
  if ( !*a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v23);
    v4 = *a2;
  }
  v7 = (_QWORD *)a1[6];
  v8 = a1 + 6;
  v9 = v4[6];
  v10 = 0LL;
  if ( v7 != a1 + 6 )
    v10 = (__int64)(v7 - 1);
  if ( !v10 )
  {
LABEL_10:
    if ( v7 == a1 + 6 || (v12 = a1[6] - 8LL, a1[6] == 8LL) )
    {
LABEL_18:
      v15 = (_QWORD *)a1[6];
      v16 = a1 + 6;
      v17 = 0LL;
      if ( v15 != a1 + 6 )
        v17 = (unsigned int *)(v15 - 1);
      if ( !v17 )
        goto LABEL_26;
      do
      {
        if ( v17 == v4 )
          break;
        v18 = (_QWORD *)*((_QWORD *)v17 + 1);
        v17 = (unsigned int *)(v18 - 1);
        if ( v18 == v16 )
          v17 = 0LL;
      }
      while ( v17 );
      if ( v17 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v30 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v30);
      }
      else
      {
LABEL_26:
        v19 = (_QWORD *)a1[7];
        v20 = v4 + 2;
        if ( (_QWORD *)*v19 != v16 )
          __fastfail(3u);
        *v20 = v16;
        v20[1] = v19;
        *v19 = v20;
        a1[7] = v20;
        ++a1[8];
      }
      v21 = (__int64)(*a2 + 8);
      if ( a1 )
      {
        if ( *((_QWORD *)*a2 + 5) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v32);
        }
        *(_QWORD *)(v21 + 8) = a1;
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v31 + 24) = v21;
        *(_QWORD *)(v31 + 32) = *(_QWORD *)(v21 + 8);
        WdLogEvent5_WdError(v31);
      }
      *a2 = 0LL;
      return 0LL;
    }
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 72);
      if ( v13 != v4[18] )
        goto LABEL_15;
      if ( v13 != 1 )
      {
        if ( v13 == 2 )
        {
          v10 = *(unsigned int *)(v12 + 76);
          if ( (_DWORD)v10 == v4[19] )
            goto LABEL_49;
          goto LABEL_15;
        }
        if ( v13 <= 2 || v13 > 4 )
        {
          if ( (unsigned int)(v13 - 1) <= 3 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v10);
            WdLogEvent5_WdAssertion(v25);
          }
          goto LABEL_15;
        }
      }
      if ( *(_DWORD *)(v12 + 76) == v4[19]
        && *(_DWORD *)(v12 + 80) == v4[20]
        && *(_DWORD *)(v12 + 84) == v4[21]
        && *(_DWORD *)(v12 + 88) == v4[22]
        && *(_DWORD *)(v12 + 92) == v4[23]
        && *(_DWORD *)(v12 + 96) == v4[24]
        && *(_DWORD *)(v12 + 100) == v4[25]
        && *(_DWORD *)(v12 + 104) == v4[26] )
      {
LABEL_49:
        v24 = 1;
        goto LABEL_50;
      }
LABEL_15:
      v14 = *(_QWORD **)(v12 + 8);
      v12 = (__int64)(v14 - 1);
      if ( v14 == v8 )
        v12 = 0LL;
      if ( !v12 )
        goto LABEL_18;
    }
  }
  while ( *(_DWORD *)(v10 + 24) != (_DWORD)v9 )
  {
    v11 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v11 - 1);
    if ( v11 == v8 )
      v10 = 0LL;
    if ( !v10 )
      goto LABEL_10;
  }
  v24 = 2 - (DMMVIDPNSOURCEMODE::operator==(v10, (__int64)v4) != 0);
LABEL_50:
  v26 = (unsigned int)(v24 - 1);
  if ( (_DWORD)v26 )
  {
    if ( (_DWORD)v26 == 1 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[3] = (*a2)[6];
      v28[4] = *a2;
      v28[5] = a1;
      WdLogEvent5_WdError(v28);
      auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
      return 3223192356LL;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v26);
      WdLogEvent5_WdError(v27);
      auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
      return 3221225473LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdTrace(v26, v9, v7, a4);
    *(_QWORD *)(v29 + 24) = *a2;
    *(_QWORD *)(v29 + 32) = a1;
    auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192340LL;
  }
}
