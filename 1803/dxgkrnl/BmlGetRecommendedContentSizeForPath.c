/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C0226134
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024340 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00C12FC (BmlGetModeCategoryForRegion.c)
 *     BmlAreRawModesEnabled @ 0x1C00C1688 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedSourceMode @ 0x1C00C19D0 (BmlIsSupportedSourceMode.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C29C8 (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  _QWORD *v15; // rbp
  UINT v16; // r14d
  UINT v17; // eax
  UINT v18; // r15d
  __int64 v19; // rax
  const struct DMMVIDPNSOURCEMODE *v20; // rdi
  __int64 v21; // rax
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // eax
  _QWORD *v28; // rax
  char v30; // [rsp+70h] [rbp+8h]
  struct _D3DKMDT_2DREGION v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  if ( !a1 || a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0x20000000020000LL;
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(0x20000000020000LL);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a3 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v13 = 0LL;
LABEL_11:
    v14 = -1071774968;
    goto LABEL_35;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD **)(v11 + 104);
  if ( !v13 )
    goto LABEL_11;
  v15 = (_QWORD *)v13[6];
  if ( v15 == v13 + 6 )
  {
    v14 = -1071774970;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(a4 + 152);
  v17 = *(_DWORD *)(a4 + 156);
  LOBYTE(v9) = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v30 = v9;
  if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
  {
    v18 = *(_DWORD *)(a4 + 152);
    v31.cx = v18;
    v16 = v17;
    v31.cy = v17;
  }
  else
  {
    v18 = *(_DWORD *)(a4 + 156);
    v31.cx = v18;
    v31.cy = v16;
  }
  v19 = a2;
  v20 = 0LL;
  v21 = 104 * v19;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v15 - 1);
  if ( !NextMode )
    goto LABEL_34;
  v23 = v21;
  do
  {
    if ( BmlIsSupportedSourceMode((__int64)NextMode, 1, 1)
      && (BmlAreRawModesEnabled((__int64)a1)
       || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v23 + 36]) != 1) )
    {
      if ( v20 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v20 + 76),
                             &v31) != 1 )
          goto LABEL_28;
        if ( *((_DWORD *)v20 + 19) == v18 && *((_DWORD *)v20 + 20) == v16 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v25);
        }
      }
      v20 = NextMode;
    }
LABEL_28:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
  }
  while ( NextMode );
  v26 = v32;
  if ( v20 )
  {
    if ( v30 )
    {
      *(_DWORD *)(v32 + 160) = *((_DWORD *)v20 + 20);
      v27 = *((_DWORD *)v20 + 19);
    }
    else
    {
      *(_DWORD *)(v32 + 160) = *((_DWORD *)v20 + 19);
      v27 = *((_DWORD *)v20 + 20);
    }
    *(_DWORD *)(v26 + 164) = v27;
    v14 = 0;
    goto LABEL_35;
  }
LABEL_34:
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v14 = -1071774970;
  v28[3] = v18;
  v28[4] = v16;
  v28[5] = a3;
  v28[6] = -1071774970LL;
  WdLogEvent5_WdError(v28);
LABEL_35:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11));
  return v14;
}
