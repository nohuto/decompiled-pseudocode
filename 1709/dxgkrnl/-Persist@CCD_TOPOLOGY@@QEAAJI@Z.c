/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00E12AC (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C00E1780 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D08DC (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D096C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA8FC (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DAD20 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00DC1C8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00E1244 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00E1400 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct CCD_BTL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct CCD_BTL *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  CCD_TOPOLOGY *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // edx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  struct _STRING v44; // [rsp+30h] [rbp-50h] BYREF
  __int64 v45; // [rsp+40h] [rbp-40h]
  int v46; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v47[3]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v48; // [rsp+68h] [rbp-18h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp-8h]

  v3 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v46 = 0;
      memset(v47, 0, sizeof(v47));
      v49 = 0LL;
      v50 = 0LL;
      v48 = 0;
      CCD_BTL::Global();
      *(_QWORD *)&v44.Length = &v46;
      v44.Buffer = 0LL;
      v45 = 0LL;
      v5 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v44);
      v7 = v5;
      if ( v5 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v6);
        v35[3] = v7;
        v35[4] = this;
        v35[5] = this[8];
        WdLogEvent5_WdError(v35);
        DxgkLogCodePointPacket(0x3Fu, 1u, v3, v7, 0LL);
        goto LABEL_22;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v46) )
      {
        if ( (v3 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v3 < 0 )
          {
            DxgkLogCodePointPacket(0x3Fu, 4u, v3, v7, 0LL);
          }
          else if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v9) + 1616) )
          {
            DxgkLogCodePointPacket(0x3Fu, 9u, v3, v7, 0LL);
          }
          else
          {
            v14 = CCD_BTL::Global();
            if ( *((struct CCD_BTL **)v14 + 15) != (struct CCD_BTL *)((char *)v14 + 120) )
            {
              v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
              v17[3] = v3;
              LODWORD(v3) = v3 | 1;
              v17[4] = this;
              v17[5] = this[8];
              v18 = CCD_BTL::Global();
              CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v18 + 96));
            }
            if ( (v3 & 1) == 0 )
            {
              v30 = CCD_STORE::ForTopology(
                      (const struct CCD_SET_STRING_ID *)this,
                      anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                      (__int64)this,
                      0);
              v33 = v30;
              if ( v30 >= 0 )
              {
LABEL_16:
                if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v46) )
                {
                  v23 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v46,
                          anonymous_namespace_::_UpdateConnectedSetCallback,
                          (__int64)this);
                  v25 = v23;
                  if ( v23 < 0 )
                  {
                    v42 = (_QWORD *)WdLogNewEntry5_WdError(v24);
                    v42[4] = v47;
                    v42[3] = v25;
                    v42[5] = this;
                    v42[6] = this[8];
                    WdLogEvent5_WdError(v42);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v3, v25, 0LL);
                  }
                }
                v26 = CCD_BTL::Global();
                v27 = CCD_TOPOLOGY::CopyInheritScope(v26, (const struct CCD_TOPOLOGY *)this);
                v7 = v27;
                if ( v27 < 0 )
                {
                  v43 = (_QWORD *)WdLogNewEntry5_WdError(v28);
                  v43[3] = v7;
                  v43[4] = this;
                  v43[5] = this[8];
                  WdLogEvent5_WdError(v43);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v3, v7, 0LL);
                  LODWORD(v7) = 0;
                }
                DxgkLogCodePointPacket(0x3Fu, 8u, v3, v7, 0LL);
                goto LABEL_22;
              }
              v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31);
              v40[3] = v33;
              v40[4] = this;
              v40[5] = this[8];
            }
            v19 = CCD_STORE::ForTopology(
                    (const struct CCD_SET_STRING_ID *)this,
                    anonymous_namespace_::_SaveTopologySetCallback,
                    (__int64)this,
                    1);
            v7 = v19;
            if ( v19 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v20) + 800) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v46);
                v22 = this[8];
                v44 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v7, v22, &v44, 0);
              }
              goto LABEL_16;
            }
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v41[3] = v7;
            v41[4] = this;
            v41[5] = this[8];
            WdLogEvent5_WdError(v41);
            DxgkLogCodePointPacket(0x3Fu, 5u, v3, v7, 0LL);
          }
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v46);
          return (unsigned int)v7;
        }
        v11 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v46);
        v7 = v11;
        if ( v11 != -1073741266 )
        {
          if ( v11 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v9);
            v39[3] = v7;
            v39[4] = this[8];
            v39[5] = v3;
            WdLogEvent5_WdError(v39);
            DxgkLogCodePointPacket(0x3Fu, 3u, v3, v7, 0LL);
            goto LABEL_22;
          }
          goto LABEL_8;
        }
        v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v12, v13);
        v38[3] = -1073741266LL;
        v38[4] = this[8];
        v38[5] = v3;
        WdLogEvent5_WdWarning(v38);
        v37 = 3;
      }
      else
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
        v36[3] = -1073741266LL;
        v36[4] = this[8];
        v36[5] = v3;
        WdLogEvent5_WdWarning(v36);
        v37 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v37, v3, 0xC000022E, 0LL);
      LODWORD(v7) = -1073741266;
      goto LABEL_22;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v34[3] = this;
    v34[4] = this[8];
    v34[5] = *(int *)this;
    WdLogEvent5_WdError(v34);
    DxgkLogCodePointPacket(0x3Fu, 0, v3, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
