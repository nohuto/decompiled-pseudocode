/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01036AC (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C01037AC (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C010381C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C010392C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C01C3704 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C3E48 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C4258 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C43F0 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01F78F4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01F7B28 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  int MonitorType; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  unsigned __int8 v14; // al
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rcx
  struct CCD_BTL *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int16 v35; // cx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  _QWORD *v39; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v40; // eax
  int v41; // ebx
  unsigned int v42; // r15d
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rbx
  unsigned int i; // r15d
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int v54; // r15d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  int v60; // r15d
  _QWORD *v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r15
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rax
  unsigned int v70; // edx
  unsigned int v71; // r8d
  unsigned int v72; // r9d
  __int64 v73; // rdx
  __int16 v74; // ax
  unsigned __int8 v75; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  struct _LUID *v77; // rax
  unsigned __int8 v78; // al
  __int64 v79; // rcx
  unsigned __int16 v80; // bx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  unsigned __int16 v87; // dx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int j; // ebx
  __int64 v94; // rcx
  unsigned __int16 v95; // ax
  __int16 v96; // bx
  unsigned __int16 v97; // bx
  __int64 v98; // rcx
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // r15
  __int64 v103; // rax
  unsigned int v104; // r15d
  char v105; // al
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v109; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v110; // rcx
  __int64 v111; // rax
  __int128 v112; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v113; // rbx
  char v114; // al
  __int64 v115; // rcx
  __int64 v116; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v117; // rcx
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rbx
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // r15
  __int64 v132; // rax
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rbx
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  unsigned __int8 v141[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v142[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v143; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-A4h]
  int v145; // [rsp+68h] [rbp-A0h]
  int v146; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int UnusedVidpnSourceId; // [rsp+70h] [rbp-98h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v148; // [rsp+74h] [rbp-94h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v149[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v150; // [rsp+B8h] [rbp-50h]
  int v151; // [rsp+C4h] [rbp-44h]
  int v152; // [rsp+C8h] [rbp-40h]
  struct D3DKMT_GETPATHSMODALITY *v153[12]; // [rsp+D8h] [rbp-30h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v154[8]; // [rsp+138h] [rbp+30h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v155; // [rsp+178h] [rbp+70h]

  v6 = a4;
  v8 = a3;
  if ( a5 != 4 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v149, 8u, 0);
    v20 = CCD_BTL::Global(v19);
    v21 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v149, v20);
    v23 = 0;
    v24 = v21;
    if ( v21 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v25[3] = v24;
      v25[4] = a2->HighPart;
      v25[5] = a2->LowPart;
      v25[6] = v8;
      v25[7] = v6;
      WdLogEvent5_WdError(v25);
      DxgkLogCodePointPacket(0x3Eu, 0, v24, 0, (__int64)*a2);
LABEL_14:
      *(_BYTE *)(a1 + 25) = 1;
      *(_BYTE *)(a1 + 30) = 1;
LABEL_148:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v149);
      return v23;
    }
    v28 = *((_DWORD *)DXGGLOBAL::GetGlobal(v22) + 314);
    if ( v28 > 1 )
    {
      v30 = WdLogNewEntry5_WdWarning(v27, v26, v29);
      *(_QWORD *)(v30 + 24) = 3539LL;
      WdLogEvent5_WdWarning(v30);
      DxgkLogCodePointPacket(0x52u, v28, 1u, 0, (__int64)*a2);
      goto LABEL_14;
    }
    v31 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v33 = v31;
    if ( v31 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v34[3] = v33;
      v34[4] = a2->HighPart;
      v34[5] = a2->LowPart;
      v34[6] = v8;
      v34[7] = v6;
      WdLogEvent5_WdError(v34);
    }
    if ( v150 )
      v35 = *(_WORD *)(v150 + 20);
    else
      v35 = 0;
    if ( !v35 )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_148;
    }
    v141[2] = 1;
    v141[3] = 0;
    v141[0] = 0;
    v36 = QueryMonitorType(
            a2,
            v8,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v146,
            &v143,
            &v148,
            &v142[1],
            &v141[2],
            &v141[3],
            v141,
            0LL);
    v38 = v36;
    if ( v36 >= 0 )
    {
      v41 = v146;
      v40 = v143;
    }
    else
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v39[3] = v38;
      v39[4] = a2->HighPart;
      v39[5] = a2->LowPart;
      v39[6] = v8;
      v39[7] = v6;
      WdLogEvent5_WdError(v39);
      v40 = D3DKMDT_VOT_UNINITIALIZED;
      v142[1] = 0;
      v41 = 0;
      v143 = D3DKMDT_VOT_UNINITIALIZED;
      v146 = 0;
      v141[2] = 0;
      v141[3] = 0;
      v141[0] = 0;
    }
    LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                               (const struct CCD_TOPOLOGY *)v149,
                               a2,
                               v8,
                               v40,
                               (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v42 = LaptopSpecialCaseFlags;
    if ( LaptopSpecialCaseFlags )
    {
      if ( LaptopSpecialCaseFlags == 1 )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( LaptopSpecialCaseFlags == 8 )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v43 = WdLogNewEntry5_WdAssertion(LaptopSpecialCaseFlags - 1);
        *(_QWORD *)(v43 + 24) = 3632LL;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v154, 8u, 0);
    if ( v42 && v41 == 1 )
      v44 = v42 | 0x86;
    else
      v44 = 143;
    LODWORD(v45) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v154, v44, 0LL);
    if ( (int)v45 < 0 )
      goto LABEL_52;
    if ( v148 == D3DKMDT_VOT_MIRACAST )
    {
      for ( i = 0; ; ++i )
      {
        v47 = v155 ? *((unsigned __int16 *)v155 + 10) : 0LL;
        if ( i >= (unsigned __int16)v47 )
          break;
        if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v154, i) + 7) == (_DWORD)v8 )
          goto LABEL_45;
      }
      v48 = WdLogNewEntry5_WdError(v47);
      *(_QWORD *)(v48 + 24) = 3682LL;
      WdLogEvent5_WdError(v48);
      LODWORD(v45) = -1073741823;
    }
LABEL_45:
    if ( !IsValidCloneConfiguration(v155) )
    {
      v50 = WdLogNewEntry5_WdError(v49);
      *(_QWORD *)(v50 + 24) = 3692LL;
      WdLogEvent5_WdError(v50);
      LODWORD(v45) = -1073741823;
    }
    if ( (int)v45 < 0 )
    {
LABEL_52:
      v54 = a4;
    }
    else
    {
      v51 = CCD_TOPOLOGY::Persist(v154, 0LL);
      v45 = v51;
      if ( v51 >= 0 )
      {
        v54 = a4;
      }
      else
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v52);
        v54 = a4;
        v53[3] = v45;
        v53[4] = a2->HighPart;
        v53[5] = a2->LowPart;
        v53[6] = v8;
        v53[7] = a4;
        WdLogEvent5_WdError(v53);
        DxgkLogCodePointPacket(0x3Eu, 2u, v45, 0, (__int64)*a2);
      }
      *(_DWORD *)(a1 + 32) |= 0x40u;
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY(v154);
    if ( (int)v45 >= 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
      v60 = a4;
      v59[3] = a2->HighPart;
      v59[4] = a2->LowPart;
      v59[7] = a5;
      v59[5] = v8;
      v59[6] = a4;
      WdLogEvent5_WdEvent(v59);
LABEL_145:
      v133 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v138 = v133;
      if ( v133 < 0 )
      {
        v139 = (_QWORD *)WdLogNewEntry5_WdError(v135);
        v139[3] = v138;
        v139[4] = a2->HighPart;
        v139[5] = a2->LowPart;
        v139[7] = v60;
        v139[6] = v8;
        WdLogEvent5_WdError(v139);
        LODWORD(v138) = 0;
      }
      v140 = (_QWORD *)WdLogNewEntry5_WdEvent(v135, v134, v136, v137);
      v140[3] = a2->HighPart;
      v140[4] = a2->LowPart;
      v140[6] = v60;
      v140[7] = a5;
      v140[5] = v8;
      WdLogEvent5_WdEvent(v140);
      v23 = v138;
      goto LABEL_148;
    }
    if ( (_DWORD)v45 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      *(_BYTE *)(a1 + 30) = 1;
      goto LABEL_144;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
    v61[3] = (int)v45;
    v61[4] = a2->HighPart;
    v61[5] = a2->LowPart;
    v61[7] = v54;
    v61[6] = v8;
    WdLogEvent5_WdEvent(v61);
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v153, 8u, 0);
    v62 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v153, (const struct CCD_TOPOLOGY *)v149);
    v64 = v62;
    if ( v62 < 0 )
    {
      v65 = WdLogNewEntry5_WdError(v63);
      *(_QWORD *)(v65 + 24) = v64;
      *(_QWORD *)(v65 + 32) = v149;
      WdLogEvent5_WdError(v65);
      v66 = CCD_TOPOLOGY::Persist(v149, 0LL);
      v68 = v66;
      if ( v66 < 0 )
      {
        v69 = WdLogNewEntry5_WdError(v67);
        *(_QWORD *)(v69 + 24) = v68;
        *(_QWORD *)(v69 + 32) = v149;
        WdLogEvent5_WdError(v69);
      }
      v70 = 3;
      goto LABEL_60;
    }
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v149, a2, v8);
    if ( v150 )
      v74 = *(_WORD *)(v150 + 20);
    else
      v74 = 0;
    if ( !v74 )
      goto LABEL_62;
    v75 = v141[0];
    v78 = 0;
    if ( !v141[0] && !v141[2] )
    {
      if ( v142[1]
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0),
            v77 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0),
            DxgkIsPortraitFirstTarget(v77[2], *((_DWORD *)PathDescriptor + 7))) )
      {
        v78 = 1;
      }
    }
    LOBYTE(v73) = v78;
    v141[1] = v78;
    v80 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v73);
    v145 = v80;
    if ( v80 == 3 )
    {
      if ( v75 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0) + 5) )
      {
        if ( !v75 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0) + 6);
          goto LABEL_101;
        }
      }
      else
      {
        v80 = 4;
        v145 = 4;
      }
    }
    else if ( (unsigned __int16)(v80 - 4) > 1u )
    {
      v81 = WdLogNewEntry5_WdAssertion(v79);
      *(_QWORD *)(v81 + 24) = 3834LL;
      WdLogEvent5_WdAssertion(v81);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v149, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v86 = WdLogNewEntry5_WdEvent(v83, v82, v84, v85);
      if ( v150 )
        v87 = *(_WORD *)(v150 + 20);
      else
        v87 = 0;
      *(_QWORD *)(v86 + 24) = v87;
      *(_QWORD *)(v86 + 32) = 16LL;
      WdLogEvent5_WdEvent(v86);
      v88 = CCD_TOPOLOGY::Persist(v153, 0LL);
      v90 = v88;
      if ( v88 < 0 )
      {
        v91 = WdLogNewEntry5_WdError(v89);
        *(_QWORD *)(v91 + 24) = v90;
        *(_QWORD *)(v91 + 32) = v153;
        WdLogEvent5_WdError(v91);
      }
      v72 = 0;
      v71 = v90;
      v70 = 4;
      goto LABEL_61;
    }
    if ( v80 == 3 )
    {
      if ( !v75 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v83);
        *(_QWORD *)(v92 + 24) = 3911LL;
        WdLogEvent5_WdAssertion(v92);
      }
      for ( j = 0; ; ++j )
      {
        v94 = v150;
        v95 = v150 ? *(_WORD *)(v150 + 20) : 0;
        if ( j >= v95 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, j) + 129) )
        {
          LOWORD(v145) = 4;
          goto LABEL_101;
        }
      }
      goto LABEL_102;
    }
LABEL_101:
    v94 = v150;
LABEL_102:
    if ( v94 )
      v96 = *(_WORD *)(v94 + 20);
    else
      v96 = 0;
    v97 = v96 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v149, v97) < v97 )
    {
      v99 = WdLogNewEntry5_WdLowResource(v98);
      *(_QWORD *)(v99 + 24) = v97;
      WdLogEvent5_WdLowResource(v99);
      v100 = CCD_TOPOLOGY::Persist(v153, 0LL);
      v102 = v100;
      if ( v100 < 0 )
      {
        v103 = WdLogNewEntry5_WdError(v101);
        *(_QWORD *)(v103 + 24) = v102;
        *(_QWORD *)(v103 + 32) = v153;
        WdLogEvent5_WdError(v103);
      }
      v71 = v97;
      v72 = v102;
      v70 = 5;
      goto LABEL_61;
    }
    v104 = v97 - 1;
    if ( !v141[0] )
    {
      v105 = LaptopSpecialCaseFlags;
      if ( LaptopSpecialCaseFlags )
      {
        if ( v97 != 2 )
        {
          v106 = WdLogNewEntry5_WdAssertion(2LL);
          *(_QWORD *)(v106 + 24) = 3974LL;
          WdLogEvent5_WdAssertion(v106);
          v105 = LaptopSpecialCaseFlags;
        }
        if ( v141[1] )
          v104 = !IsInternalVideoOutput(v143);
        else
          v104 = ((unsigned __int8)~v105 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0) + 27) )
        {
          v108 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v108 + 24) = 4006LL;
          WdLogEvent5_WdAssertion(v108);
        }
        v109 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 0);
        v110 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 1u);
        v111 = 2LL;
        do
        {
          *(_OWORD *)v110 = *(_OWORD *)v109;
          *((_OWORD *)v110 + 1) = *((_OWORD *)v109 + 1);
          *((_OWORD *)v110 + 2) = *((_OWORD *)v109 + 2);
          *((_OWORD *)v110 + 3) = *((_OWORD *)v109 + 3);
          *((_OWORD *)v110 + 4) = *((_OWORD *)v109 + 4);
          *((_OWORD *)v110 + 5) = *((_OWORD *)v109 + 5);
          *((_OWORD *)v110 + 6) = *((_OWORD *)v109 + 6);
          v110 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v110 + 128);
          v112 = *((_OWORD *)v109 + 7);
          v109 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v109 + 128);
          *((_OWORD *)v110 - 1) = v112;
          --v111;
        }
        while ( v111 );
        *(_QWORD *)v110 = *(_QWORD *)v109;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, 1 - v104) = 0xCF00000000000LL;
      }
    }
    v113 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, v104);
    *((struct _LUID *)v113 + 2) = *a2;
    *((_DWORD *)v113 + 6) = UnusedVidpnSourceId;
    *((_DWORD *)v113 + 22) = v143;
    *((_DWORD *)v113 + 23) = v148;
    *((_DWORD *)v113 + 7) = v8;
    if ( v141[3] || (v114 = 0, v141[0]) )
      v114 = 1;
    *((_BYTE *)v113 + 129) = v114;
    *(_QWORD *)v113 = 0x8F00000000000LL;
    ++*(_WORD *)(v150 + 20);
    if ( (_WORD)v145 == 3 )
    {
      if ( v150 )
        v115 = *(unsigned __int16 *)(v150 + 20);
      else
        v115 = 0LL;
      if ( (_WORD)v115 != 2 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v115);
        *(_QWORD *)(v116 + 24) = 4045LL;
        WdLogEvent5_WdAssertion(v116);
      }
      v117 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v149, v104 == 0);
      v118 = *((_QWORD *)v117 + 19);
      *(_QWORD *)v113 |= 0x20000uLL;
      *((_QWORD *)v113 + 19) = v118;
      *((_DWORD *)v113 + 46) = *((_DWORD *)v117 + 46);
      *(_QWORD *)v113 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v149, v104);
    }
    v151 = 1;
    v152 = 4;
    v119 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v149, 0);
    v64 = v119;
    if ( v119 >= 0 )
    {
      v125 = CCD_TOPOLOGY::Persist(v149, 1LL);
      v127 = v125;
      if ( v125 == -1073741266 )
      {
        v72 = 0;
        v71 = -1073741266;
        v70 = 7;
      }
      else
      {
        if ( v125 >= 0 )
        {
          *(_BYTE *)(a1 + 30) = 0;
          goto LABEL_62;
        }
        v128 = WdLogNewEntry5_WdError(v126);
        *(_QWORD *)(v128 + 24) = v127;
        *(_QWORD *)(v128 + 32) = v150;
        WdLogEvent5_WdError(v128);
        v129 = CCD_TOPOLOGY::Persist(v153, 0LL);
        v131 = v129;
        if ( v129 < 0 )
        {
          v132 = WdLogNewEntry5_WdError(v130);
          *(_QWORD *)(v132 + 24) = v131;
          *(_QWORD *)(v132 + 32) = v153;
          WdLogEvent5_WdError(v132);
        }
        v72 = v131;
        v71 = v127;
        v70 = 8;
      }
LABEL_61:
      DxgkLogCodePointPacket(0x3Eu, v70, v71, v72, (__int64)*a2);
LABEL_62:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v153);
LABEL_144:
      v60 = a4;
      goto LABEL_145;
    }
    v121 = WdLogNewEntry5_WdError(v120);
    *(_QWORD *)(v121 + 24) = v64;
    *(_QWORD *)(v121 + 32) = v150;
    WdLogEvent5_WdError(v121);
    v122 = CCD_TOPOLOGY::Persist(v153, 0LL);
    v68 = v122;
    if ( v122 < 0 )
    {
      v124 = WdLogNewEntry5_WdError(v123);
      *(_QWORD *)(v124 + 24) = v68;
      *(_QWORD *)(v124 + 32) = v153;
      WdLogEvent5_WdError(v124);
    }
    v70 = 6;
LABEL_60:
    v71 = v64;
    v72 = v68;
    goto LABEL_61;
  }
  *(_BYTE *)(a1 + 25) = 0;
  v142[0] = 0;
  MonitorType = QueryMonitorType(a2, a3, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, v142);
  v12 = MonitorType;
  if ( MonitorType >= 0 )
  {
    v14 = v142[0];
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2->HighPart;
    v13[5] = a2->LowPart;
    v13[7] = v6;
    v13[6] = v8;
    WdLogEvent5_WdError(v13);
    v14 = 0;
  }
  if ( v14 )
  {
    v141[1] = 0;
    v15 = DxgkHMDDisplayControlInternal(a2, (unsigned int)v8, 0LL, &v141[1]);
    v12 = v15;
    if ( v15 < 0 || !v141[1] )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v12;
      WdLogEvent5_WdError(v17);
    }
  }
  return (unsigned int)v12;
}
