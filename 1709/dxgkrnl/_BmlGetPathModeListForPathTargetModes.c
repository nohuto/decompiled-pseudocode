/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C01F8FE4
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00051A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C00D30A0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C00D3150 (BmlPinPathContentRotation.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00D4744 (BmlDoesTargetModeObeyConstraint.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C01F6CA8 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01F869C (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int v5; // edi
  __int64 v6; // r12
  __int64 v8; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  DMMVIDPNSOURCEMODESET *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  DMMVIDPNSOURCEMODE *v22; // rax
  struct DMMVIDPNSOURCEMODE *v23; // rbx
  _QWORD *v24; // rsi
  struct DMMVIDPNSOURCEMODE *i; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v44; // [rsp+20h] [rbp-81h] BYREF
  VIDPN_MGR *v45; // [rsp+28h] [rbp-79h]
  DMMVIDPNSOURCEMODE *v46; // [rsp+30h] [rbp-71h]
  struct DMMVIDPNSOURCEMODE *v47; // [rsp+38h] [rbp-69h]
  DMMVIDPNSOURCEMODESET *v48; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v49[10]; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v52; // [rsp+118h] [rbp+77h]

  v5 = 0;
  v6 = a3;
  v8 = 104LL * a3;
  v45 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v45 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v44 = 0LL;
LABEL_6:
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    v5 = -1071774968;
    goto LABEL_38;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD *)(v11 + 104);
  v44 = v13;
  if ( !v13 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a4 + 96);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(DMMVIDPNSOURCEMODESET **)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v48 = v17;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v18[3] = v17;
  v18[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v20 = *(unsigned __int16 *)(a1 + v8 + 70);
  v18[5] = v20;
  if ( !v17 )
  {
    v5 = -1071774967;
    goto LABEL_37;
  }
  if ( *((DMMVIDPNSOURCEMODESET **)v17 + 6) != (DMMVIDPNSOURCEMODESET *)((char *)v17 + 48) )
  {
    if ( !*(_QWORD *)(v13 + 144) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v21 + 24) = v13;
      *(_QWORD *)(v21 + 32) = v6;
      WdLogEvent5_WdAssertion(v21);
      v5 = -1071774968;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      WdLogNewEntry5_WdTrace(v20, v19);
    v22 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v23 = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)v17 + 18);
    v46 = v22;
    v47 = v23;
    v24 = (_QWORD *)*((_QWORD *)v17 + 6);
    if ( v24 != (_QWORD *)((char *)v17 + 48) )
    {
      for ( i = (struct DMMVIDPNSOURCEMODE *)(v24 - 1); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(v17, i) )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v26[3] = *((_DWORD *)i + 6) + ((*((_DWORD *)i + 30) & 0x1F8u) << 13);
        v26[4] = *((unsigned int *)i + 21);
        v26[5] = *((unsigned int *)i + 22);
        v27 = *((unsigned int *)i + 23);
        v26[6] = v27;
        v26[7] = *((unsigned int *)i + 24);
        ++*(_DWORD *)(a1 + v8 + 100);
        if ( (!v23 || v23 == i) && BmlDoesTargetModeObeyConstraint(a1, a3, (__int64)i) )
        {
          ++*(_DWORD *)(a1 + v8 + 104);
          v28 = *((_DWORD *)i + 6);
          v52 = v28;
          if ( v23 )
          {
            v5 = 0;
          }
          else
          {
            v5 = VIDPN_MGR::PinVidPnTargetMode(v45, v17, v28, 1);
            v28 = v52;
          }
          if ( v5 < 0 )
          {
            v29 = a2;
            v5 = 0;
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26) + 24) = v28;
            v29 = a2;
            if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
            {
              memset(v49, 0, 0x60uLL);
              GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v46);
              v31 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
              v32 = *(_OWORD *)&GraphicsInfo->Stride;
              LODWORD(GraphicsInfo) = *((_DWORD *)i + 32);
              *(_OWORD *)((char *)&v49[3] + 8) = v31;
              HIDWORD(v49[5]) = (_DWORD)GraphicsInfo;
              v33 = *(_OWORD *)((char *)i + 72);
              LODWORD(GraphicsInfo) = *((_DWORD *)v46 + 18);
              *(_OWORD *)((char *)&v49[4] + 8) = v32;
              v34 = *(_OWORD *)((char *)i + 88);
              v49[0] = v33;
              v35 = *(_OWORD *)((char *)i + 104);
              v49[1] = v34;
              BYTE8(v49[5]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
              *(_QWORD *)&v34 = *((_QWORD *)i + 15);
              v49[2] = v35;
              *(_QWORD *)&v49[3] = v34;
              v5 = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v49);
              if ( v5 < 0 )
              {
                v37 = WdLogNewEntry5_WdError(v36);
                WdLogEvent5_WdError(v37);
                break;
              }
            }
          }
          v40 = BmlUnPinPartialPathModalityOnPath(a1, v29, a3);
          if ( v40 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v41);
            v42[5] = a2;
            v42[3] = a1;
            v42[4] = v6;
            WdLogEvent5_WdWarning(v42);
            v5 = v40;
            break;
          }
          v23 = v47;
          if ( v47 )
            break;
        }
        else
        {
          WdLogNewEntry5_WdTrace(v27, v26);
        }
      }
    }
  }
LABEL_37:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v48, 0LL);
LABEL_38:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v44, 0LL);
  return (unsigned int)v5;
}
