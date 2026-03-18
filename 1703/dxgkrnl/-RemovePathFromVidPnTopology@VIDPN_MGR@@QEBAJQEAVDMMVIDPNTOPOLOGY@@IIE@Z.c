/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C01D9180 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0007480 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0007988 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000889C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00092E8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0009310 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0009C10 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CDC8 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000CFB0 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00441CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01D2F08 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 Container; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int NumPathsFromSource; // eax
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rcx
  DMMVIDPNTARGETMODESET *v49; // rbx
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rax
  DMMVIDPNSOURCEMODESET *v53; // rbx
  DMMVIDPNSOURCEMODE *v54; // rcx
  UINT cx; // ecx
  int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  struct DMMVIDPNSOURCEMODESET *v60; // rdi
  _QWORD *v61; // rbx
  __int64 v62; // rbx
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  struct DMMVIDPNTARGETMODESET *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // r9
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v82; // [rsp+20h] [rbp-E0h]
  char v83; // [rsp+40h] [rbp-C0h]
  char v84; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v85; // [rsp+44h] [rbp-BCh]
  unsigned int v86; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v87; // [rsp+4Ch] [rbp-B4h]
  unsigned int v88; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v89; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v91; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNSOURCEMODESET *v92; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v93; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v94[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v95[24]; // [rsp+90h] [rbp-70h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v96; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v97[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v98[56]; // [rsp+118h] [rbp+18h] BYREF
  int v99; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v88 = a4;
  v83 = 0;
  v84 = 0;
  Path = 0LL;
  memset(&v96, 0, sizeof(v96));
  v94[2] = 0;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v97, 0LL, 0);
  v85 = D3DKMDT_VPPR_UNPINNED;
  v87 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v16);
  }
  LOBYTE(v11) = *((_BYTE *)a2 + 76);
  if ( ((unsigned __int16)((2 << v11) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v17);
  }
  LOBYTE(v12) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v95,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    v12,
    v13,
    v82,
    1LL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath((char **)a2, (char *)(unsigned int)v6, (unsigned int)v5, 0LL);
  v23 = v18;
  if ( v18 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v95,
      v19,
      v21,
      v22);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    if ( g_Win32kSupportsPathIndependentRotation )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
        WdLogEvent5_WdAssertion(v33);
      }
      v28 = *((_QWORD *)this + 1);
      v34 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 2280LL);
      if ( *(_BYTE *)(v34 + 133) )
      {
        if ( !v28 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34, 0LL, v31, v32);
          WdLogEvent5_WdAssertion(v35);
        }
        v28 = *((_QWORD *)this + 1);
        v34 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 2280LL);
        if ( *(_BYTE *)(v34 + 134) )
          goto LABEL_21;
      }
      if ( !v28 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v34, 0LL, v31, v32);
        WdLogEvent5_WdAssertion(v36);
      }
      v29 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL) + 64LL);
      if ( *(_DWORD *)(v29[5] + 28LL) >= 0x4003u )
      {
LABEL_21:
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v6, &v91);
        v23 = NumPathsFromSource;
        if ( NumPathsFromSource == -1071774919 )
        {
          v91 = 0LL;
          goto LABEL_51;
        }
        if ( NumPathsFromSource < 0 )
          goto LABEL_24;
        if ( v91 != 1 )
          goto LABEL_51;
        v39 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, (unsigned int)v6, 0LL, &v86);
        v23 = v39;
        if ( v39 < 0 )
        {
LABEL_24:
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
LABEL_35:
          v38[4] = Container & -(__int64)(Container != -88);
          v38[3] = v6;
          v38[5] = v23;
LABEL_88:
          WdLogEvent5_WdError(v38);
          return (unsigned int)v23;
        }
        if ( v86 == -1 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v29, v28, v40, v41);
          WdLogEvent5_WdAssertion(v42);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v86);
        if ( !Path )
        {
          v44 = WdLogNewEntry5_WdAssertion(v29, v28, v43, v32);
          WdLogEvent5_WdAssertion(v44);
        }
        v31 = *((unsigned int *)Path + 29);
        if ( (_DWORD)v31 == 254
          || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v31) - 2) & 0xFFFFFFFD) != 0 )
        {
          v85 = D3DKMDT_VPPR_UNPINNED;
          goto LABEL_51;
        }
        if ( !a5 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
          v23 = -1071774970LL;
          goto LABEL_35;
        }
        v85 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v31);
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
        v87 = *((_DWORD *)Path + 28);
        if ( v87 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
        v47 = *((_QWORD *)Path + 12);
        v48 = *(_QWORD *)(v47 + 104);
        if ( v48 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v48 + 96), 1u);
          v49 = *(DMMVIDPNTARGETMODESET **)(v47 + 104);
          v93 = v49;
          if ( v49 )
          {
            v50 = *((_QWORD *)v49 + 18);
            if ( v50 )
            {
              v84 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v98,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v50 + 72));
              v99 = *(_DWORD *)(v50 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v49);
            }
          }
        }
        else
        {
          v93 = 0LL;
        }
        v51 = *((_QWORD *)Path + 11);
        v52 = *(_QWORD *)(v51 + 104);
        if ( v52 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v52 + 96), 1u);
          v53 = *(DMMVIDPNSOURCEMODESET **)(v51 + 104);
          v92 = v53;
          if ( v53 )
          {
            v54 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v53 + 18);
            if ( v54 )
            {
              v83 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v54, &v96, v45, v46);
              DMMVIDPNSOURCEMODESET::UnpinMode(v53);
              if ( v96.Type != D3DKMDT_RMT_TEXT )
              {
                v96.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v96.Format.Graphics.PrimSurfSize.cx,
                                                                       v96.Format.Graphics.PrimSurfSize.cy);
                cx = v96.Format.Graphics.VisibleRegionSize.cx;
                v96.Format.Graphics.VisibleRegionSize.cx = v96.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v96.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v92 = 0LL;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v92, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v93, 0LL);
      }
    }
LABEL_51:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v94[0] = -1;
      v94[1] = -1;
      LOBYTE(v32) = 1;
      v56 = VIDPN_MGR::FormalizeVidPnChange((__int64)this, Container & -(__int64)(Container != -88), 2LL, v32, v94);
      v23 = v56;
      if ( v56 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
        v38[4] = v88;
        v38[3] = v6;
        v38[5] = Container & -(__int64)(Container != -88);
        v38[6] = v23;
        goto LABEL_88;
      }
    }
    if ( v83 )
    {
      v57 = *((_QWORD *)Path + 11);
      v58 = *(_QWORD *)(v57 + 104);
      if ( !v58 )
      {
        v89 = 0LL;
LABEL_57:
        v59 = WdLogNewEntry5_WdError(v29, v28);
        WdLogEvent5_WdError(v59);
        LODWORD(v23) = -1071774958;
LABEL_58:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedAdd((volatile signed __int32 *)(v58 + 96), 1u);
      v60 = *(struct DMMVIDPNSOURCEMODESET **)(v57 + 104);
      v89 = v60;
      if ( !v60 )
        goto LABEL_57;
      v61 = (_QWORD *)*((_QWORD *)v60 + 6);
      if ( v61 == (_QWORD *)((char *)v60 + 48) )
        goto LABEL_57;
      v62 = (__int64)(v61 - 1);
      if ( !v62 )
        goto LABEL_57;
      do
      {
        if ( v96.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v62 + 72) != 2 )
          v96.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v62, v28, v31, v32)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v62, (__int64)&v96, v31, v32) )
          break;
        v29 = *(_QWORD **)(v62 + 8);
        v62 = (__int64)(v29 - 1);
        if ( v29 == (_QWORD *)((char *)v60 + 48) )
          v62 = 0LL;
      }
      while ( v62 );
      if ( !v62 )
        goto LABEL_57;
      LOBYTE(v32) = 1;
      v63 = VIDPN_MGR::PinVidPnSourceMode(this, v60, *(unsigned int *)(v62 + 24), v32);
      v23 = v63;
      if ( v63 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v65, v64);
        *(_QWORD *)(v66 + 24) = v23;
        WdLogEvent5_WdError(v66);
        goto LABEL_58;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
    }
    if ( v84 )
    {
      v67 = *((_QWORD *)Path + 12);
      v68 = *(_QWORD *)(v67 + 104);
      if ( !v68 )
      {
        v90 = 0LL;
LABEL_76:
        v69 = WdLogNewEntry5_WdError(v29, v28);
        WdLogEvent5_WdError(v69);
        LODWORD(v23) = -1071774958;
LABEL_77:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedAdd((volatile signed __int32 *)(v68 + 96), 1u);
      v70 = *(struct DMMVIDPNTARGETMODESET **)(v67 + 104);
      v90 = v70;
      if ( !v70 )
        goto LABEL_76;
      v71 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v70 + 24, (__int64)v97);
      if ( !v71 )
        goto LABEL_76;
      LOBYTE(v72) = 1;
      v73 = VIDPN_MGR::PinVidPnTargetMode(this, v70, *(unsigned int *)(v71 + 24), v72);
      v23 = v73;
      if ( v73 < 0 )
      {
        v76 = WdLogNewEntry5_WdError(v75, v74);
        *(_QWORD *)(v76 + 24) = v23;
        WdLogEvent5_WdError(v76);
        goto LABEL_77;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
    }
    if ( v87 == D3DKMDT_VPPS_UNPINNED
      || (v77 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, (unsigned int)v87, v32),
          v23 = v77,
          v77 >= 0) )
    {
      if ( v85 == D3DKMDT_VPPR_UNPINNED
        || (v80 = VIDPN_MGR::PinPathContentRotation((ADAPTER_DISPLAY **)this, Path, (unsigned int)v85, v32),
            v23 = v80,
            v80 >= 0) )
      {
        LODWORD(v23) = 0;
        return (unsigned int)v23;
      }
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78);
    v38[3] = v23;
    goto LABEL_88;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  v24[3] = v6;
  v24[4] = v5;
  v24[5] = a2;
  v24[6] = v23;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v95, v25, v26, v27);
  return (unsigned int)v23;
}
