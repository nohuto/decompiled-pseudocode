/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C00D27EC
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00D25F8 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C00D30A0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C00D3150 (BmlPinPathContentRotation.c)
 *     BmlGetNextBestTargetMode @ 0x1C00D4540 (BmlGetNextBestTargetMode.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01F869C (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rax
  unsigned int v5; // edi
  unsigned __int16 v6; // r14
  __int64 v8; // rbp
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  struct DMMVIDPNTARGETMODESET *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rbx
  int NextBestTargetMode; // eax
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned __int16 v25; // bx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r14d
  _QWORD *v41; // rax
  __int64 v42; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v43; // [rsp+48h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v44; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v47; // [rsp+C0h] [rbp+18h]
  __int64 v48; // [rsp+C8h] [rbp+20h] BYREF

  v47 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v8 = 104LL * a3;
  v46 = a3;
  v43 = v4;
  v11 = a3;
  if ( !v4 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v29);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v48 = 0LL;
    goto LABEL_31;
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v42 = *(_QWORD *)(v12 + 104);
  v48 = v42;
  if ( !v42 )
  {
LABEL_31:
    v30 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v30 + 24) = v11;
    WdLogEvent5_WdError(v30);
    v5 = -1071774968;
    goto LABEL_22;
  }
  v14 = *(_QWORD *)(a4 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 96), 1u);
    v16 = *(struct DMMVIDPNTARGETMODESET **)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v44 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, a2);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v19 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v19;
  if ( !v16 )
  {
    LODWORD(v21) = -1071774967;
LABEL_48:
    v36 = WdLogNewEntry5_WdTrace(v19, v18);
    *(_QWORD *)(v36 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
    *(_QWORD *)(v36 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
    {
      v40 = BmlUnPinPartialPathModalityOnPath(a1, a2, v6);
      if ( v40 < 0 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
        v41[3] = a1;
        v41[4] = v11;
        v41[5] = a2;
        WdLogEvent5_WdWarning(v41);
        v5 = v40;
        goto LABEL_21;
      }
      *(_WORD *)(a1 + v8 + 68) = 0;
    }
    v5 = v21;
    goto LABEL_21;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v16 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v21) = -1071774970;
LABEL_47:
    v6 = v47;
    goto LABEL_48;
  }
  LODWORD(v20) = -1;
  v45 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v33);
    }
    if ( *(_WORD *)(a1 + v8 + 70) )
    {
      LODWORD(v20) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v45 = v20;
      goto LABEL_13;
    }
    WdLogNewEntry5_WdTrace(v19, v18);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_39;
  }
  if ( *(_WORD *)(a1 + v8 + 70) )
  {
    if ( *((_QWORD *)v16 + 18) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v32);
    }
LABEL_13:
    LODWORD(v21) = -1071774970;
    while ( 1 )
    {
      if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
        goto LABEL_46;
      NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v47, v16, v42, v20, &v45);
      v21 = NextBestTargetMode;
      if ( NextBestTargetMode < 0 )
        break;
      v20 = v45;
      if ( v45 == -1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v34);
      }
      ++*(_WORD *)(a1 + v8 + 68);
      LODWORD(v21) = VIDPN_MGR::PinVidPnTargetMode(v43, v16, v20, 1);
      if ( (int)v21 >= 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = v20;
        v25 = v47;
        if ( (int)BmlPinPathContentScaling(a1, a2, v47) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v25) >= 0 )
          goto LABEL_21;
        LODWORD(v21) = -1071774970;
      }
      ++*(_DWORD *)(a1 + v8 + 76);
      *(_DWORD *)(a1 + v8 + 88) = v21;
      if ( (_DWORD)v21 != -1071774970 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v24);
        v35[3] = (int)v21;
LABEL_44:
        v11 = v46;
        v35[4] = a1;
        v35[5] = v11;
        v35[6] = a2;
        WdLogEvent5_WdWarning(v35);
        goto LABEL_47;
      }
    }
    if ( NextBestTargetMode != -1071774970 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v23);
      v35[3] = v21;
      goto LABEL_44;
    }
LABEL_46:
    v11 = v46;
    goto LABEL_47;
  }
  if ( !*((_QWORD *)v16 + 18) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (int)BmlPinPathContentScaling(a1, a2, v6) < 0 || (int)BmlPinPathContentRotation(a1, a2, v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v28, v27);
LABEL_39:
    v5 = -1071774970;
    goto LABEL_21;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_21:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
LABEL_22:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v48, 0LL);
  return v5;
}
