/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D8140 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C00DE060 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009D9E4 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009DA74 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B2288 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B24B4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00B282C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B3D30 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B3F08 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C42C8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00D8374 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  struct CCD_BTL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rcx
  struct CCD_BTL *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rbx
  CCD_TOPOLOGY *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // edx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  struct _STRING v52; // [rsp+30h] [rbp-50h] BYREF
  __int64 v53; // [rsp+40h] [rbp-40h]
  int v54; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v55[3]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v56; // [rsp+68h] [rbp-18h]
  __int64 v57; // [rsp+70h] [rbp-10h]
  __int64 v58; // [rsp+78h] [rbp-8h]

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
      v54 = 0;
      memset(v55, 0, sizeof(v55));
      v57 = 0LL;
      v58 = 0LL;
      v56 = 0;
      CCD_BTL::Global(v6);
      *(_QWORD *)&v52.Length = &v54;
      v52.Buffer = 0LL;
      v53 = 0LL;
      v7 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v52);
      v9 = v7;
      if ( v7 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v43[3] = v9;
        v43[4] = this;
        v43[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v43);
        DxgkLogCodePointPacket(0x3Fu, 1u, v5, v9, 0LL);
        goto LABEL_22;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v54) )
      {
        if ( (v5 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v5 < 0 )
          {
            DxgkLogCodePointPacket(0x3Fu, 4u, v5, v9, 0LL);
          }
          else if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v11) + 1744) )
          {
            DxgkLogCodePointPacket(0x3Fu, 9u, v5, v9, 0LL);
          }
          else
          {
            v17 = CCD_BTL::Global(v16);
            if ( *((struct CCD_BTL **)v17 + 15) != (struct CCD_BTL *)((char *)v17 + 120) )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
              v22[3] = v5;
              LODWORD(v5) = v5 | 1;
              v22[4] = this;
              v23 = *((_QWORD *)this + 8);
              v22[5] = v23;
              v24 = CCD_BTL::Global(v23);
              CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v24 + 96));
            }
            if ( (v5 & 1) == 0 )
            {
              v36 = CCD_STORE::ForTopology(this, anonymous_namespace_::_UpdateTimestampTopologySetCallback, this, 0);
              v41 = v36;
              if ( v36 >= 0 )
              {
LABEL_16:
                if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v54) )
                {
                  v30 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v54,
                          (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))anonymous_namespace_::_UpdateConnectedSetCallback,
                          this);
                  v31 = v30;
                  if ( v30 < 0 )
                  {
                    v50 = (_QWORD *)WdLogNewEntry5_WdError(v29);
                    v50[4] = v55;
                    v50[3] = v31;
                    v50[5] = this;
                    v50[6] = *((_QWORD *)this + 8);
                    WdLogEvent5_WdError(v50);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v5, v31, 0LL);
                  }
                }
                v32 = CCD_BTL::Global(v29);
                v33 = CCD_TOPOLOGY::CopyInheritScope(v32, this);
                v9 = v33;
                if ( v33 < 0 )
                {
                  v51 = (_QWORD *)WdLogNewEntry5_WdError(v34);
                  v51[3] = v9;
                  v51[4] = this;
                  v51[5] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v51);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v5, v9, 0LL);
                  LODWORD(v9) = 0;
                }
                DxgkLogCodePointPacket(0x3Fu, 8u, v5, v9, 0LL);
                goto LABEL_22;
              }
              v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v37, v39, v40);
              v48[3] = v41;
              v48[4] = this;
              v48[5] = *((_QWORD *)this + 8);
            }
            v25 = CCD_STORE::ForTopology(this, anonymous_namespace_::_SaveTopologySetCallback, this, 1);
            v9 = v25;
            if ( v25 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v26) + 880) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v54);
                v28 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
                v52 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v9, v28, &v52, 0);
              }
              goto LABEL_16;
            }
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v26);
            v49[3] = v9;
            v49[4] = this;
            v49[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v49);
            DxgkLogCodePointPacket(0x3Fu, 5u, v5, v9, 0LL);
          }
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v54);
          return (unsigned int)v9;
        }
        v13 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v54);
        v9 = v13;
        if ( v13 != -1073741266 )
        {
          if ( v13 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v11);
            v47[3] = v9;
            v47[4] = *((_QWORD *)this + 8);
            v47[5] = v5;
            WdLogEvent5_WdError(v47);
            DxgkLogCodePointPacket(0x3Fu, 3u, v5, v9, 0LL);
            goto LABEL_22;
          }
          goto LABEL_8;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v14, v15);
        v46[3] = -1073741266LL;
        v46[4] = *((_QWORD *)this + 8);
        v46[5] = v5;
        WdLogEvent5_WdWarning(v46);
        v45 = 3;
      }
      else
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v44[3] = -1073741266LL;
        v44[4] = *((_QWORD *)this + 8);
        v44[5] = v5;
        WdLogEvent5_WdWarning(v44);
        v45 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v45, v5, 0xC000022E, 0LL);
      LODWORD(v9) = -1073741266;
      goto LABEL_22;
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v42[3] = this;
    v42[4] = *((_QWORD *)this + 8);
    v42[5] = *(int *)this;
    WdLogEvent5_WdError(v42);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
