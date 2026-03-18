/*
 * XREFs of BmlFunctionalizePath @ 0x1C00D25F8
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D241C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlPinNextBestTargetMode @ 0x1C00D27EC (BmlPinNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D4260 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D4AB4 (BmlGetNextBestSourceMode.c)
 *     BmlUnPinSourceMode @ 0x1C01F88F4 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DMMVIDPNSOURCEMODESET *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rbx
  int NextBestSourceMode; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  VIDPN_MGR *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ebp
  __int64 v32; // rcx
  __int64 BestTargetMode; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  struct DMMVIDPNSOURCEMODESET *v50; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v51; // [rsp+88h] [rbp+10h]
  unsigned int v52; // [rsp+90h] [rbp+18h] BYREF
  __int64 v53; // [rsp+98h] [rbp+20h]

  v53 = a4;
  v5 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v11 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v12 = (unsigned int)v5;
  v51 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v51 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v36);
  }
  v13 = *(_QWORD *)(a4 + 88);
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
  {
    v50 = 0LL;
    goto LABEL_27;
  }
  v15 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v14 + 96), 1u);
  v16 = *(struct DMMVIDPNSOURCEMODESET **)(v13 + 104);
  v50 = v16;
  if ( !v16 )
  {
LABEL_27:
    LODWORD(v18) = -1071774968;
    goto LABEL_41;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v16 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v18) = -1071774970;
    goto LABEL_41;
  }
  LODWORD(v17) = -1;
  v52 = -1;
  if ( *(_WORD *)(v11 + a1 + 64) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v39 = WdLogNewEntry5_WdAssertion(1LL);
      WdLogEvent5_WdAssertion(v39);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v41, v40) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v11 + a1 + 66) && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v17) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
        v52 = v17;
        goto LABEL_11;
      }
      WdLogNewEntry5_WdTrace(v43, v42);
      *(_WORD *)(v11 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_25:
    LODWORD(v18) = BestTargetMode;
LABEL_18:
    v30 = v18;
LABEL_19:
    LODWORD(v18) = v30;
    goto LABEL_20;
  }
  if ( !*(_WORD *)(v11 + a1 + 66) || (unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v15, v9);
    if ( !*((_QWORD *)v16 + 18) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v38);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v34) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v11 + a1 + 64);
    goto LABEL_25;
  }
  if ( *((_QWORD *)v16 + 18) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v37);
  }
LABEL_11:
  LODWORD(v18) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v11 + a1 + 64) >= *(_WORD *)(v11 + a1 + 66) )
      goto LABEL_40;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, v17, (__int64)&v52);
    v18 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v17 = v52;
    if ( v52 == -1 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v44);
    }
    v23 = v51;
    ++*(_WORD *)(v11 + a1 + 64);
    v18 = (int)VIDPN_MGR::PinVidPnSourceMode(v23, v16, v17, 1);
    v26 = WdLogNewEntry5_WdTrace(v25, v24);
    *(_QWORD *)(v26 + 24) = v17;
    *(_QWORD *)(v26 + 32) = v18;
    if ( (int)v18 >= 0 )
    {
      LODWORD(v18) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v53);
      if ( (int)v18 >= 0 )
        goto LABEL_18;
    }
    *(_DWORD *)(v11 + a1 + 88) = v18;
    ++*(_DWORD *)(v11 + a1 + 72);
    if ( (_DWORD)v18 != -1071774970 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v12 = (unsigned __int16)v5;
      v45[3] = (int)v18;
      v45[5] = a2;
      v45[6] = (unsigned __int16)v5;
LABEL_38:
      v45[4] = a1;
      WdLogEvent5_WdWarning(v45);
      goto LABEL_41;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v12 = (unsigned __int16)v5;
    v45[3] = v18;
    v45[5] = (unsigned __int16)v5;
    v45[6] = a2;
    goto LABEL_38;
  }
LABEL_40:
  v12 = (unsigned __int16)v5;
LABEL_41:
  if ( *(_WORD *)(v11 + a1 + 66)
    && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL)
    && *(_WORD *)(v11 + a1 + 64) )
  {
    v30 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v30 >= 0 )
    {
      *(_WORD *)(v11 + a1 + 64) = 0;
      goto LABEL_20;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
    v49[3] = a1;
    v49[4] = a2;
    v49[5] = v12;
    WdLogEvent5_WdWarning(v49);
    goto LABEL_19;
  }
LABEL_20:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
  return (unsigned int)v18;
}
