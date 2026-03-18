/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C0226D40
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005350 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C1A98 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlPinPathContentRotation @ 0x1C00C2AE0 (BmlPinPathContentRotation.c)
 *     BmlPinPathContentScaling @ 0x1C00C3080 (BmlPinPathContentScaling.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C022486C (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C022640C (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r12
  _QWORD *v22; // rcx
  DMMVIDPNSOURCEMODE *v23; // rdx
  __int64 v24; // rax
  struct DMMVIDPNTARGETMODE *NextMode; // rsi
  __int64 v26; // rbx
  struct DMMVIDPNTARGETMODE *v27; // r12
  _QWORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int16 v33; // r12
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r12d
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v48; // [rsp+20h] [rbp-81h]
  DMMVIDPNSOURCEMODE *v49; // [rsp+28h] [rbp-79h]
  struct DMMVIDPNTARGETMODE *v50; // [rsp+30h] [rbp-71h]
  __int64 v51; // [rsp+38h] [rbp-69h] BYREF
  VIDPN_MGR *v52; // [rsp+40h] [rbp-61h]
  _QWORD *v53; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v54[10]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v56; // [rsp+110h] [rbp+6Fh]
  unsigned int v57; // [rsp+118h] [rbp+77h]

  v56 = a3;
  v5 = 0;
  v6 = (unsigned __int16)a3;
  v8 = 104LL * (unsigned __int16)a3;
  v52 = *(VIDPN_MGR **)(a2 + 48);
  v48 = v8;
  if ( !v52 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v51 = 0LL;
LABEL_6:
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    v5 = -1071774968;
    goto LABEL_41;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD *)(v11 + 104);
  v51 = v13;
  if ( !v13 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a4 + 96);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD **)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v53 = v17;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v18[3] = v17;
  v18[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v18[5] = *(unsigned __int16 *)(v8 + a1 + 70);
  if ( !v17 )
  {
    v5 = -1071774967;
    goto LABEL_40;
  }
  v21 = v17 + 6;
  v22 = (_QWORD *)v17[6];
  if ( v22 != v17 + 6 )
  {
    v23 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v49 = v23;
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = v13;
      *(_QWORD *)(v24 + 32) = v6;
      WdLogEvent5_WdAssertion(v24);
      v5 = -1071774968;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v22, v23, v19, v20);
      v22 = (_QWORD *)*v21;
      v49 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    }
    v50 = (struct DMMVIDPNTARGETMODE *)v17[18];
    NextMode = 0LL;
    if ( v22 != v21 )
      NextMode = (struct DMMVIDPNTARGETMODE *)(v22 - 1);
    if ( NextMode )
    {
      v26 = v48;
      v27 = (struct DMMVIDPNTARGETMODE *)v17[18];
      do
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v23, v19, v20);
        v28[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
        v28[4] = *((unsigned int *)NextMode + 21);
        v28[5] = *((unsigned int *)NextMode + 22);
        v31 = *((unsigned int *)NextMode + 23);
        v28[6] = v31;
        v28[7] = *((unsigned int *)NextMode + 24);
        ++*(_DWORD *)(v26 + a1 + 100);
        if ( (!v27 || v27 == NextMode) && BmlDoesTargetModeObeyConstraint(a1, v56, (__int64)NextMode) )
        {
          ++*(_DWORD *)(v26 + a1 + 104);
          v32 = *((_DWORD *)NextMode + 6);
          v57 = v32;
          if ( v27 )
          {
            v5 = 0;
          }
          else
          {
            v5 = VIDPN_MGR::PinVidPnTargetMode(v52, (struct DMMVIDPNTARGETMODESET *const)v17, v32, 1);
            v32 = v57;
          }
          if ( v5 < 0 )
          {
            v33 = v56;
            v5 = 0;
          }
          else
          {
            v33 = v56;
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v28, v29, v30) + 24) = v32;
            if ( (int)BmlPinPathContentScaling(a1, a2, v56) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v56) >= 0 )
            {
              memset(v54, 0, 0x60uLL);
              GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49);
              v35 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
              v36 = *(_OWORD *)&GraphicsInfo->Stride;
              LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
              *(_OWORD *)((char *)&v54[3] + 8) = v35;
              HIDWORD(v54[5]) = (_DWORD)GraphicsInfo;
              v37 = *(_OWORD *)((char *)NextMode + 72);
              LODWORD(GraphicsInfo) = *((_DWORD *)v49 + 18);
              *(_OWORD *)((char *)&v54[4] + 8) = v36;
              v38 = *(_OWORD *)((char *)NextMode + 88);
              v54[0] = v37;
              v39 = *(_OWORD *)((char *)NextMode + 104);
              v54[1] = v38;
              BYTE8(v54[5]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
              *(_QWORD *)&v38 = *((_QWORD *)NextMode + 15);
              v54[2] = v39;
              *(_QWORD *)&v54[3] = v38;
              v5 = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v54);
              if ( v5 < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v40);
                WdLogEvent5_WdError(v45);
                break;
              }
            }
            v26 = v48;
          }
          v44 = BmlUnPinPartialPathModalityOnPath(a1, a2, v33);
          if ( v44 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
            v46[5] = a2;
            v46[3] = a1;
            v46[4] = v6;
            WdLogEvent5_WdWarning(v46);
            v5 = v44;
            break;
          }
          v27 = v50;
          if ( v50 )
            break;
        }
        else
        {
          WdLogNewEntry5_WdTrace(v31, v28, v29, v30);
        }
        NextMode = DMMVIDPNTARGETMODESET::GetNextMode((DMMVIDPNTARGETMODESET *)v17, NextMode);
      }
      while ( NextMode );
    }
  }
LABEL_40:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v53, 0LL);
LABEL_41:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v51, 0LL);
  return (unsigned int)v5;
}
