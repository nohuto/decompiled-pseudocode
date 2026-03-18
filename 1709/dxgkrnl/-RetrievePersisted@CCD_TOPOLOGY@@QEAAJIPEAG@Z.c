/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00DF950 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D0A9C (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00D0B4C (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C00D0BE8 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DAD20 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DBD7C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00DC23C (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00DC70C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DEFF8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00DFDC4 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00E1168 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00E1400 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00E1800 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01F94B8 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01F95F4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  bool v20; // zf
  struct CCD_BTL *v21; // rax
  bool v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r15
  int TopologyClass; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // ecx
  int active; // eax
  struct D3DKMT_HASH *v33; // rdi
  struct _STRING *v34; // rax
  int StringHash; // eax
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __m128i v47; // xmm0
  unsigned __int16 v48; // ax
  unsigned int v49; // r13d
  _DWORD *v50; // rax
  _DWORD *v51; // rbx
  PCHAR Buffer; // rdx
  _QWORD *v53; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v54; // rax
  int v55; // eax
  char GlobalRawmodeFlag; // al
  unsigned int v57; // edx
  int v58; // eax
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  unsigned __int16 v66; // [rsp+38h] [rbp-D0h]
  int v67; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING v68; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+58h] [rbp-B0h]
  _QWORD v70[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v71; // [rsp+80h] [rbp-88h]
  __int64 v72; // [rsp+88h] [rbp-80h]
  __int64 v73; // [rsp+90h] [rbp-78h]
  int v74; // [rsp+98h] [rbp-70h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-68h]
  __int64 v76; // [rsp+A8h] [rbp-60h]
  __int64 v77; // [rsp+B0h] [rbp-58h]
  __int16 v78; // [rsp+B8h] [rbp-50h]
  __int64 v79; // [rsp+C0h] [rbp-48h]
  __int64 v80; // [rsp+C8h] [rbp-40h]
  struct CCD_TOPOLOGY *v81; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v82; // [rsp+E4h] [rbp-24h]
  _BYTE v83[64]; // [rsp+E8h] [rbp-20h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v84[14]; // [rsp+128h] [rbp+20h] BYREF
  char v85; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v85 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v85, 0);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v70[0]) = 0;
    memset(&v70[1], 0, 24);
    v72 = 0LL;
    v73 = 0LL;
    v71 = 0;
    CCD_BTL::Global();
    *(_QWORD *)&v68.Length = v70;
    v68.Buffer = 0LL;
    v69 = 0LL;
    v10 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v68);
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_70;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v40[3] = this;
        v40[4] = *((_QWORD *)this + 8);
        v40[5] = *(int *)this;
        WdLogEvent5_WdError(v40);
        LODWORD(v9) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)&v81, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v74 = 0;
        v75 = 0LL;
        v76 = 0LL;
        v79 = 0LL;
        v80 = 0LL;
        v77 = 0LL;
        v78 = 0;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v74, (__int64)ModalitySetId);
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)&v81,
                        (const struct CCD_SET_STRING_ID *)v70,
                        (const struct CCD_SET_STRING_ID *)&v74,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v74);
      }
      else
      {
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(&v81, this, v3 & 0xF, (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v9 == -1073741275 )
      {
        v5 = 2;
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
        v45[3] = this;
        v45[4] = *((_QWORD *)this + 8);
        v45[5] = v3;
        WdLogEvent5_WdWarning(v45);
      }
      else
      {
        if ( (int)v9 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v84);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v83);
          goto LABEL_16;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v43);
        v46[3] = (int)v9;
        v46[4] = this;
        v46[5] = *((_QWORD *)this + 8);
        v46[6] = v3;
        WdLogEvent5_WdError(v46);
      }
      goto LABEL_42;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)&v81, this);
    v67 = v3 & 0xF;
    v12 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)&v81,
            (const struct CCD_SET_STRING_ID *)v70,
            0LL,
            v67,
            (v3 & 0x1000) != 0);
    v14 = v12;
    LODWORD(v9) = -1073741789;
    if ( v12 == -1073741789 )
    {
      if ( a3 )
        *a3 = v82;
      goto LABEL_30;
    }
    if ( v12 < 0 )
    {
      v47 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v70);
      v48 = _mm_cvtsi128_si32(v47);
      v68 = (struct _STRING)v47;
      v49 = v48 + 57;
      v66 = v48;
      v50 = operator new(v49, 0x63644356u, PagedPool);
      v51 = v50;
      if ( v50 )
      {
        memset(v50, 0, v49);
        Buffer = v68.Buffer;
        v51[1] = v49;
        v51[10] = 0;
        *((_QWORD *)v51 + 4) = 0LL;
        *v51 = 9;
        *((_QWORD *)v51 + 1) = 0LL;
        *((_QWORD *)v51 + 2) = 0LL;
        *((_QWORD *)v51 + 3) = 0LL;
        v51[12] = v14;
        v51[13] = v3;
        memmove(v51 + 14, Buffer, v66);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v51);
        ExFreePoolWithTag(v51, 0);
      }
      else
      {
        v66 = 0;
        DxgkLogCodePointPacket(0x1Bu, v3, v14, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v13) + 800) )
      {
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v70);
        v16 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        v68 = *ConnectedSetStr;
        LogCddDatabaseAccessPacket(1, v14, v16, &v68, v3);
      }
      else
      {
        v66 = 0;
        DxgkLogCodePointPacket(9u, v3, v14, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v14 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
      v53[3] = v14;
      v53[4] = this;
      v53[5] = *((_QWORD *)this + 8);
      v53[6] = v3;
      CCD_BTL::Global();
      v54 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v74);
      v55 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v54);
      v14 = v55;
      if ( v55 == -1073741789 )
      {
        if ( a3 )
          *a3 = v66;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
LABEL_30:
        v5 = 0;
        goto LABEL_42;
      }
      if ( v55 < 0 )
        goto LABEL_59;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v57 = 0;
        if ( GlobalRawmodeFlag )
          v57 = 0x20000;
        v58 = CCD_TOPOLOGY::Functionalize(this, v57);
        v14 = v58;
        if ( v58 < 0 )
        {
LABEL_59:
          v5 |= 8u;
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v59[3] = v14;
          goto LABEL_63;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v14 >= 0 )
    {
LABEL_10:
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
      v20 = v67 == 15;
      v19[3] = this;
      v19[4] = *((_QWORD *)this + 8);
      v19[5] = v3;
      if ( !v20 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v84);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v83);
LABEL_16:
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v67);
        v30 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v64[3] = v30;
          v64[4] = this;
          v64[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v64);
          v31 = 0;
        }
        else
        {
          v31 = v67;
        }
        *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v31;
        active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        if ( active < 0
          || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
          || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
        {
          LODWORD(v9) = active;
          goto LABEL_22;
        }
        v33 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
        v34 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v70);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v34, v33);
        v9 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v70);
          goto LABEL_23;
        }
LABEL_70:
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v65[3] = v9;
        v65[4] = this;
        v65[5] = *((_QWORD *)this + 8);
        v65[6] = v3;
        WdLogEvent5_WdError(v65);
        goto LABEL_22;
      }
      v21 = CCD_BTL::Global();
      v23 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v21 + 96), this, v22, a3);
      v27 = v23;
      if ( v23 != -1073741789 )
      {
        if ( v23 == -1073741266 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
          v62[3] = -1073741266LL;
          v62[4] = this;
          v62[5] = *((_QWORD *)this + 8);
          v62[6] = v3;
          WdLogEvent5_WdWarning(v62);
        }
        else if ( v23 < 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v63[3] = v27;
          v63[4] = this;
          v63[5] = *((_QWORD *)this + 8);
          v63[6] = v3;
          WdLogEvent5_WdError(v63);
        }
        goto LABEL_15;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      if ( a3 )
        v61 = *a3;
      else
        v61 = 0LL;
      v60[3] = v61;
      v60[4] = -1073741789LL;
      v60[5] = this;
      v60[6] = *((_QWORD *)this + 8);
      v60[7] = v3;
      WdLogEvent5_WdWarning(v60);
LABEL_42:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v84);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v83);
      goto LABEL_22;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v59[3] = (int)v14;
LABEL_63:
    v59[4] = this;
    v59[5] = *((_QWORD *)this + 8);
    v59[6] = v3;
    WdLogEvent5_WdError(v59);
    LODWORD(v9) = v14;
    goto LABEL_42;
  }
  v38 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v38 + 24) = v9;
  WdLogEvent5_WdError(v38);
LABEL_23:
  if ( v85 )
    DxgkReleaseSessionModeChangeLock(v36);
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v9;
}
