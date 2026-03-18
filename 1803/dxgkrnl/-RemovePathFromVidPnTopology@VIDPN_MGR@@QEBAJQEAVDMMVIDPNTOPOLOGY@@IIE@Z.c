/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0216B04
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0212078 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C021C5B0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0004890 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0005F04 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007098 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C00072D8 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0007D04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0043BC4 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0044E58 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00450FC (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0045144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C004518C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0216224 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C0216348 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  unsigned __int8 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 Container; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rcx
  DMMVIDPNTARGETMODESET *v45; // rbx
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rax
  DMMVIDPNTARGETMODESET *v52; // rbx
  DMMVIDPNSOURCEMODE *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  UINT cx; // ecx
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  struct DMMVIDPNSOURCEMODESET *v62; // rdi
  __int64 v63; // rbx
  _QWORD *v64; // rax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rax
  struct DMMVIDPNTARGETMODESET *v71; // rbx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+40h] [rbp-C0h]
  char v82; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v83; // [rsp+44h] [rbp-BCh]
  unsigned int v84; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v85; // [rsp+4Ch] [rbp-B4h]
  unsigned int v86; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v87; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v88; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v89; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v90; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v91; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v92[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v93[24]; // [rsp+90h] [rbp-70h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v94; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v95[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v96[56]; // [rsp+118h] [rbp+18h] BYREF
  int v97; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v86 = a4;
  v81 = 0;
  v82 = 0;
  Path = 0LL;
  memset(&v94, 0, sizeof(v94));
  v92[2] = 0;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v95, 0, 0);
  v83 = D3DKMDT_VPPR_UNPINNED;
  v85 = D3DKMDT_VPPS_UNPINNED;
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
    (__int64)v93,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v11,
    v80,
    1uLL);
  v16 = DMMVIDPNTOPOLOGY::RemovePath(a2, v6, v5, 0LL);
  v21 = v16;
  if ( v16 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v93);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v25 = *((_QWORD *)this + 1);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v26);
      v25 = *((_QWORD *)this + 1);
    }
    v27 = *(_QWORD *)(v25 + 16);
    v28 = *(_QWORD *)(v27 + 2456);
    if ( *(_BYTE *)(v28 + 132) && *(_BYTE *)(v28 + 133)
      || (v29 = *(_QWORD **)(*(_QWORD *)(v27 + 192) + 64LL), *(_DWORD *)(v29[5] + 28LL) >= 0x4003u) )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v6, &v89);
      v21 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v89 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v89 != 1 )
        goto LABEL_46;
      v32 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v6, 0LL, &v84);
      v21 = v32;
      if ( v32 < 0 )
      {
LABEL_19:
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
LABEL_30:
        v31[4] = Container & -(__int64)(Container != -88);
        v31[3] = v6;
        v31[5] = v21;
LABEL_84:
        WdLogEvent5_WdError(v31);
        return (unsigned int)v21;
      }
      if ( v84 == -1 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v33);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v84);
      if ( !Path )
      {
        v34 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = *((_DWORD *)Path + 29);
      if ( v35 == 254 || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v35) - 2) & 0xFFFFFFFD) != 0 )
      {
        v83 = D3DKMDT_VPPR_UNPINNED;
        goto LABEL_46;
      }
      if ( !a5 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v21 = -1071774970LL;
        goto LABEL_30;
      }
      v83 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v36);
      DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v37, v38, v39);
      v85 = *((_DWORD *)Path + 28);
      if ( v85 != D3DKMDT_VPPS_UNPINNED )
        DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v40, v41, v42);
      v43 = *((_QWORD *)Path + 12);
      v44 = *(_QWORD *)(v43 + 104);
      if ( v44 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v44 + 96), 1u);
        v45 = *(DMMVIDPNTARGETMODESET **)(v43 + 104);
        v91 = v45;
        if ( v45 )
        {
          v46 = *((_QWORD *)v45 + 18);
          if ( v46 )
          {
            v82 = 1;
            DMMVIDEOSIGNALMODE::Initialize(
              (DMMVIDEOSIGNALMODE *)v96,
              (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72));
            v97 = *(_DWORD *)(v46 + 128);
            DMMVIDPNTARGETMODESET::UnpinMode(v45, v47, v48, v49);
          }
        }
      }
      else
      {
        v91 = 0LL;
      }
      v50 = *((_QWORD *)Path + 11);
      v51 = *(_QWORD *)(v50 + 104);
      if ( v51 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v51 + 96), 1u);
        v52 = *(DMMVIDPNTARGETMODESET **)(v50 + 104);
        v90 = v52;
        if ( v52 )
        {
          v53 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v52 + 18);
          if ( v53 )
          {
            v81 = 1;
            DMMVIDPNSOURCEMODE::Serialize(v53, &v94);
            DMMVIDPNTARGETMODESET::UnpinMode(v52, v54, v55, v56);
            if ( v94.Type != D3DKMDT_RMT_TEXT )
            {
              v94.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                     v94.Format.Graphics.PrimSurfSize.cx,
                                                                     v94.Format.Graphics.PrimSurfSize.cy);
              cx = v94.Format.Graphics.VisibleRegionSize.cx;
              v94.Format.Graphics.VisibleRegionSize.cx = v94.Format.Graphics.VisibleRegionSize.cy;
              *(_QWORD *)(&v94.Format.Text + 3) = cx;
            }
          }
        }
      }
      else
      {
        v90 = 0LL;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v91, 0LL);
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v92[0] = -1;
      v92[1] = -1;
      v58 = VIDPN_MGR::FormalizeVidPnChange(
              this,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              2,
              1,
              v92);
      v21 = v58;
      if ( v58 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v31[4] = v86;
        v31[3] = v6;
        v31[5] = Container & -(__int64)(Container != -88);
        v31[6] = v21;
        goto LABEL_84;
      }
    }
    if ( v81 )
    {
      v59 = *((_QWORD *)Path + 11);
      v60 = *(_QWORD *)(v59 + 104);
      if ( !v60 )
      {
        v87 = 0LL;
LABEL_52:
        v61 = WdLogNewEntry5_WdError(v29);
        WdLogEvent5_WdError(v61);
        LODWORD(v21) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v87, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedAdd((volatile signed __int32 *)(v60 + 96), 1u);
      v62 = *(struct DMMVIDPNSOURCEMODESET **)(v59 + 104);
      v87 = v62;
      if ( !v62 )
        goto LABEL_52;
      v63 = 0LL;
      v29 = (_QWORD *)*((_QWORD *)v62 + 6);
      if ( v29 != (_QWORD *)((char *)v62 + 48) )
        v63 = (__int64)(v29 - 1);
      if ( !v63 )
        goto LABEL_52;
      do
      {
        if ( v94.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v63 + 72) != 2 )
          v94.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v63)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v63, (__int64)&v94) )
          break;
        v64 = *(_QWORD **)(v63 + 8);
        v63 = (__int64)(v64 - 1);
        if ( v64 == (_QWORD *)((char *)v62 + 48) )
          v63 = 0LL;
      }
      while ( v63 );
      if ( !v63 )
        goto LABEL_52;
      v65 = VIDPN_MGR::PinVidPnSourceMode(this, v62, *(_DWORD *)(v63 + 24), 1);
      v21 = v65;
      if ( v65 < 0 )
      {
        v67 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v67 + 24) = v21;
        WdLogEvent5_WdError(v67);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v87, 0LL);
    }
    if ( v82 )
    {
      v68 = *((_QWORD *)Path + 12);
      v69 = *(_QWORD *)(v68 + 104);
      if ( !v69 )
      {
        v88 = 0LL;
LABEL_72:
        v70 = WdLogNewEntry5_WdError(v29);
        WdLogEvent5_WdError(v70);
        LODWORD(v21) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedAdd((volatile signed __int32 *)(v69 + 96), 1u);
      v71 = *(struct DMMVIDPNTARGETMODESET **)(v68 + 104);
      v88 = v71;
      if ( !v71 )
        goto LABEL_72;
      v72 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v71 + 24, (unsigned __int64)v95);
      if ( !v72 )
        goto LABEL_72;
      v73 = VIDPN_MGR::PinVidPnTargetMode(this, v71, *(_DWORD *)(v72 + 24), 1);
      v21 = v73;
      if ( v73 < 0 )
      {
        v75 = WdLogNewEntry5_WdError(v74);
        *(_QWORD *)(v75 + 24) = v21;
        WdLogEvent5_WdError(v75);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
    }
    if ( v85 == D3DKMDT_VPPS_UNPINNED || (v76 = VIDPN_MGR::PinPathContentScaling(this, Path, v85), v21 = v76, v76 >= 0) )
    {
      if ( v83 == D3DKMDT_VPPR_UNPINNED
        || (v78 = VIDPN_MGR::PinPathContentRotation(this, Path, v83), v21 = v78, v78 >= 0) )
      {
        LODWORD(v21) = 0;
        return (unsigned int)v21;
      }
    }
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v77);
    v31[3] = v21;
    goto LABEL_84;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  v22[3] = v6;
  v22[4] = v5;
  v22[5] = a2;
  v22[6] = v21;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v93);
  return (unsigned int)v21;
}
