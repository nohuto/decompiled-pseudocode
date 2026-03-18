/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C01F8330
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D241C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00365A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00D4E20 (BmlAreRawModesEnabled.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00D5348 (BmlGetModeCategoryForRegion.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00F5AE8 (BmlCompareRegionsWithPivot.c)
 *     BmlIsSupportedSourceMode @ 0x1C01F8574 (BmlIsSupportedSourceMode.c)
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
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v27; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+70h] [rbp+8h]
  struct _D3DKMDT_2DREGION v30; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
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
    goto LABEL_37;
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
      v28 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a4 + 156);
      v16 = *(_DWORD *)(a4 + 152);
      v28 = 1;
    }
    v17 = v6;
    v18 = 0LL;
    v19 = 104 * v17;
    v30.cy = v16;
    v20 = (_QWORD *)v13[6];
    v27 = 104 * v17;
    v30.cx = v15;
    if ( v20 == v13 + 6 )
      goto LABEL_36;
    NextMode = (const struct DMMVIDPNSOURCEMODE *)(v20 - 1);
    if ( !NextMode )
      goto LABEL_36;
    do
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2)
        && (BmlAreRawModesEnabled((__int64)a1)
         || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v19 + 36]) != 1) )
      {
        if ( v18 )
        {
          if ( (unsigned int)BmlCompareRegionsWithPivot(
                               (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                               (struct _D3DKMDT_2DREGION *)((char *)v18 + 76),
                               &v30) == 1 )
          {
            if ( *((_DWORD *)v18 + 19) == v15 && *((_DWORD *)v18 + 20) == v16 )
            {
              v23 = WdLogNewEntry5_WdAssertion(v22);
              WdLogEvent5_WdAssertion(v23);
            }
            v18 = NextMode;
          }
          v19 = v27;
        }
        else
        {
          v18 = NextMode;
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
    }
    while ( NextMode );
    if ( v18 )
    {
      if ( v28 )
      {
        *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 20);
        v24 = *((_DWORD *)v18 + 19);
      }
      else
      {
        *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 19);
        v24 = *((_DWORD *)v18 + 20);
      }
      *(_DWORD *)(a4 + 164) = v24;
      v14 = 0;
    }
    else
    {
LABEL_36:
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v14 = -1071774970;
      v25[3] = v15;
      v25[4] = v16;
      v25[5] = a3;
      v25[6] = -1071774970LL;
      WdLogEvent5_WdError(v25);
    }
  }
LABEL_37:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11));
  return v14;
}
