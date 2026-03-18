/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00A8930 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     DxgkGetPathsModality @ 0x1C00EE510 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00A100C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00ADD74 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00AE210 (DxgkGetGlobalRawmodeFlag.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00AE9A4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00AEA38 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C00AEABC (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B16A4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00EB8BC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBB18 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EC32C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EE134 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C00EE980 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01DFA68 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DFAE4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rcx
  struct CCD_BTL *v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r15
  __int64 v42; // r8
  __int64 v43; // r9
  int TopologyClass; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  BOOL v48; // ecx
  int active; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _D3DKMT_HASH *v53; // rdi
  struct _STRING *v54; // rax
  int StringHash; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __m128i v68; // xmm0
  unsigned __int16 v69; // ax
  unsigned int v70; // r13d
  _DWORD *v71; // rax
  _DWORD *v72; // rbx
  PCHAR Buffer; // rdx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  BTL_TOPOLOGY_CONSTRUCTOR *v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  bool GlobalRawmodeFlag; // al
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  int v88; // eax
  _QWORD *v89; // rax
  _QWORD *v90; // rcx
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  unsigned __int16 v96; // [rsp+38h] [rbp-D0h]
  BOOL v97; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING v98; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+58h] [rbp-B0h]
  _QWORD v100[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v101; // [rsp+80h] [rbp-88h]
  __int64 v102; // [rsp+88h] [rbp-80h]
  __int64 v103; // [rsp+90h] [rbp-78h]
  int v104; // [rsp+98h] [rbp-70h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-68h]
  __int64 v106; // [rsp+A8h] [rbp-60h]
  __int64 v107; // [rsp+B0h] [rbp-58h]
  __int16 v108; // [rsp+B8h] [rbp-50h]
  __int64 v109; // [rsp+C0h] [rbp-48h]
  __int64 v110; // [rsp+C8h] [rbp-40h]
  _BYTE v111[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v112; // [rsp+E4h] [rbp-24h]
  _BYTE v113[64]; // [rsp+E8h] [rbp-20h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v114[14]; // [rsp+128h] [rbp+20h] BYREF
  char v115; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v115 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v115, 0);
  v12 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v100[0]) = 0;
    memset(&v100[1], 0, 24);
    v102 = 0LL;
    v103 = 0LL;
    v101 = 0;
    CCD_BTL::Global(v9, v8, v10, v11);
    *(_QWORD *)&v98.Length = v100;
    v98.Buffer = 0LL;
    v99 = 0LL;
    v13 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v98);
    v12 = v13;
    if ( v13 < 0 )
      goto LABEL_70;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
        v60[3] = this;
        v60[4] = *((_QWORD *)this + 8);
        v60[5] = *(int *)this;
        WdLogEvent5_WdError(v60);
        LODWORD(v12) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v111, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v104 = 0;
        v105 = 0LL;
        v106 = 0LL;
        v109 = 0LL;
        v110 = 0LL;
        v107 = 0LL;
        v108 = 0;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v104, (__int64)ModalitySetId);
        LODWORD(v12) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v111,
                         (const struct CCD_SET_STRING_ID *)v100,
                         (const struct CCD_SET_STRING_ID *)&v104,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v104);
      }
      else
      {
        LODWORD(v12) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v111,
                         this,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v12 == -1073741275 )
      {
        v5 = 2;
        v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
        v66[3] = this;
        v66[4] = *((_QWORD *)this + 8);
        v66[5] = v3;
        WdLogEvent5_WdWarning(v66);
      }
      else
      {
        if ( (int)v12 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v114);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v113);
          goto LABEL_16;
        }
        v67 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
        v67[3] = (int)v12;
        v67[4] = this;
        v67[5] = *((_QWORD *)this + 8);
        v67[6] = v3;
        WdLogEvent5_WdError(v67);
      }
      goto LABEL_42;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v111, this);
    v97 = v3 & 0xF;
    v16 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v111,
            (const struct CCD_SET_STRING_ID *)v100,
            0LL,
            v97,
            (v3 & 0x1000) != 0);
    v21 = v16;
    LODWORD(v12) = -1073741789;
    if ( v16 == -1073741789 )
    {
      if ( a3 )
        *a3 = v112;
      goto LABEL_30;
    }
    if ( v16 < 0 )
    {
      v68 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v100);
      v69 = _mm_cvtsi128_si32(v68);
      v98 = (struct _STRING)v68;
      v70 = v69 + 57;
      v96 = v69;
      v71 = operator new(v70, 0x63644356u, PagedPool);
      v72 = v71;
      if ( v71 )
      {
        memset(v71, 0, v70);
        Buffer = v98.Buffer;
        v72[1] = v70;
        v72[10] = 0;
        *((_QWORD *)v72 + 4) = 0LL;
        *v72 = 9;
        *((_QWORD *)v72 + 1) = 0LL;
        *((_QWORD *)v72 + 2) = 0LL;
        *((_QWORD *)v72 + 3) = 0LL;
        v72[12] = v21;
        v72[13] = v3;
        memmove(v72 + 14, Buffer, v96);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v72);
        ExFreePoolWithTag(v72, 0);
      }
      else
      {
        v96 = 0;
        DxgkLogCodePointPacket(0x1Bu, v3, v21, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v18, v17, v19, v20) + 800) )
      {
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v100);
        v23 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        v98 = *ConnectedSetStr;
        LogCddDatabaseAccessPacket(1, v21, v23, &v98, v3);
      }
      else
      {
        v96 = 0;
        DxgkLogCodePointPacket(9u, v3, v21, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v21 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v74[3] = v21;
      v74[4] = this;
      v75 = *((_QWORD *)this + 8);
      v74[5] = v75;
      v74[6] = v3;
      CCD_BTL::Global(v75, v76, v77, v78);
      v79 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v104);
      v80 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v79);
      v21 = v80;
      if ( v80 == -1073741789 )
      {
        if ( a3 )
          *a3 = v96;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this, v81, v82, v83);
LABEL_30:
        v5 = 0;
        goto LABEL_42;
      }
      if ( v80 < 0 )
        goto LABEL_59;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v87 = 0LL;
        if ( GlobalRawmodeFlag )
          v87 = 0x20000LL;
        v88 = CCD_TOPOLOGY::Functionalize(this, v87, v85, v86);
        v21 = v88;
        if ( v88 < 0 )
        {
LABEL_59:
          v5 |= 8u;
          v89 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
          v89[3] = v21;
          goto LABEL_63;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v21 >= 0 )
    {
LABEL_10:
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v32 = v97 == 15;
      v28[3] = this;
      v33 = *((_QWORD *)this + 8);
      v28[4] = v33;
      v28[5] = v3;
      if ( !v32 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v114);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v113);
LABEL_16:
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v97, v42, v43);
        v47 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
          v94[3] = v47;
          v94[4] = this;
          v94[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v94);
          v48 = 0;
        }
        else
        {
          v48 = v97;
        }
        *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v48;
        active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        if ( active < 0
          || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this, v50, v51, v52), active < 0)
          || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
        {
          LODWORD(v12) = active;
          goto LABEL_22;
        }
        v53 = (struct _D3DKMT_HASH *)*((_QWORD *)this + 8);
        v54 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v100);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v54, v53);
        v12 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v100);
          goto LABEL_23;
        }
LABEL_70:
        v95 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v95[3] = v12;
        v95[4] = this;
        v95[5] = *((_QWORD *)this + 8);
        v95[6] = v3;
        WdLogEvent5_WdError(v95);
        goto LABEL_22;
      }
      v34 = CCD_BTL::Global(v33, v29, v30, v31);
      v36 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v34 + 96), this, v35, a3);
      v41 = v36;
      if ( v36 != -1073741789 )
      {
        if ( v36 == -1073741266 )
        {
          v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          v92[3] = -1073741266LL;
          v92[4] = this;
          v92[5] = *((_QWORD *)this + 8);
          v92[6] = v3;
          WdLogEvent5_WdWarning(v92);
        }
        else if ( v36 < 0 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
          v93[3] = v41;
          v93[4] = this;
          v93[5] = *((_QWORD *)this + 8);
          v93[6] = v3;
          WdLogEvent5_WdError(v93);
        }
        goto LABEL_15;
      }
      v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
      if ( a3 )
        v91 = *a3;
      else
        v91 = 0LL;
      v90[3] = v91;
      v90[4] = -1073741789LL;
      v90[5] = this;
      v90[6] = *((_QWORD *)this + 8);
      v90[7] = v3;
      WdLogEvent5_WdWarning(v90);
LABEL_42:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v114);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v113);
      goto LABEL_22;
    }
    v89 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v89[3] = (int)v21;
LABEL_63:
    v89[4] = this;
    v89[5] = *((_QWORD *)this + 8);
    v89[6] = v3;
    WdLogEvent5_WdError(v89);
    LODWORD(v12) = v21;
    goto LABEL_42;
  }
  v57 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v57 + 24) = v12;
  WdLogEvent5_WdError(v57);
LABEL_23:
  if ( v115 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v12;
}
