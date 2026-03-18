/*
 * XREFs of BmlFunctionalizePath @ 0x1C00F22E4
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F210C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlPinNextBestTargetMode @ 0x1C00F24D8 (BmlPinNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00F3B80 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C00F48C0 (BmlGetNextBestSourceMode.c)
 *     BmlUnPinSourceMode @ 0x1C01DF7DC (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DMMVIDPNSOURCEMODESET *v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  int NextBestSourceMode; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  VIDPN_MGR *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 BestTargetMode; // rbp
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  struct DMMVIDPNSOURCEMODESET *v66; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v67; // [rsp+88h] [rbp+10h]
  unsigned int v68; // [rsp+90h] [rbp+18h] BYREF
  __int64 v69; // [rsp+98h] [rbp+20h]

  v69 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v14 = (unsigned int)v5;
  v67 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v67 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v47);
  }
  v15 = *(_QWORD *)(a4 + 88);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v66 = 0LL;
    goto LABEL_27;
  }
  v17 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
  v18 = *(struct DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v66 = v18;
  if ( !v18 )
  {
LABEL_27:
    LODWORD(v20) = -1071774968;
    goto LABEL_41;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v18 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v18 + 48) )
  {
    LODWORD(v20) = -1071774970;
    goto LABEL_41;
  }
  LODWORD(v19) = -1;
  v68 = -1;
  if ( *(_WORD *)(v13 + a1 + 64) )
  {
    if ( !*((_QWORD *)v18 + 18) )
    {
      v50 = WdLogNewEntry5_WdAssertion(1LL, v9, v11, v12);
      WdLogEvent5_WdAssertion(v50);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v52, v51, v53, v54) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v13 + a1 + 66) && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)v18 + 18) + 24LL);
        v68 = v19;
        goto LABEL_11;
      }
      WdLogNewEntry5_WdTrace(v56, v55, v57, v58);
      *(_WORD *)(v13 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_25:
    LODWORD(v20) = BestTargetMode;
LABEL_18:
    v36 = v20;
LABEL_19:
    LODWORD(v20) = v36;
    goto LABEL_20;
  }
  if ( !*(_WORD *)(v13 + a1 + 66) || (unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v17, v9, v11, v12);
    if ( !*((_QWORD *)v18 + 18) )
    {
      v49 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      WdLogEvent5_WdAssertion(v49);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v44, v43, v45, v46) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v13 + a1 + 64);
    goto LABEL_25;
  }
  if ( *((_QWORD *)v18 + 18) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v17, v9, v11, v12);
    WdLogEvent5_WdAssertion(v48);
  }
LABEL_11:
  LODWORD(v20) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v13 + a1 + 64) >= *(_WORD *)(v13 + a1 + 66) )
      goto LABEL_40;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, v19, (__int64)&v68);
    v20 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v19 = v68;
    if ( v68 == -1 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      WdLogEvent5_WdAssertion(v59);
    }
    v26 = v67;
    ++*(_WORD *)(v13 + a1 + 64);
    LOBYTE(v25) = 1;
    v20 = (int)VIDPN_MGR::PinVidPnSourceMode(v26, v18, (unsigned int)v19, v25);
    v31 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = v19;
    *(_QWORD *)(v31 + 32) = v20;
    if ( (int)v20 >= 0 )
    {
      LODWORD(v20) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v69);
      if ( (int)v20 >= 0 )
        goto LABEL_18;
    }
    *(_DWORD *)(v13 + a1 + 88) = v20;
    ++*(_DWORD *)(v13 + a1 + 72);
    if ( (_DWORD)v20 != -1071774970 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      v14 = (unsigned __int16)v5;
      v60[3] = (int)v20;
      v60[5] = a2;
      v60[6] = (unsigned __int16)v5;
LABEL_38:
      v60[4] = a1;
      WdLogEvent5_WdWarning(v60);
      goto LABEL_41;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v14 = (unsigned __int16)v5;
    v60[3] = v20;
    v60[5] = (unsigned __int16)v5;
    v60[6] = a2;
    goto LABEL_38;
  }
LABEL_40:
  v14 = (unsigned __int16)v5;
LABEL_41:
  if ( *(_WORD *)(v13 + a1 + 66)
    && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL)
    && *(_WORD *)(v13 + a1 + 64) )
  {
    v36 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v36 >= 0 )
    {
      *(_WORD *)(v13 + a1 + 64) = 0;
      goto LABEL_20;
    }
    v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63, v64);
    v65[3] = a1;
    v65[4] = a2;
    v65[5] = v14;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_19;
  }
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v66, 0LL);
  return (unsigned int)v20;
}
