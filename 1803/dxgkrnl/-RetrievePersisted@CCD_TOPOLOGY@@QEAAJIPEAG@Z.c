/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009D82C (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C009D8DC (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C009D978 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00B0C84 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B2288 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B24B4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B2A84 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B2EB8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00B3DA4 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B3F08 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B40E8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00B443C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C42C8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00D8294 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00DEF60 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C0227228 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0227444 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r15
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rcx
  struct CCD_BTL *v24; // rax
  bool v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  int TopologyClass; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // ecx
  int active; // eax
  struct D3DKMT_HASH *v36; // rdi
  struct _STRING *v37; // rax
  int StringHash; // eax
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __m128i v50; // xmm0
  unsigned __int16 v51; // ax
  unsigned int v52; // r13d
  _DWORD *v53; // rax
  _DWORD *v54; // rbx
  PCHAR Buffer; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  BTL_TOPOLOGY_CONSTRUCTOR *v58; // rax
  int v59; // eax
  char GlobalRawmodeFlag; // al
  unsigned int v61; // edx
  int v62; // eax
  _QWORD *v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  unsigned __int16 v70; // [rsp+38h] [rbp-D0h]
  int v71; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING v72; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+58h] [rbp-B0h]
  _QWORD v74[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+98h] [rbp-70h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-68h]
  __int64 v80; // [rsp+A8h] [rbp-60h]
  __int64 v81; // [rsp+B0h] [rbp-58h]
  __int16 v82; // [rsp+B8h] [rbp-50h]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-40h]
  _BYTE v85[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v86; // [rsp+E4h] [rbp-24h]
  _BYTE v87[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v88[112]; // [rsp+128h] [rbp+20h] BYREF
  char v89; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v89 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v89, 0);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v74[0]) = 0;
    memset(&v74[1], 0, 24);
    v76 = 0LL;
    v77 = 0LL;
    v75 = 0;
    CCD_BTL::Global(v8);
    *(_QWORD *)&v72.Length = v74;
    v72.Buffer = 0LL;
    v73 = 0LL;
    v10 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v72);
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_70;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v43[3] = this;
        v43[4] = *((_QWORD *)this + 8);
        v43[5] = *(int *)this;
        WdLogEvent5_WdError(v43);
        LODWORD(v9) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v85, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v78 = 0;
        v79 = 0LL;
        v80 = 0LL;
        v83 = 0LL;
        v84 = 0LL;
        v81 = 0LL;
        v82 = 0;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v78, (__int64)ModalitySetId);
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v85,
                        (const struct CCD_SET_STRING_ID *)v74,
                        (const struct CCD_SET_STRING_ID *)&v78,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v78);
      }
      else
      {
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v85,
                        this,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v9 == -1073741275 )
      {
        v5 = 2;
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
        v48[3] = this;
        v48[4] = *((_QWORD *)this + 8);
        v48[5] = v3;
        WdLogEvent5_WdWarning(v48);
      }
      else
      {
        if ( (int)v9 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v88);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v87);
          goto LABEL_16;
        }
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        v49[3] = (int)v9;
        v49[4] = this;
        v49[5] = *((_QWORD *)this + 8);
        v49[6] = v3;
        WdLogEvent5_WdError(v49);
      }
      goto LABEL_42;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v85, this);
    v71 = v3 & 0xF;
    v12 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v85,
            (const struct CCD_SET_STRING_ID *)v74,
            0LL,
            v71,
            (v3 & 0x1000) != 0);
    v14 = v12;
    LODWORD(v9) = -1073741789;
    if ( v12 == -1073741789 )
    {
      if ( a3 )
        *a3 = v86;
      goto LABEL_30;
    }
    if ( v12 < 0 )
    {
      v50 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v74);
      v51 = _mm_cvtsi128_si32(v50);
      v72 = (struct _STRING)v50;
      v52 = v51 + 57;
      v70 = v51;
      v53 = operator new[](v52, 0x63644356u, PagedPool);
      v54 = v53;
      if ( v53 )
      {
        memset(v53, 0, v52);
        Buffer = v72.Buffer;
        v54[1] = v52;
        v54[10] = 0;
        *((_QWORD *)v54 + 4) = 0LL;
        *v54 = 9;
        *((_QWORD *)v54 + 1) = 0LL;
        *((_QWORD *)v54 + 2) = 0LL;
        *((_QWORD *)v54 + 3) = 0LL;
        v54[12] = v14;
        v54[13] = v3;
        memmove(v54 + 14, Buffer, v70);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v54);
        operator delete[](v54);
      }
      else
      {
        v70 = 0;
        DxgkLogCodePointPacket(0x1Bu, v3, v14, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v13) + 880) )
      {
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v74);
        v16 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        v72 = *ConnectedSetStr;
        LogCddDatabaseAccessPacket(1, v14, v16, &v72, v3);
      }
      else
      {
        v70 = 0;
        DxgkLogCodePointPacket(9u, v3, v14, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v14 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v56[3] = v14;
      v56[4] = this;
      v57 = *((_QWORD *)this + 8);
      v56[5] = v57;
      v56[6] = v3;
      CCD_BTL::Global(v57);
      v58 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v78);
      v59 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v58);
      v14 = v59;
      if ( v59 == -1073741789 )
      {
        if ( a3 )
          *a3 = v70;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
LABEL_30:
        v5 = 0;
        goto LABEL_42;
      }
      if ( v59 < 0 )
        goto LABEL_59;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v61 = 0;
        if ( GlobalRawmodeFlag )
          v61 = 0x20000;
        v62 = CCD_TOPOLOGY::Functionalize(this, v61);
        v14 = v62;
        if ( v62 < 0 )
        {
LABEL_59:
          v5 |= 8u;
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v63[3] = v14;
          goto LABEL_63;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v14 >= 0 )
    {
LABEL_10:
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v22 = v71 == 15;
      v21[3] = this;
      v23 = *((_QWORD *)this + 8);
      v21[4] = v23;
      v21[5] = v3;
      if ( !v22 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v88);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v87);
LABEL_16:
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v71);
        v33 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v68[3] = v33;
          v68[4] = this;
          v68[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v68);
          v34 = 0;
        }
        else
        {
          v34 = v71;
        }
        *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v34;
        active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        if ( active < 0
          || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
          || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
        {
          LODWORD(v9) = active;
          goto LABEL_22;
        }
        v36 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
        v37 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v74);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v37, v36);
        v9 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v74);
          goto LABEL_23;
        }
LABEL_70:
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v69[3] = v9;
        v69[4] = this;
        v69[5] = *((_QWORD *)this + 8);
        v69[6] = v3;
        WdLogEvent5_WdError(v69);
        goto LABEL_22;
      }
      v24 = CCD_BTL::Global(v23);
      v26 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v24 + 96), this, v25, a3);
      v30 = v26;
      if ( v26 != -1073741789 )
      {
        if ( v26 == -1073741266 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
          v66[3] = -1073741266LL;
          v66[4] = this;
          v66[5] = *((_QWORD *)this + 8);
          v66[6] = v3;
          WdLogEvent5_WdWarning(v66);
        }
        else if ( v26 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v67[3] = v30;
          v67[4] = this;
          v67[5] = *((_QWORD *)this + 8);
          v67[6] = v3;
          WdLogEvent5_WdError(v67);
        }
        goto LABEL_15;
      }
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      if ( a3 )
        v65 = *a3;
      else
        v65 = 0LL;
      v64[3] = v65;
      v64[4] = -1073741789LL;
      v64[5] = this;
      v64[6] = *((_QWORD *)this + 8);
      v64[7] = v3;
      WdLogEvent5_WdWarning(v64);
LABEL_42:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v88);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v87);
      goto LABEL_22;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v63[3] = (int)v14;
LABEL_63:
    v63[4] = this;
    v63[5] = *((_QWORD *)this + 8);
    v63[6] = v3;
    WdLogEvent5_WdError(v63);
    LODWORD(v9) = v14;
    goto LABEL_42;
  }
  v41 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v41 + 24) = v9;
  WdLogEvent5_WdError(v41);
LABEL_23:
  if ( v89 )
    DxgkReleaseSessionModeChangeLock(v39);
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v9;
}
