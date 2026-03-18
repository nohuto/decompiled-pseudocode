/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C01F2340 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00041F8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005130 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000550C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006550 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C000B560 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B644 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000B848 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0034E50 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01EEA30 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01EEB54 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 Container; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v34; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v35; // r8d
  __int64 v36; // rbx
  __int64 v37; // rcx
  DMMVIDPNTARGETMODESET *v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rax
  DMMVIDPNSOURCEMODESET *v42; // rbx
  DMMVIDPNSOURCEMODE *v43; // rcx
  UINT cx; // ecx
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  struct DMMVIDPNSOURCEMODESET *v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNTARGETMODESET *v58; // rbx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v67; // [rsp+20h] [rbp-E0h]
  char v68; // [rsp+40h] [rbp-C0h]
  char v69; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v70; // [rsp+44h] [rbp-BCh]
  unsigned int v71; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v72; // [rsp+4Ch] [rbp-B4h]
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v74; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v75; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNSOURCEMODESET *v77; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v78; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v79[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v80[24]; // [rsp+90h] [rbp-70h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v81; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v82[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v83[56]; // [rsp+118h] [rbp+18h] BYREF
  int v84; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v73 = a4;
  v68 = 0;
  v69 = 0;
  Path = 0LL;
  memset(&v81, 0, sizeof(v81));
  v79[2] = 0;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v82, 0LL, 0);
  v70 = D3DKMDT_VPPR_UNPINNED;
  v72 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v15);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v80,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v11,
    v67,
    1LL);
  v16 = DMMVIDPNTOPOLOGY::RemovePath(a2, v6, v5, 0LL);
  v19 = v16;
  if ( v16 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v80);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    if ( !*((_QWORD *)this + 1) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = *((_QWORD *)this + 1);
    v25 = *(_QWORD *)(v24 + 16);
    if ( *(_BYTE *)(*(_QWORD *)(v25 + 2304) + 132LL) )
    {
      if ( !v24 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v26);
      }
      v24 = *((_QWORD *)this + 1);
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 2304LL);
      if ( *(_BYTE *)(v25 + 133) )
        goto LABEL_20;
    }
    if ( !v24 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL) + 64LL);
    if ( *(_DWORD *)(v28[5] + 28LL) >= 0x4003u )
    {
LABEL_20:
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v6, &v76);
      v19 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v76 = 0LL;
        goto LABEL_50;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_23;
      if ( v76 != 1 )
        goto LABEL_50;
      v31 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, (_QWORD *)(unsigned int)v6, 0LL, &v71);
      v19 = v31;
      if ( v31 < 0 )
      {
LABEL_23:
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
LABEL_34:
        v30[4] = Container & -(__int64)(Container != -88);
        v30[3] = v6;
        v30[5] = v19;
LABEL_87:
        WdLogEvent5_WdError(v30);
        return (unsigned int)v19;
      }
      if ( v71 == -1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v32);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v71);
      if ( !Path )
      {
        v33 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = *((_DWORD *)Path + 29);
      if ( v34 == D3DKMDT_VPPR_UNPINNED || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(v34) - 2) & 0xFFFFFFFD) != 0 )
      {
        v70 = D3DKMDT_VPPR_UNPINNED;
        goto LABEL_50;
      }
      if ( !a5 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v19 = -1071774970LL;
        goto LABEL_34;
      }
      v70 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v35);
      DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
      v72 = *((_DWORD *)Path + 28);
      if ( v72 != D3DKMDT_VPPS_UNPINNED )
        DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
      v36 = *((_QWORD *)Path + 12);
      v37 = *(_QWORD *)(v36 + 104);
      if ( v37 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v37 + 96), 1u);
        v38 = *(DMMVIDPNTARGETMODESET **)(v36 + 104);
        v78 = v38;
        if ( v38 )
        {
          v39 = *((_QWORD *)v38 + 18);
          if ( v39 )
          {
            v69 = 1;
            DMMVIDEOSIGNALMODE::Initialize(
              (DMMVIDEOSIGNALMODE *)v83,
              (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v39 + 72));
            v84 = *(_DWORD *)(v39 + 128);
            DMMVIDPNTARGETMODESET::UnpinMode(v38);
          }
        }
      }
      else
      {
        v78 = 0LL;
      }
      v40 = *((_QWORD *)Path + 11);
      v41 = *(_QWORD *)(v40 + 104);
      if ( v41 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v41 + 96), 1u);
        v42 = *(DMMVIDPNSOURCEMODESET **)(v40 + 104);
        v77 = v42;
        if ( v42 )
        {
          v43 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v42 + 18);
          if ( v43 )
          {
            v68 = 1;
            DMMVIDPNSOURCEMODE::Serialize(v43, &v81);
            DMMVIDPNSOURCEMODESET::UnpinMode(v42);
            if ( v81.Type != D3DKMDT_RMT_TEXT )
            {
              v81.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                     v81.Format.Graphics.PrimSurfSize.cx,
                                                                     v81.Format.Graphics.PrimSurfSize.cy);
              cx = v81.Format.Graphics.VisibleRegionSize.cx;
              v81.Format.Graphics.VisibleRegionSize.cx = v81.Format.Graphics.VisibleRegionSize.cy;
              *(_QWORD *)(&v81.Format.Text + 3) = cx;
            }
          }
        }
      }
      else
      {
        v77 = 0LL;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v77, 0LL);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
    }
LABEL_50:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v79[0] = -1;
      v79[1] = -1;
      v45 = VIDPN_MGR::FormalizeVidPnChange(
              (__int64)this,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              2,
              1,
              v79);
      v19 = v45;
      if ( v45 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v30[4] = v73;
        v30[3] = v6;
        v30[5] = Container & -(__int64)(Container != -88);
        v30[6] = v19;
        goto LABEL_87;
      }
    }
    if ( v68 )
    {
      v46 = *((_QWORD *)Path + 11);
      v47 = *(_QWORD *)(v46 + 104);
      if ( !v47 )
      {
        v74 = 0LL;
LABEL_56:
        v48 = WdLogNewEntry5_WdError(v28);
        WdLogEvent5_WdError(v48);
        LODWORD(v19) = -1071774958;
LABEL_57:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v74, 0LL);
        return (unsigned int)v19;
      }
      _InterlockedAdd((volatile signed __int32 *)(v47 + 96), 1u);
      v49 = *(struct DMMVIDPNSOURCEMODESET **)(v46 + 104);
      v74 = v49;
      if ( !v49 )
        goto LABEL_56;
      v50 = (_QWORD *)*((_QWORD *)v49 + 6);
      if ( v50 == (_QWORD *)((char *)v49 + 48) )
        goto LABEL_56;
      v51 = (__int64)(v50 - 1);
      if ( !v51 )
        goto LABEL_56;
      do
      {
        if ( v81.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v51 + 72) != 2 )
          v81.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v51)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v51, (__int64)&v81) )
          break;
        v28 = *(_QWORD **)(v51 + 8);
        v51 = (__int64)(v28 - 1);
        if ( v28 == (_QWORD *)((char *)v49 + 48) )
          v51 = 0LL;
      }
      while ( v51 );
      if ( !v51 )
        goto LABEL_56;
      v52 = VIDPN_MGR::PinVidPnSourceMode(this, v49, *(_DWORD *)(v51 + 24), 1);
      v19 = v52;
      if ( v52 < 0 )
      {
        v54 = WdLogNewEntry5_WdError(v53);
        *(_QWORD *)(v54 + 24) = v19;
        WdLogEvent5_WdError(v54);
        goto LABEL_57;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v74, 0LL);
    }
    if ( v69 )
    {
      v55 = *((_QWORD *)Path + 12);
      v56 = *(_QWORD *)(v55 + 104);
      if ( !v56 )
      {
        v75 = 0LL;
LABEL_75:
        v57 = WdLogNewEntry5_WdError(v28);
        WdLogEvent5_WdError(v57);
        LODWORD(v19) = -1071774958;
LABEL_76:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v75, 0LL);
        return (unsigned int)v19;
      }
      _InterlockedAdd((volatile signed __int32 *)(v56 + 96), 1u);
      v58 = *(struct DMMVIDPNTARGETMODESET **)(v55 + 104);
      v75 = v58;
      if ( !v58 )
        goto LABEL_75;
      v59 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v58 + 24, (__int64)v82);
      if ( !v59 )
        goto LABEL_75;
      v60 = VIDPN_MGR::PinVidPnTargetMode(this, v58, *(_DWORD *)(v59 + 24), 1);
      v19 = v60;
      if ( v60 < 0 )
      {
        v62 = WdLogNewEntry5_WdError(v61);
        *(_QWORD *)(v62 + 24) = v19;
        WdLogEvent5_WdError(v62);
        goto LABEL_76;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v75, 0LL);
    }
    if ( v72 == D3DKMDT_VPPS_UNPINNED || (v63 = VIDPN_MGR::PinPathContentScaling(this, Path, v72), v19 = v63, v63 >= 0) )
    {
      if ( v70 == D3DKMDT_VPPR_UNPINNED
        || (v65 = VIDPN_MGR::PinPathContentRotation(this, Path, v70), v19 = v65, v65 >= 0) )
      {
        LODWORD(v19) = 0;
        return (unsigned int)v19;
      }
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v64);
    v30[3] = v19;
    goto LABEL_87;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
  v20[3] = v6;
  v20[4] = v5;
  v20[5] = a2;
  v20[6] = v19;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v80);
  return (unsigned int)v19;
}
