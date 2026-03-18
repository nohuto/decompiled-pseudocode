/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00D4AB4
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00D25F8 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000A310 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00D4E20 (BmlAreRawModesEnabled.c)
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D5078 (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D53A0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _D3DKMDT_2DREGION v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdi
  _DWORD *v16; // r14
  __int64 v17; // rdi
  _DWORD *v18; // r13
  _QWORD *v19; // rbx
  int v20; // edx
  __int64 v21; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // r11
  __int64 *v29; // rbx
  char v30; // bp
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rbx
  unsigned __int16 v34; // bp
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+70h] [rbp+8h]

  if ( !a4 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a6 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v42);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2);
  v12 = a5;
  v13 = 0LL;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  v14 = 104LL * a3;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v43 = IndexedSet<DMMVIDPNTARGET>::FindById(a4 + 24, a5);
    v13 = (struct _D3DKMDT_2DREGION)v43;
    if ( !v43 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a3, v43) )
    {
      WdLogNewEntry5_WdTrace(v11, v12);
      return 3223192336LL;
    }
  }
  *(_QWORD *)(v14 + a1 + 92) = 0LL;
  v15 = *(_QWORD *)(a4 + 48);
  v16 = 0LL;
  if ( v15 == a4 + 48 )
    return 3223192326LL;
  v17 = v15 - 8;
  if ( !v17 )
    return 3223192326LL;
  v47 = a4 + 48;
  do
  {
    v18 = (_DWORD *)(v17 + 76);
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v12);
    v19[3] = *(unsigned int *)(v17 + 24);
    v19[4] = *(unsigned int *)(v17 + 76);
    v19[5] = *(unsigned int *)(v17 + 80);
    v20 = *(_DWORD *)(v17 + 72);
    v21 = (unsigned int)(v20 - 1);
    if ( (v21 & 0xFFFFFFFC) != 0 || v20 == 2 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v44);
    }
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v17 + 96));
    v25 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v26 = WdLogNewEntry5_WdTrace(v24, v23);
      v24 = *(int *)(v17 + 96);
      *(_QWORD *)(v26 + 24) = v24;
    }
    v19[6] = v25;
    v27 = 1LL;
    v19[7] = *(int *)(v17 + 96);
    ++*(_DWORD *)(v14 + a1 + 92);
    if ( v13 == v17
      || !(unsigned __int8)BmlAreRawModesEnabled(a1)
      && ((v24 = (unsigned int)*v18, (unsigned int)v24 > *(_DWORD *)(v14 + a1 + 36))
       || (v24 = *(unsigned int *)(v17 + 80), (unsigned int)v24 > *(_DWORD *)(v14 + a1 + 40))) )
    {
LABEL_34:
      WdLogNewEntry5_WdTrace(v24, v27);
      v33 = a2;
      v34 = a3;
      goto LABEL_35;
    }
    v29 = *(__int64 **)(v14 + a1 + 16);
    if ( (*v29 & 0x100) != 0 || (*(_DWORD *)(a1 + 4) & 0x40000) != 0 )
    {
      v30 = v28;
      if ( (*v29 & 0x100) != 0 )
      {
        v31 = v27 + (*((_BYTE *)v29 + 128) != 0);
        goto LABEL_24;
      }
    }
    else
    {
      v30 = v27;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x40000) != 0 )
      goto LABEL_65;
    v31 = v27;
LABEL_24:
    if ( v31 == 2 )
    {
      v24 = *(unsigned int *)(v17 + 72);
      if ( (int)v24 - 3 > (unsigned int)v27 )
        goto LABEL_34;
      goto LABEL_27;
    }
    if ( v31 == (_DWORD)v27 )
    {
      v24 = *(unsigned int *)(v17 + 72);
      if ( (_DWORD)v24 != (_DWORD)v27 )
        goto LABEL_34;
      goto LABEL_27;
    }
LABEL_65:
    v24 = *(unsigned int *)(v17 + 72);
    if ( (((_DWORD)v24 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v24 == 2 )
      goto LABEL_34;
LABEL_27:
    if ( (((_DWORD)v24 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v24 == 2 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v45);
      v28 = 0;
    }
    if ( v30 )
    {
      v32 = *(_DWORD *)(v17 + 96);
      if ( v32 < 20 || v32 > 23 && v32 != 32 && v32 != 41 )
        goto LABEL_34;
    }
    v38 = *v29;
    if ( (*v29 & 0x4000000000LL) != 0 )
    {
      if ( (unsigned int)BmlCompareModeExtents(v14 + a1 + 52, v17 + 76) )
        goto LABEL_34;
    }
    v27 = 256LL;
    if ( (v38 & 0x100) != 0 )
    {
      v24 = *((unsigned int *)v29 + 29);
      if ( (_DWORD)v24 )
      {
        if ( *(_DWORD *)(v17 + 96) != (_DWORD)v24 )
          goto LABEL_34;
      }
      if ( (v29[1] & 0x100) != 0
        && (*v18 != *((_DWORD *)v29 + 24)
         || *(_DWORD *)(v17 + 80) != *((_DWORD *)v29 + 25)
         || *(_DWORD *)(v17 + 96) != (_DWORD)v24) )
      {
        goto LABEL_34;
      }
    }
    v39 = *(_QWORD *)(v14 + a1 + 16);
    if ( *(_BYTE *)(v39 + 129) != v28 && (*(_DWORD *)v39 & 0x20008) == 0x20000LL && *(_DWORD *)(v17 + 96) != 21 )
      goto LABEL_34;
    v34 = a3;
    v33 = a2;
    ++*(_DWORD *)(v14 + a1 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, a3, v17, (struct _D3DKMDT_2DREGION)v16) == 1
      && (!*(_QWORD *)&v13 || (unsigned int)BmlCompareSourceModes(a1, a2, a3, v17, v13) == -1) )
    {
      WdLogNewEntry5_WdTrace(v11, v12);
      v16 = (_DWORD *)v17;
    }
LABEL_35:
    v35 = *(_QWORD *)(v17 + 8);
    v17 = v35 - 8;
    if ( v35 == v47 )
      v17 = 0LL;
  }
  while ( v17 );
  if ( !v16 )
    return 3223192326LL;
  v36 = *(_QWORD *)(v33 + 48);
  *a6 = v16[6];
  if ( !*(_QWORD *)(v36 + 8) )
  {
    v46 = WdLogNewEntry5_WdAssertion(a6);
    WdLogEvent5_WdAssertion(v46);
  }
  DxgkLogCodePointPacket(0x20u, v34, v16[19], v16[20], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) + 16LL) + 268LL));
  return 0LL;
}
