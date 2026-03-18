/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C01DF248
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F210C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0045848 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00F300C (BmlCompareRegionsWithPivot.c)
 *     BmlAreRawModesEnabled @ 0x1C00F4C00 (BmlAreRawModesEnabled.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00F50A4 (BmlGetModeCategoryForRegion.c)
 *     BmlIsSupportedSourceMode @ 0x1C01DF494 (BmlIsSupportedSourceMode.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // di
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // ebx
  UINT v15; // r15d
  UINT v16; // r14d
  __int64 v17; // rax
  const struct DMMVIDPNSOURCEMODE *v18; // rdi
  __int64 v19; // r13
  _QWORD *v20; // rbp
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+20h] [rbp-48h]
  char v32; // [rsp+70h] [rbp+8h]
  struct _D3DKMDT_2DREGION v34; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0x20000000020000LL;
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(0x20000000020000LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a3 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v13 = 0LL;
LABEL_11:
    v14 = -1071774968;
    goto LABEL_39;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD **)(v11 + 104);
  if ( !v13 )
    goto LABEL_11;
  if ( (_QWORD *)v13[6] == v13 + 6 )
  {
    v14 = -1071774970;
  }
  else
  {
    if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_DWORD *)(a4 + 152);
      v16 = *(_DWORD *)(a4 + 156);
      v32 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a4 + 156);
      v16 = *(_DWORD *)(a4 + 152);
      v32 = 1;
    }
    v17 = v6;
    v18 = 0LL;
    v19 = 104 * v17;
    v34.cy = v16;
    v20 = (_QWORD *)v13[6];
    v31 = 104 * v17;
    v34.cx = v15;
    if ( v20 == v13 + 6 )
      goto LABEL_38;
    NextMode = (const struct DMMVIDPNSOURCEMODE *)(v20 - 1);
    if ( !NextMode )
      goto LABEL_38;
    do
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2, 0LL) )
      {
        v24 = *(_DWORD *)(a4 + 116);
        if ( (!v24 || *((_DWORD *)NextMode + 24) == v24)
          && (BmlAreRawModesEnabled((__int64)a1)
           || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v19 + 36]) != 1) )
        {
          if ( v18 )
          {
            if ( (unsigned int)BmlCompareRegionsWithPivot(
                                 (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                                 (struct _D3DKMDT_2DREGION *)((char *)v18 + 76),
                                 &v34) == 1 )
            {
              if ( *((_DWORD *)v18 + 19) == v15 && *((_DWORD *)v18 + 20) == v16 )
              {
                v27 = WdLogNewEntry5_WdAssertion(v26, v25, v22, v23);
                WdLogEvent5_WdAssertion(v27);
              }
              v18 = NextMode;
            }
            v19 = v31;
          }
          else
          {
            v18 = NextMode;
          }
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode, v22, v23);
    }
    while ( NextMode );
    if ( v18 )
    {
      if ( v32 )
      {
        *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 20);
        v28 = *((_DWORD *)v18 + 19);
      }
      else
      {
        *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 19);
        v28 = *((_DWORD *)v18 + 20);
      }
      *(_DWORD *)(a4 + 164) = v28;
      v14 = 0;
    }
    else
    {
LABEL_38:
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v9, a2);
      v14 = -1071774970;
      v29[3] = v15;
      v29[4] = v16;
      v29[5] = a3;
      v29[6] = -1071774970LL;
      WdLogEvent5_WdError(v29);
    }
  }
LABEL_39:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11), a2);
  return v14;
}
