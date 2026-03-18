/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D9A58
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00B3B40 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00B8E74 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00B8F10 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetUsageClass @ 0x1C00D9C08 (MonitorGetUsageClass.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r13
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  VIDPN_MGR *v17; // r15
  int ConnectedMonitorHandle; // eax
  __int64 v19; // rcx
  struct HDXGMONITOR__ *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned __int16 *v26; // rax
  unsigned __int16 v27; // dx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  int v34; // [rsp+28h] [rbp-41h] BYREF
  struct HDXGMONITOR__ *v35; // [rsp+30h] [rbp-39h] BYREF
  __int64 v36; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v39[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v40[40]; // [rsp+70h] [rbp+7h] BYREF

  v6 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v37);
  v13 = v9;
  if ( !v9 )
  {
    v29 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v29 + 24) = a1->HighPart;
    *(_QWORD *)(v29 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v29);
    LODWORD(v16) = -1073741810;
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v9, 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  v16 = v14;
  if ( v14 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v30[3] = v16;
    v30[4] = v13;
    v30[5] = a1->HighPart;
    v30[6] = a1->LowPart;
    WdLogEvent5_WdError(v30);
    goto LABEL_19;
  }
  v17 = *(VIDPN_MGR **)(*((_QWORD *)v13 + 307) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, (__int64)v17);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v17, v6, &v35);
  v16 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v31[3] = v16;
    v31[5] = v13;
LABEL_28:
    v31[4] = v6;
    v31[6] = a1->HighPart;
    v31[7] = a1->LowPart;
    WdLogEvent5_WdError(v31);
    goto LABEL_18;
  }
  v20 = v35;
  v34 = 0;
  MonitorGetUsageClass(v35, &v34);
  if ( !v34 )
  {
    LODWORD(v16) = MonitorGetCCDMonitorID(v20, a4, a3);
    if ( (_DWORD)v16 == -2147483643 )
      LODWORD(v16) = -1073741789;
  }
  v23 = VIDPN_MGR::ReleaseMonitorHandle(v17, v20, v21, v22);
  v25 = v23;
  if ( v23 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24);
    v32[3] = v25;
    v32[4] = v6;
    v32[5] = v20;
    v32[6] = a1->HighPart;
    v32[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v32);
    LODWORD(v16) = v25;
  }
  else
  {
    if ( !v34 )
    {
      if ( (int)v16 >= 0 )
      {
        if ( a3 )
        {
          v24 = a4;
          v26 = a3;
          if ( a4 )
          {
            do
            {
              if ( !*v26 )
                break;
              ++v26;
              --v24;
            }
            while ( v24 );
          }
          LODWORD(v16) = v24 == 0 ? 0xC000000D : 0;
          if ( v24 )
            v27 = a4 - v24;
          else
            v27 = 0;
        }
        else
        {
          v27 = v36;
          LODWORD(v16) = -1073741811;
        }
        if ( (int)v16 < 0 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24);
          v33[3] = (int)v16;
          v33[4] = a3;
          v33[5] = a4;
          v33[6] = a1->HighPart;
          v33[7] = a1->LowPart;
          WdLogEvent5_WdAssertion(v33);
        }
        else
        {
          *a5 = v27;
        }
        goto LABEL_18;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v31[3] = (int)v16;
      v31[5] = v20;
      goto LABEL_28;
    }
    LODWORD(v16) = 0;
    *a5 = 0;
  }
LABEL_18:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v40);
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  return (unsigned int)v16;
}
