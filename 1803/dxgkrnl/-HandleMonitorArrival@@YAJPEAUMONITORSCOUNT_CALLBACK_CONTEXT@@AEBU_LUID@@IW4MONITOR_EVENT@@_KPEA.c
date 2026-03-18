/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C00032D4 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C462C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C01C4530 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C53A8 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C01C5554 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C561C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01C6D14 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C01C6EAC (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02254C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0225824 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02296CC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v11; // rcx
  struct CCD_BTL *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // r14
  __int16 v31; // cx
  int MonitorType; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v36; // eax
  int v37; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v38; // r14d
  __int64 v39; // rax
  unsigned int v40; // edx
  int Persisted; // r14d
  __int64 v42; // rbx
  char v43; // r12
  unsigned int i; // ebx
  __int64 PathsCount; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // r12
  __int64 v59; // r14
  __int64 v60; // r13
  _QWORD *v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned int v72; // edx
  unsigned int v73; // r8d
  unsigned int v74; // r9d
  __int16 v75; // ax
  unsigned __int8 v76; // bl
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v77; // rbx
  struct _LUID *v78; // rax
  __int64 v79; // r8
  unsigned __int8 IsPortraitFirstTarget; // al
  char v81; // al
  __int64 v82; // rcx
  __int16 v83; // r13
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rcx
  unsigned __int16 v90; // dx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int j; // ebx
  __int64 v99; // rcx
  unsigned __int16 v100; // ax
  __int16 v101; // bx
  unsigned __int16 v102; // bx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // r14
  __int64 v110; // rax
  unsigned int v111; // r14d
  char v112; // al
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v116; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v117; // rax
  __int64 v118; // rcx
  __int128 v119; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v120; // rbx
  bool v121; // al
  __int64 v122; // rcx
  __int64 v123; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v124; // rax
  __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // r8
  __int64 v141; // r9
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // r14
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rbx
  _QWORD *v150; // rax
  _QWORD *v151; // rax
  unsigned __int8 v152[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v153; // [rsp+5Ch] [rbp-ACh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v154[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v155; // [rsp+68h] [rbp-A0h]
  int v156; // [rsp+70h] [rbp-98h] BYREF
  int UnusedVidpnSourceId; // [rsp+74h] [rbp-94h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v158[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v159; // [rsp+80h] [rbp-88h]
  _BYTE v160[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v161; // [rsp+C8h] [rbp-40h]
  int v162; // [rsp+D4h] [rbp-34h]
  int v163; // [rsp+D8h] [rbp-30h]
  _BYTE v164[96]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v165[64]; // [rsp+148h] [rbp+40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v166; // [rsp+188h] [rbp+80h]

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    return 0LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v160, 8u, 0);
  v12 = CCD_BTL::Global(v11);
  v13 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v160, v12);
  v15 = 0;
  v16 = v13;
  if ( v13 >= 0 )
  {
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 346);
    if ( v23 > 1 )
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v24);
      *(_QWORD *)(v25 + 24) = 3511LL;
      WdLogEvent5_WdWarning(v25);
      v18 = 1;
      v20 = v23;
      v19 = 82;
      goto LABEL_7;
    }
    v26 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v28 = v26;
    v159 = v8;
    if ( v26 >= 0 )
    {
      v30 = v6;
      v155 = v6;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v30 = v6;
      v155 = v6;
      v29[3] = v28;
      v29[4] = a2->HighPart;
      v29[5] = a2->LowPart;
      v29[6] = v8;
      v29[7] = v6;
      WdLogEvent5_WdError(v29);
    }
    if ( v161 )
    {
      v31 = *(_WORD *)(v161 + 20);
    }
    else
    {
      v31 = 0;
      v155 = v30;
    }
    if ( !v31 )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_140;
    }
    v152[2] = 0;
    v152[0] = 0;
    v152[1] = 1;
    MonitorType = QueryMonitorType(
                    a2,
                    v8,
                    (enum _DMM_VIDPN_MONITOR_TYPE *)&v156,
                    v154,
                    v158,
                    &v152[3],
                    &v152[1],
                    &v152[2],
                    v152);
    v34 = MonitorType;
    if ( MonitorType >= 0 )
    {
      v37 = v156;
      v36 = v154[0];
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v35[3] = v34;
      v35[4] = a2->HighPart;
      v35[5] = a2->LowPart;
      v35[6] = v8;
      v35[7] = v30;
      WdLogEvent5_WdError(v35);
      v36 = D3DKMDT_VOT_UNINITIALIZED;
      v152[3] = 0;
      v37 = 0;
      v154[0] = D3DKMDT_VOT_UNINITIALIZED;
      v156 = 0;
      v152[1] = 0;
      v152[2] = 0;
      v152[0] = 0;
    }
    v154[1] = GetLaptopSpecialCaseFlags(
                (const struct CCD_TOPOLOGY *)v160,
                a2,
                v8,
                v36,
                (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v38 = v154[1];
    if ( v154[1] )
    {
      if ( v154[1] == D3DKMDT_VOT_SVIDEO )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( v154[1] == D3DKMDT_VOT_D_JPN )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v39 = WdLogNewEntry5_WdAssertion((unsigned int)(v154[1] - 1));
        *(_QWORD *)(v39 + 24) = 3603LL;
        WdLogEvent5_WdAssertion(v39);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v165, 8u, 0);
    if ( v38 && v37 == 1 )
      v40 = v38 | 0x86;
    else
      v40 = 143;
    Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v165, v40, 0LL);
    LODWORD(v42) = Persisted;
    if ( Persisted >= 0 )
    {
      if ( v158[0] == D3DKMDT_VOT_MIRACAST )
      {
        v43 = 0;
        for ( i = 0; ; ++i )
        {
          PathsCount = (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v165);
          if ( i >= (unsigned int)PathsCount )
            break;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v165, i);
          PathsCount = a3;
          if ( *((_DWORD *)PathDescriptor + 7) == a3 )
          {
            v43 = 1;
            break;
          }
        }
        LODWORD(v42) = Persisted;
        if ( !v43 )
        {
          v47 = WdLogNewEntry5_WdError(PathsCount);
          *(_QWORD *)(v47 + 24) = 3653LL;
          WdLogEvent5_WdError(v47);
          LODWORD(v42) = -1073741823;
        }
      }
      if ( !IsValidCloneConfiguration(v166) )
      {
        v51 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v51 + 24) = 3663LL;
        WdLogEvent5_WdError(v51);
        LODWORD(v42) = -1073741823;
      }
      if ( (int)v42 >= 0 )
      {
        v52 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v165, 0LL, v49, v50);
        v42 = v52;
        if ( v52 < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v53);
          v54[3] = v42;
          v54[4] = a2->HighPart;
          v54[5] = a2->LowPart;
          v54[6] = v159;
          v54[7] = v6;
          WdLogEvent5_WdError(v54);
          DxgkLogCodePointPacket(0x3Eu, 2u, v42, 0, (__int64)*a2);
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v165);
    if ( (int)v42 >= 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55);
      v58 = v159;
      v59 = v155;
      v60 = a5;
      v57[3] = a2->HighPart;
      v57[4] = a2->LowPart;
      v57[5] = v58;
      v57[6] = v59;
      v57[7] = a5;
      WdLogEvent5_WdEvent(v57);
LABEL_137:
      v146 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v149 = v146;
      if ( v146 < 0 )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdError(v148);
        v150[3] = v149;
        v150[4] = a2->HighPart;
        v150[5] = a2->LowPart;
        v150[6] = v58;
        v150[7] = v59;
        WdLogEvent5_WdError(v150);
        LODWORD(v149) = 0;
      }
      v151 = (_QWORD *)WdLogNewEntry5_WdEvent(v148, v147);
      v151[3] = a2->HighPart;
      v151[4] = a2->LowPart;
      v151[5] = v58;
      v151[6] = v59;
      v151[7] = v60;
      WdLogEvent5_WdEvent(v151);
      v15 = v149;
      goto LABEL_140;
    }
    if ( (_DWORD)v42 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      *(_BYTE *)(a1 + 30) = 1;
      goto LABEL_136;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55);
    v61[3] = (int)v42;
    v61[4] = a2->HighPart;
    v61[5] = a2->LowPart;
    v61[6] = v159;
    v61[7] = v155;
    WdLogEvent5_WdEvent(v61);
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v164, 8u, 0);
    v62 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v164, (const struct CCD_TOPOLOGY *)v160);
    v64 = v62;
    if ( v62 < 0 )
    {
      v65 = WdLogNewEntry5_WdError(v63);
      *(_QWORD *)(v65 + 32) = v160;
      *(_QWORD *)(v65 + 24) = v64;
      WdLogEvent5_WdError(v65);
      v68 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v160, 0LL, v66, v67);
      v70 = v68;
      if ( v68 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v69);
        *(_QWORD *)(v71 + 32) = v160;
        *(_QWORD *)(v71 + 24) = v70;
        WdLogEvent5_WdError(v71);
      }
      v72 = 3;
      goto LABEL_51;
    }
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v160, a2, a3);
    if ( v161 )
      v75 = *(_WORD *)(v161 + 20);
    else
      v75 = 0;
    if ( !v75 )
      goto LABEL_134;
    v76 = v152[0];
    v81 = 0;
    if ( !v152[0] && !v152[1] )
    {
      if ( v152[3]
        || (v77 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0),
            v78 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v78[2], *((_DWORD *)v77 + 7), v79),
            v76 = v152[0],
            IsPortraitFirstTarget) )
      {
        v81 = 1;
      }
    }
    LOBYTE(v153) = v81;
    v83 = DetermineDefaultTopology(v154[1], v81);
    if ( v83 == 3 )
    {
      if ( v76 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 5) )
      {
        if ( !v76 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 6);
          goto LABEL_91;
        }
      }
      else
      {
        v83 = 4;
      }
    }
    else if ( (unsigned __int16)(v83 - 4) > 1u )
    {
      v84 = WdLogNewEntry5_WdAssertion(v82);
      *(_QWORD *)(v84 + 24) = 3805LL;
      WdLogEvent5_WdAssertion(v84);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v160, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v89 = WdLogNewEntry5_WdEvent(v88, v87);
      if ( v161 )
        v90 = *(_WORD *)(v161 + 20);
      else
        v90 = 0;
      *(_QWORD *)(v89 + 24) = v90;
      *(_QWORD *)(v89 + 32) = 16LL;
      WdLogEvent5_WdEvent(v89);
      v93 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v164, 0LL, v91, v92);
      v95 = v93;
      if ( v93 < 0 )
      {
        v96 = WdLogNewEntry5_WdError(v94);
        *(_QWORD *)(v96 + 32) = v164;
        *(_QWORD *)(v96 + 24) = v95;
        WdLogEvent5_WdError(v96);
      }
      v74 = 0;
      v73 = v95;
      v72 = 4;
      goto LABEL_52;
    }
    if ( v83 == 3 )
    {
      if ( !v76 )
      {
        v97 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v97 + 24) = 3882LL;
        WdLogEvent5_WdAssertion(v97);
      }
      for ( j = 0; ; ++j )
      {
        v99 = v161;
        v100 = v161 ? *(_WORD *)(v161 + 20) : 0;
        if ( j >= v100 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, j) + 129) )
        {
          v83 = 4;
          goto LABEL_91;
        }
      }
      goto LABEL_92;
    }
LABEL_91:
    v99 = v161;
LABEL_92:
    if ( v99 )
      v101 = *(_WORD *)(v99 + 20);
    else
      v101 = 0;
    v102 = v101 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v160, v102, v85, v86) < v102 )
    {
      v104 = WdLogNewEntry5_WdLowResource(v103);
      *(_QWORD *)(v104 + 24) = v102;
      WdLogEvent5_WdLowResource(v104);
      v107 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v164, 0LL, v105, v106);
      v109 = v107;
      if ( v107 < 0 )
      {
        v110 = WdLogNewEntry5_WdError(v108);
        *(_QWORD *)(v110 + 32) = v164;
        *(_QWORD *)(v110 + 24) = v109;
        WdLogEvent5_WdError(v110);
      }
      v73 = v102;
      v74 = v109;
      v72 = 5;
      goto LABEL_52;
    }
    v111 = v102 - 1;
    if ( !v152[0] )
    {
      v112 = v154[1];
      if ( v154[1] )
      {
        if ( v102 != 2 )
        {
          v113 = WdLogNewEntry5_WdAssertion(1LL);
          *(_QWORD *)(v113 + 24) = 3945LL;
          WdLogEvent5_WdAssertion(v113);
          v112 = v154[1];
        }
        if ( (_BYTE)v153 )
          v111 = !IsInternalVideoOutput(v154[0]);
        else
          v111 = ((unsigned __int8)~v112 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 28) )
        {
          v115 = WdLogNewEntry5_WdAssertion(v114);
          *(_QWORD *)(v115 + 24) = 3977LL;
          WdLogEvent5_WdAssertion(v115);
        }
        v116 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0);
        v117 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 1u);
        v118 = 2LL;
        do
        {
          *(_OWORD *)v117 = *(_OWORD *)v116;
          *((_OWORD *)v117 + 1) = *((_OWORD *)v116 + 1);
          *((_OWORD *)v117 + 2) = *((_OWORD *)v116 + 2);
          *((_OWORD *)v117 + 3) = *((_OWORD *)v116 + 3);
          *((_OWORD *)v117 + 4) = *((_OWORD *)v116 + 4);
          *((_OWORD *)v117 + 5) = *((_OWORD *)v116 + 5);
          *((_OWORD *)v117 + 6) = *((_OWORD *)v116 + 6);
          v117 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v117 + 128);
          v119 = *((_OWORD *)v116 + 7);
          v116 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v116 + 128);
          *((_OWORD *)v117 - 1) = v119;
          --v118;
        }
        while ( v118 );
        *(_OWORD *)v117 = *(_OWORD *)v116;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 1 - v111) = 0xCF00000000000LL;
      }
    }
    v120 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, v111);
    *((struct _LUID *)v120 + 2) = *a2;
    *((_DWORD *)v120 + 6) = UnusedVidpnSourceId;
    *((_DWORD *)v120 + 7) = a3;
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v120 + 22) = v154[0];
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v120 + 23) = v158[0];
    v121 = v152[2] || v152[0];
    *((_BYTE *)v120 + 129) = v121;
    *(_QWORD *)v120 = 0x8F00000000000LL;
    ++*(_WORD *)(v161 + 20);
    if ( v83 == 3 )
    {
      if ( v161 )
        v122 = *(unsigned __int16 *)(v161 + 20);
      else
        v122 = 0LL;
      if ( (_WORD)v122 != 2 )
      {
        v123 = WdLogNewEntry5_WdAssertion(v122);
        *(_QWORD *)(v123 + 24) = 4016LL;
        WdLogEvent5_WdAssertion(v123);
      }
      v124 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, v111 == 0);
      v125 = *((_QWORD *)v124 + 19);
      *(_QWORD *)v120 |= 0x20000uLL;
      *((_QWORD *)v120 + 19) = v125;
      *((_DWORD *)v120 + 46) = *((_DWORD *)v124 + 46);
      *(_QWORD *)v120 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v160, v111);
    }
    v162 = 1;
    v163 = 4;
    v126 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v160, 0);
    v64 = v126;
    if ( v126 >= 0 )
    {
      v136 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v160, 1LL, v128, v129);
      v138 = v136;
      if ( v136 == -1073741266 )
      {
        v74 = 0;
        v73 = -1073741266;
        v72 = 7;
      }
      else
      {
        if ( v136 >= 0 )
        {
          *(_BYTE *)(a1 + 30) = 0;
          goto LABEL_134;
        }
        v139 = WdLogNewEntry5_WdError(v137);
        *(_QWORD *)(v139 + 24) = v138;
        *(_QWORD *)(v139 + 32) = v161;
        WdLogEvent5_WdError(v139);
        v142 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v164, 0LL, v140, v141);
        v144 = v142;
        if ( v142 < 0 )
        {
          v145 = WdLogNewEntry5_WdError(v143);
          *(_QWORD *)(v145 + 32) = v164;
          *(_QWORD *)(v145 + 24) = v144;
          WdLogEvent5_WdError(v145);
        }
        v74 = v144;
        v73 = v138;
        v72 = 8;
      }
LABEL_52:
      DxgkLogCodePointPacket(0x3Eu, v72, v73, v74, (__int64)*a2);
LABEL_134:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v164);
LABEL_136:
      v60 = a5;
      v58 = v159;
      v59 = v155;
      goto LABEL_137;
    }
    v130 = WdLogNewEntry5_WdError(v127);
    *(_QWORD *)(v130 + 24) = v64;
    *(_QWORD *)(v130 + 32) = v161;
    WdLogEvent5_WdError(v130);
    v133 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v164, 0LL, v131, v132);
    v70 = v133;
    if ( v133 < 0 )
    {
      v135 = WdLogNewEntry5_WdError(v134);
      *(_QWORD *)(v135 + 32) = v164;
      *(_QWORD *)(v135 + 24) = v70;
      WdLogEvent5_WdError(v135);
    }
    v72 = 6;
LABEL_51:
    v73 = v64;
    v74 = v70;
    goto LABEL_52;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  v17[3] = v16;
  v17[4] = a2->HighPart;
  v17[5] = a2->LowPart;
  v17[6] = v8;
  v17[7] = v6;
  WdLogEvent5_WdError(v17);
  v18 = v16;
  v19 = 62;
  v20 = 0;
LABEL_7:
  DxgkLogCodePointPacket(v19, v20, v18, 0, (__int64)*a2);
  *(_BYTE *)(a1 + 25) = 1;
  *(_BYTE *)(a1 + 30) = 1;
LABEL_140:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v160);
  return v15;
}
