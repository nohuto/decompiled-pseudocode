/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00F6860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0009310 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009338 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E1708 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E5700 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r12
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDPNPRESENTPATH *v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 Container; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rcx
  D3DKMDT_HVIDPN v28; // rdi
  D3DKMDT_HVIDPN v29; // rbx
  __int64 v30; // r14
  int IsSupportedVidPn; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  BOOLEAN IsVidPnSupported; // al
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // r14
  __int64 v70; // rax
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // r9
  __int64 v75; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v76; // [rsp+24h] [rbp-2Ch]
  DXGK_ENUM_PIVOT v77[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _DXGKARG_ISSUPPORTEDVIDPN v78; // [rsp+38h] [rbp-18h] BYREF

  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6026);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = v9;
  if ( !v9 )
  {
    v49 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v49 + 24) = v5;
    WdLogEvent5_WdError(v49);
    LODWORD(v5) = -1071774976;
    goto LABEL_30;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v50[3] = 254LL;
    v50[4] = v8;
    v50[5] = v7;
    v50[6] = v5;
    WdLogEvent5_WdError(v50);
    LODWORD(v5) = -1071774907;
    goto LABEL_30;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v18 = Path;
  if ( !Path )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v51[3] = v8;
    v51[4] = v7;
    v51[5] = v5;
    WdLogEvent5_WdWarning(v51);
    LODWORD(v5) = -1071774937;
    goto LABEL_30;
  }
  v76 = *((_DWORD *)Path + 28);
  v19 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, (unsigned int)v6);
  v5 = v19;
  if ( v19 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v52[3] = v6;
    v52[4] = v8;
    v52[5] = v7;
    v52[6] = v5;
    WdLogEvent5_WdError(v52);
    goto LABEL_30;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v12 + 160);
  v77[0].VidPnSourceId = v8;
  v77[0].VidPnTargetId = v7;
  v26 = *(_QWORD *)(Container + 48);
  v27 = -(Container + 88);
  v28 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v28 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v27, v23, v24, v25);
    WdLogEvent5_WdAssertion(v53);
LABEL_44:
    v29 = 0LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)v28 + 16) != 1833172997 )
    goto LABEL_44;
  v29 = v28;
LABEL_10:
  if ( !*((_BYTE *)v29 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v29 + 24), v23, v24, v25) )
  {
    v54 = WdLogNewEntry5_WdError(v27, v23);
    *(_QWORD *)(v54 + 24) = v28;
    WdLogEvent5_WdError(v54);
    goto LABEL_34;
  }
  LOBYTE(v27) = *((_BYTE *)v29 + 172);
  if ( ((unsigned __int16)((2 << v27) - 1) & *((_WORD *)v29 + 87)) != 0 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v27, v23, v24, v25);
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*(_QWORD *)(v26 + 8) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v27, v23, v24, v25);
    WdLogEvent5_WdAssertion(v56);
  }
  v30 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144)) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v27, v23, v24, v25);
    WdLogEvent5_WdAssertion(v57);
  }
  v78.hDesiredVidPn = v28;
  *(_QWORD *)&v78.IsVidPnSupported = 0LL;
  if ( !*(_QWORD *)(v26 + 8) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v27, v23, v24, v25);
    WdLogEvent5_WdAssertion(v58);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(*(ADAPTER_DISPLAY **)(v26 + 8), &v78, v24, v25);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
    v59[3] = v28;
    v59[4] = v30;
    v59[5] = v5;
    WdLogEvent5_WdError(v59);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v78.IsVidPnSupported;
    LODWORD(v5) = 0;
  }
  if ( (int)v5 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
    v64[3] = v28;
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
      WdLogEvent5_WdAssertion(v65);
    }
    v64[4] = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    v64[5] = (int)v5;
    WdLogEvent5_WdError(v64);
    goto LABEL_28;
  }
  if ( !IsVidPnSupported )
  {
LABEL_34:
    v5 = WdLogNewEntry5_WdDmmEvent(v33, v32, v34, v35);
    *(_QWORD *)(v5 + 24) = v28;
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
      WdLogEvent5_WdAssertion(v66);
    }
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    WdLogEvent5_WdDmmEvent(v5);
    LODWORD(v5) = -1071774970;
LABEL_37:
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    v48[5] = a4;
    v48[3] = v8;
    v48[4] = v7;
    WdLogEvent5_WdWarning(v48);
    goto LABEL_55;
  }
  if ( !(_BYTE)a5 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32, v34, v35);
    v37[3] = 7LL;
    v37[4] = v28;
    v37[5] = v77[0].VidPnSourceId;
    v37[6] = v77[0].VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v37);
LABEL_27:
    LODWORD(v5) = 0;
    goto LABEL_28;
  }
  v43 = VIDPN_MGR::_EnumVidPnCofuncModality(v26, v28, 7LL, v77);
  v5 = v43;
  if ( v43 >= 0 )
    goto LABEL_27;
  v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
  v69 = v67;
  v67[3] = v28;
  v67[4] = 7LL;
  v67[5] = v77;
  if ( !*(_QWORD *)(v26 + 8) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v68, v38, v40, v41);
    WdLogEvent5_WdAssertion(v70);
  }
  v39 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
  v69[6] = v39;
  v69[7] = v5;
LABEL_28:
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_30;
  }
  if ( (_DWORD)v5 == -1071774970 )
    goto LABEL_37;
  v71 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
  v71[3] = a4;
  v71[6] = (int)v5;
  v71[4] = v8;
  v71[5] = v7;
  WdLogEvent5_WdError(v71);
LABEL_55:
  if ( v76 == D3DKMDT_VPPS_UNPINNED )
    v72 = DMMVIDPNPRESENTPATH::UnpinContentScaling(v18);
  else
    v72 = DMMVIDPNPRESENTPATH::PinContentScaling(v18, (unsigned int)v76);
  if ( v72 < 0 )
  {
    v75 = WdLogNewEntry5_WdAssertion(v39, v73, v40, v74);
    WdLogEvent5_WdAssertion(v75);
  }
LABEL_30:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v39, &EventProfilerExit, v40, 6026);
  return (unsigned int)v5;
}
