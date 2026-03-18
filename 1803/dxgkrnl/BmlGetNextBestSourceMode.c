/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00C1358
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C00C348C (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000729C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     BmlAreRawModesEnabled @ 0x1C00C1688 (BmlAreRawModesEnabled.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C16A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C00C16D8 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00C18F8 (BmlDoesSourceModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int16 v7; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  _DWORD *v18; // r14
  _QWORD *v19; // rbp
  int v20; // edx
  __int64 v21; // rcx
  unsigned int BitsPerPixel; // eax
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // r11d
  char v30; // bp
  int v31; // eax
  __int64 *v32; // rsi
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v39; // r10
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+70h] [rbp+8h]

  v7 = a3;
  if ( !a4 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a6 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v43);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 0LL;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  v14 = 104LL * v7;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v44 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a4 + 24, a5);
    v13 = v44;
    if ( !v44 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v7, v44) )
    {
      WdLogNewEntry5_WdTrace(v46, v45, v11, v12);
      return 3223192336LL;
    }
  }
  v15 = a4 + 48;
  *(_QWORD *)(v14 + a1 + 92) = 0LL;
  v16 = *(_QWORD *)(a4 + 48);
  v17 = 0LL;
  v51 = v15;
  v18 = 0LL;
  if ( v16 != v15 )
    v17 = v16 - 8;
  if ( !v17 )
    return 3223192326LL;
  do
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v11, v12);
    v19[3] = *(unsigned int *)(v17 + 24);
    v19[4] = *(unsigned int *)(v17 + 76);
    v19[5] = *(unsigned int *)(v17 + 80);
    v20 = *(_DWORD *)(v17 + 72);
    v21 = (unsigned int)(v20 - 1);
    if ( (v21 & 0xFFFFFFFC) != 0 || v20 == 2 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v47);
    }
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v17 + 96));
    v27 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v28 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v24 = *(int *)(v17 + 96);
      *(_QWORD *)(v28 + 24) = v24;
    }
    v19[6] = v27;
    v19[7] = *(int *)(v17 + 96);
    ++*(_DWORD *)(v14 + a1 + 92);
    if ( v13 == v17
      || (v30 = 0, !(unsigned __int8)BmlAreRawModesEnabled(a1))
      && (v31 = BmlCompareModeExtents(v17 + 76, v14 + a1 + 36), v31 == v29) )
    {
LABEL_31:
      WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v34 = a2;
      goto LABEL_32;
    }
    v32 = *(__int64 **)(v14 + a1 + 16);
    if ( (*v32 & 0x100) != 0 || (*(_DWORD *)(a1 + 4) & 0x40000) != 0 )
    {
      if ( (*v32 & 0x100) != 0 )
      {
        v24 = v29 + (*((_BYTE *)v32 + 128) != 0);
        goto LABEL_23;
      }
    }
    else
    {
      v30 = v29;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x40000) != 0 )
      goto LABEL_62;
    v24 = v29;
LABEL_23:
    if ( (_DWORD)v24 == 2 )
    {
      v24 = *(unsigned int *)(v17 + 72);
      if ( (int)v24 - 3 > v29 )
        goto LABEL_31;
LABEL_65:
      if ( (((_DWORD)v24 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v24 == 2 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v49);
        v29 = 1;
      }
      goto LABEL_26;
    }
    if ( (_DWORD)v24 != v29 )
    {
LABEL_62:
      v48 = *(_DWORD *)(v17 + 72);
      v24 = v48;
      if ( v48 != v29 && v48 != 3 && v48 != 4 )
        goto LABEL_31;
      goto LABEL_65;
    }
    if ( *(_DWORD *)(v17 + 72) != v29 )
      goto LABEL_31;
LABEL_26:
    if ( v30 )
    {
      v33 = *(_DWORD *)(v17 + 96);
      if ( v33 < 20 || v33 > 23 && v33 != 32 && v33 != 41 )
        goto LABEL_31;
    }
    v39 = *v32;
    v23 = (_DWORD *)(v17 + 76);
    if ( (*v32 & 0x4000000000LL) != 0 )
    {
      if ( (unsigned int)BmlCompareModeExtents(v14 + a1 + 52, v23) )
        goto LABEL_31;
    }
    v25 = 256LL;
    if ( (v39 & 0x100) != 0 )
    {
      v24 = *((unsigned int *)v32 + 29);
      if ( (_DWORD)v24 )
      {
        if ( *(_DWORD *)(v17 + 96) != (_DWORD)v24 )
          goto LABEL_31;
      }
      if ( (v32[1] & 0x100) != 0
        && (*v23 != *((_DWORD *)v32 + 24)
         || *(_DWORD *)(v17 + 80) != *((_DWORD *)v32 + 25)
         || *(_DWORD *)(v17 + 96) != (_DWORD)v24) )
      {
        goto LABEL_31;
      }
    }
    v40 = *(_QWORD *)(v14 + a1 + 16);
    if ( *(_BYTE *)(v40 + 129) )
    {
      if ( (*(_DWORD *)v40 & 0x20008) == 0x20000LL && *(_DWORD *)(v17 + 96) != 21 )
        goto LABEL_31;
    }
    v34 = a2;
    *(_DWORD *)(v14 + a1 + 96) += v29;
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, v7, v17, (__int64)v18) == 1
      && (!v13 || (unsigned int)BmlCompareSourceModes(a1, a2, v7, v17, v13) == -1) )
    {
      WdLogNewEntry5_WdTrace(v16, v15, v11, v12);
      v18 = (_DWORD *)v17;
    }
LABEL_32:
    v35 = *(_QWORD *)(v17 + 8);
    v17 = v35 - 8;
    if ( v35 == v51 )
      v17 = 0LL;
  }
  while ( v17 );
  if ( !v18 )
    return 3223192326LL;
  v36 = *(_QWORD *)(v34 + 48);
  *a6 = v18[6];
  v37 = *(_QWORD *)(v36 + 8);
  if ( !v37 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a6);
    WdLogEvent5_WdAssertion(v50);
    v37 = *(_QWORD *)(v36 + 8);
  }
  DxgkLogCodePointPacket(0x20u, v7, v18[19], v18[20], *(_QWORD *)(*(_QWORD *)(v37 + 16) + 268LL));
  return 0LL;
}
