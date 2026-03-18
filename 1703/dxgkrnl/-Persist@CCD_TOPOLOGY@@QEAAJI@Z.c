/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C00A5C00 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00A100C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00ADE50 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00AEC7C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00AECB0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B1398 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B16A4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED3F4 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  struct CCD_BTL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct CCD_BTL *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdi
  CCD_TOPOLOGY *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // edx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  struct _STRING v66; // [rsp+30h] [rbp-50h] BYREF
  __int64 v67; // [rsp+40h] [rbp-40h]
  int v68; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v69[3]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v70; // [rsp+68h] [rbp-18h]
  __int64 v71; // [rsp+70h] [rbp-10h]
  __int64 v72; // [rsp+78h] [rbp-8h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
    {
      v68 = 0;
      memset(v69, 0, sizeof(v69));
      v71 = 0LL;
      v72 = 0LL;
      v70 = 0;
      CCD_BTL::Global(v7, v6, v8, v9);
      *(_QWORD *)&v66.Length = &v68;
      v66.Buffer = 0LL;
      v67 = 0LL;
      v10 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v66);
      v15 = v10;
      if ( v10 < 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
        v57[3] = v15;
        v57[4] = this;
        v57[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v57);
        DxgkLogCodePointPacket(0x3Fu, 1u, v5, v15, 0LL);
        goto LABEL_21;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v68, v13, v14) )
      {
        if ( (v5 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v5 < 0 )
          {
            DxgkLogCodePointPacket(0x3Fu, 4u, v5, v15, 0LL);
          }
          else
          {
            v21 = CCD_BTL::Global(v17, v16, v18, v19);
            if ( *((struct CCD_BTL **)v21 + 15) != (struct CCD_BTL *)((char *)v21 + 120) )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
              v26[3] = v5;
              LODWORD(v5) = v5 | 1;
              v26[4] = this;
              v27 = *((_QWORD *)this + 8);
              v26[5] = v27;
              v31 = CCD_BTL::Global(v27, v28, v29, v30);
              CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v31 + 96));
            }
            if ( (v5 & 1) == 0 )
            {
              v52 = CCD_STORE::ForTopology(
                      this,
                      (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                      this,
                      0);
              v55 = v52;
              if ( v52 >= 0 )
              {
LABEL_15:
                if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v68, v37, v38) )
                {
                  v45 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v68,
                          (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))anonymous_namespace_::_UpdateConnectedSetCallback,
                          this);
                  v46 = v45;
                  if ( v45 < 0 )
                  {
                    v64 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
                    v64[4] = v69;
                    v64[3] = v46;
                    v64[5] = this;
                    v64[6] = *((_QWORD *)this + 8);
                    WdLogEvent5_WdError(v64);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v5, v46, 0LL);
                  }
                }
                v47 = CCD_BTL::Global(v42, v41, v43, v44);
                v48 = CCD_TOPOLOGY::CopyInheritScope(v47, this);
                v15 = v48;
                if ( v48 < 0 )
                {
                  v65 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
                  v65[3] = v15;
                  v65[4] = this;
                  v65[5] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v65);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v5, v15, 0LL);
                  LODWORD(v15) = 0;
                }
                DxgkLogCodePointPacket(0x3Fu, 8u, v5, v15, 0LL);
                goto LABEL_21;
              }
              v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53, v37, v38);
              v62[3] = v55;
              v62[4] = this;
              v62[5] = *((_QWORD *)this + 8);
            }
            v32 = CCD_STORE::ForTopology(
                    this,
                    (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))anonymous_namespace_::_SaveTopologySetCallback,
                    this,
                    1);
            v15 = v32;
            if ( v32 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v34, v33, v35, v36) + 800) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(this);
                v40 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
                v66 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v15, v40, &v66, 0);
              }
              goto LABEL_15;
            }
            v63 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
            v63[3] = v15;
            v63[4] = this;
            v63[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v63);
            DxgkLogCodePointPacket(0x3Fu, 5u, v5, v15, 0LL);
          }
LABEL_21:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v68);
          return (unsigned int)v15;
        }
        v20 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v68);
        v15 = v20;
        if ( v20 != -1073741266 )
        {
          if ( v20 < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
            v61[3] = v15;
            v61[4] = *((_QWORD *)this + 8);
            v61[5] = v5;
            WdLogEvent5_WdError(v61);
            DxgkLogCodePointPacket(0x3Fu, 3u, v5, v15, 0LL);
            goto LABEL_21;
          }
          goto LABEL_8;
        }
        v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v60[3] = -1073741266LL;
        v60[4] = *((_QWORD *)this + 8);
        v60[5] = v5;
        WdLogEvent5_WdWarning(v60);
        v59 = 3;
      }
      else
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v58[3] = -1073741266LL;
        v58[4] = *((_QWORD *)this + 8);
        v58[5] = v5;
        WdLogEvent5_WdWarning(v58);
        v59 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v59, v5, 0xC000022E, 0LL);
      LODWORD(v15) = -1073741266;
      goto LABEL_21;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v56[3] = this;
    v56[4] = *((_QWORD *)this + 8);
    v56[5] = *(int *)this;
    WdLogEvent5_WdError(v56);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
