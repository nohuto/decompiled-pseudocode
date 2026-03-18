/*
 * XREFs of ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00ADA88
 * Callers:
 *     ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00ADA0C (-AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall GetMonitorIdFromTargetId(
        unsigned int a1,
        const struct _LUID *a2,
        struct VIDPN_MGR *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // rsi
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct HDXGMONITOR__ *v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  struct HDXGMONITOR__ *v24; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(a3, a1, &v24);
  v12 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v22[5] = a2->HighPart;
    v22[6] = a2->LowPart;
    v22[3] = v12;
    goto LABEL_10;
  }
  v13 = a4;
  v14 = v24;
  LODWORD(v12) = MonitorGetCCDMonitorID(v24, v13, a5);
  if ( (_DWORD)v12 == -2147483643 )
    LODWORD(v12) = -1073741789;
  v15 = VIDPN_MGR::ReleaseMonitorHandle(a3, v14);
  v20 = v15;
  if ( v15 >= 0 )
  {
    if ( (int)v12 >= 0 )
      return (unsigned int)v12;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v22[3] = (int)v12;
    v22[6] = a2->HighPart;
    v22[7] = a2->LowPart;
    v22[5] = v14;
LABEL_10:
    v22[4] = v6;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v12;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
  v23[6] = a2->HighPart;
  v23[7] = a2->LowPart;
  v23[3] = v20;
  v23[4] = v6;
  v23[5] = v14;
  WdLogEvent5_WdAssertion(v23);
  return (unsigned int)v20;
}
