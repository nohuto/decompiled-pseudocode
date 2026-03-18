/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00C1BE0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C00C3244 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005350 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C1A98 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C00C1DE4 (BmlCompareTargetModes.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNTARGETMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // bp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  struct DMMVIDPNTARGETMODE *v18; // rdi
  __int64 v19; // r12
  int v20; // ebx
  struct DMMVIDPNTARGETMODE *NextMode; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rax
  char v38; // [rsp+88h] [rbp+30h]

  v8 = a3;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !*(_QWORD *)(a5 + 144) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v35 + 32) = v8;
    *(_QWORD *)(v35 + 24) = a5;
    WdLogEvent5_WdAssertion(v35);
    return 3223192328LL;
  }
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v17 = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)a4 + 24, a6);
    if ( !v17 )
    {
      v36 = -1071774959;
LABEL_29:
      WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
      return v36;
    }
  }
  v18 = 0LL;
  v19 = 104LL * v8;
  *(_DWORD *)(v19 + a1 + 100) = 0;
  *(_DWORD *)(v19 + a1 + 104) = 0;
  v20 = *(_DWORD *)(a1 + 8) & 8;
  if ( v20 )
    WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
  v12 = (_QWORD *)((char *)a4 + 48);
  v16 = *((_QWORD *)a4 + 6);
  v38 = v20 != 0;
  NextMode = 0LL;
  if ( (DMMVIDPNTARGETMODESET *)v16 != (DMMVIDPNTARGETMODESET *)((char *)a4 + 48) )
    NextMode = (struct DMMVIDPNTARGETMODE *)(v16 - 8);
  if ( !NextMode )
    goto LABEL_28;
  do
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
    v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v22[4] = *((unsigned int *)NextMode + 21);
    v22[5] = *((unsigned int *)NextMode + 22);
    v25 = *((unsigned int *)NextMode + 23);
    v22[6] = v25;
    v22[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v19 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNTARGETMODE *)v17 || !BmlDoesTargetModeObeyConstraint(a1, v8, (__int64)NextMode) )
    {
      WdLogNewEntry5_WdTrace(v25, v22, v23, v24);
    }
    else
    {
      ++*(_DWORD *)(v19 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, v8, (_DWORD)NextMode, (__int64)v18, v38) == 1
        && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, v8, (_DWORD)NextMode, v17, v38) == -1) )
      {
        WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
        v18 = NextMode;
      }
    }
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(a4, NextMode);
  }
  while ( NextMode );
  if ( !v18 )
  {
LABEL_28:
    v36 = -1071774970;
    goto LABEL_29;
  }
  v30 = *(_QWORD *)(a2 + 48);
  *a7 = *((_DWORD *)v18 + 6);
  v31 = *(_QWORD *)(v30 + 8);
  if ( !v31 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a7);
    WdLogEvent5_WdAssertion(v37);
    v31 = *(_QWORD *)(v30 + 8);
  }
  DxgkLogCodePointPacket(
    0x21u,
    v8,
    *((_DWORD *)v18 + 21),
    *((_DWORD *)v18 + 22),
    *(_QWORD *)(*(_QWORD *)(v31 + 16) + 268LL));
  return 0LL;
}
