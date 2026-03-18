/*
 * XREFs of BmlFunctionalizePath @ 0x1C00C348C
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1C00C1358 (BmlGetNextBestSourceMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00C29B0 (BmlIsSecondaryClonePath.c)
 *     BmlPinNextBestTargetMode @ 0x1C00C3244 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinSourceMode @ 0x1C022665C (BmlUnPinSourceMode.c)
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
  VIDPN_MGR *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // ebp
  __int64 v36; // rcx
  __int64 BestTargetMode; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  struct DMMVIDPNSOURCEMODESET *v60; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v61; // [rsp+88h] [rbp+10h]
  unsigned int v62; // [rsp+90h] [rbp+18h] BYREF
  __int64 v63; // [rsp+98h] [rbp+20h]

  v63 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v14 = (unsigned int)v5;
  v61 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v61 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v42);
  }
  v15 = *(_QWORD *)(a4 + 88);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v60 = 0LL;
    goto LABEL_27;
  }
  v17 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
  v18 = *(struct DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v60 = v18;
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
  v62 = -1;
  if ( *(_WORD *)(v13 + a1 + 64) )
  {
    if ( !*((_QWORD *)v18 + 18) )
    {
      v45 = WdLogNewEntry5_WdAssertion(1LL);
      WdLogEvent5_WdAssertion(v45);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v47, v46, v48, v49) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v13 + a1 + 66) && !BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)v18 + 18) + 24LL);
        v62 = v19;
        goto LABEL_11;
      }
      WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
      *(_WORD *)(v13 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_25:
    LODWORD(v20) = BestTargetMode;
LABEL_18:
    v34 = v20;
LABEL_19:
    LODWORD(v20) = v34;
    goto LABEL_20;
  }
  if ( !*(_WORD *)(v13 + a1 + 66) || BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v17, v9, v11, v12);
    if ( !*((_QWORD *)v18 + 18) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v44);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v39, v38, v40, v41) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v13 + a1 + 64);
    goto LABEL_25;
  }
  if ( *((_QWORD *)v18 + 18) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v43);
  }
LABEL_11:
  LODWORD(v20) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v13 + a1 + 64) >= *(_WORD *)(v13 + a1 + 66) )
      goto LABEL_40;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (__int64)v18, v19, &v62);
    v20 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v19 = v62;
    if ( v62 == -1 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v54);
    }
    v25 = v61;
    ++*(_WORD *)(v13 + a1 + 64);
    v20 = (int)VIDPN_MGR::PinVidPnSourceMode(v25, v18, v19, 1);
    v30 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v19;
    *(_QWORD *)(v30 + 32) = v20;
    if ( (int)v20 >= 0 )
    {
      LODWORD(v20) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v63);
      if ( (int)v20 >= 0 )
        goto LABEL_18;
    }
    *(_DWORD *)(v13 + a1 + 88) = v20;
    ++*(_DWORD *)(v13 + a1 + 72);
    if ( (_DWORD)v20 != -1071774970 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v14 = (unsigned __int16)v5;
      v55[3] = (int)v20;
      v55[5] = a2;
      v55[6] = (unsigned __int16)v5;
LABEL_38:
      v55[4] = a1;
      WdLogEvent5_WdWarning(v55);
      goto LABEL_41;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v14 = (unsigned __int16)v5;
    v55[3] = v20;
    v55[5] = (unsigned __int16)v5;
    v55[6] = a2;
    goto LABEL_38;
  }
LABEL_40:
  v14 = (unsigned __int16)v5;
LABEL_41:
  if ( *(_WORD *)(v13 + a1 + 66) && !BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) && *(_WORD *)(v13 + a1 + 64) )
  {
    v34 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v34 >= 0 )
    {
      *(_WORD *)(v13 + a1 + 64) = 0;
      goto LABEL_20;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
    v59[3] = a1;
    v59[4] = a2;
    v59[5] = v14;
    WdLogEvent5_WdWarning(v59);
    goto LABEL_19;
  }
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v60, 0LL);
  return (unsigned int)v20;
}
