/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00F48C0
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00F22E4 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     BmlAreRawModesEnabled @ 0x1C00F4C00 (BmlAreRawModesEnabled.c)
 *     BmlCompareSourceModes @ 0x1C00F4C20 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00F4E48 (BmlDoesSourceModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int16 v7; // si
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _D3DKMDT_2DREGION v15; // r12
  __int64 v16; // r14
  unsigned int v17; // esi
  __int64 v18; // rbx
  _DWORD *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int16 v44; // [rsp+80h] [rbp+18h]

  v44 = a3;
  v7 = a3;
  if ( !a4 )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a6 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v38);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a5;
  v15 = 0LL;
  *a6 = -1;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  v16 = a1 + 104LL * v7;
  if ( a5 != -1 )
  {
    v39 = IndexedSet<DMMVIDPNTARGET>::FindById(a4 + 24, a5);
    v15 = (struct _D3DKMDT_2DREGION)v39;
    if ( !v39 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v7, v39) )
    {
      WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
      return 3223192336LL;
    }
  }
  v17 = 0;
  *(_QWORD *)(v16 + 92) = 0LL;
  v18 = *(_QWORD *)(a4 + 48);
  v19 = 0LL;
  if ( v18 == a4 + 48 )
    return 3223192326LL;
  v20 = v18 - 8;
  if ( !v20 )
    return 3223192326LL;
  v21 = a4 + 48;
  do
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
    v23[3] = *(unsigned int *)(v20 + 24);
    v23[4] = *(unsigned int *)(v20 + 76);
    v23[5] = *(unsigned int *)(v20 + 80);
    v26 = *(_DWORD *)(v20 + 72);
    v27 = (unsigned int)(v26 - 1);
    if ( (v27 & 0xFFFFFFFC) != 0 || v26 == 2 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v27, v22, v24, v25);
      WdLogEvent5_WdAssertion(v40);
    }
    v28 = *(_DWORD *)(v20 + 96);
    if ( v28 > 41 )
    {
LABEL_16:
      v29 = WdLogNewEntry5_WdTrace(v27, v22, v24, v25);
      v27 = *(int *)(v20 + 96);
      *(_QWORD *)(v29 + 24) = v27;
    }
    else
    {
      v22 = 0x1C0000000uLL;
      switch ( v28 )
      {
        case 20:
          v17 = 24;
          break;
        case 21:
        case 22:
        case 32:
          v17 = 32;
          break;
        case 23:
          v17 = 16;
          break;
        case 41:
          v17 = 8;
          break;
        default:
          goto LABEL_16;
      }
    }
    v23[6] = v17;
    v23[7] = *(int *)(v20 + 96);
    ++*(_DWORD *)(v16 + 92);
    if ( v15 == v20 )
      goto LABEL_33;
    if ( !(unsigned __int8)BmlAreRawModesEnabled(a1) )
    {
      v27 = *(unsigned int *)(v20 + 76);
      if ( (unsigned int)v27 > *(_DWORD *)(v16 + 36) || *(_DWORD *)(v20 + 80) > *(_DWORD *)(v16 + 40) )
        goto LABEL_33;
    }
    v30 = *(_QWORD *)(v16 + 16);
    v27 = *(unsigned int *)(v20 + 72);
    v31 = *(_DWORD *)v30 & 0x100;
    if ( *(_BYTE *)(v30 + 128) )
    {
      if ( (unsigned int)(v27 - 3) > 1 )
        goto LABEL_33;
    }
    else if ( (_DWORD)v27 != 1 )
    {
      goto LABEL_33;
    }
    if ( (((_DWORD)v27 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v27 == 2 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v27, v22, v24, v25);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( !v31
      && ((v27 = *(unsigned int *)(v20 + 96), (unsigned int)(v27 - 20) > 0x15)
       || (int)v27 > 23 && (_DWORD)v27 != 32 && (_DWORD)v27 != 41)
      || (*(_DWORD *)v30 & 0x100LL) != 0
      && ((v27 = *(unsigned int *)(v30 + 116), (_DWORD)v27) && *(_DWORD *)(v20 + 96) != (_DWORD)v27
       || (*(_DWORD *)(v30 + 8) & 0x100LL) != 0
       && (*(_DWORD *)(v20 + 76) != *(_DWORD *)(v30 + 96)
        || *(_DWORD *)(v20 + 80) != *(_DWORD *)(v30 + 100)
        || *(_DWORD *)(v20 + 96) != (_DWORD)v27))
      || (v35 = *(_QWORD *)(v16 + 16), *(_BYTE *)(v35 + 129))
      && (*(_DWORD *)v35 & 0x20000) != 0
      && *(_DWORD *)(v20 + 96) != 21 )
    {
LABEL_33:
      WdLogNewEntry5_WdTrace(v27, v22, v24, v25);
      goto LABEL_34;
    }
    ++*(_DWORD *)(v16 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, v44, v20, (struct _D3DKMDT_2DREGION)v19) == 1
      && (!*(_QWORD *)&v15 || (unsigned int)BmlCompareSourceModes(a1, a2, v44, v20, v15) == -1) )
    {
      WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
      v19 = (_DWORD *)v20;
    }
LABEL_34:
    v32 = *(_QWORD *)(v20 + 8);
    v17 = 0;
    v20 = v32 - 8;
    if ( v32 == v21 )
      v20 = 0LL;
  }
  while ( v20 );
  if ( !v19 )
    return 3223192326LL;
  v33 = *(_QWORD *)(a2 + 48);
  *a6 = v19[6];
  if ( !*(_QWORD *)(v33 + 8) )
  {
    v42 = WdLogNewEntry5_WdAssertion(a6, v14, v12, v13);
    WdLogEvent5_WdAssertion(v42);
  }
  DxgkLogCodePointPacket(0x20u, v44, v19[19], v19[20], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL) + 268LL));
  return 0LL;
}
