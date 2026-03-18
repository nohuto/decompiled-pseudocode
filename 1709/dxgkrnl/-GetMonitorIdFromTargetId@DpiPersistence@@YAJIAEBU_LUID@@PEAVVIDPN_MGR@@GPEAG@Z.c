/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00E2198
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00E211C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00A9AB0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DpiPersistence::GetMonitorIdFromTargetId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        unsigned __int16 *a5)
{
  __int64 v6; // rsi
  unsigned __int16 v8; // bp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // edx
  struct HDXGMONITOR__ *v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  struct HDXGMONITOR__ *v20; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v20);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v18[5] = (int)a2[1];
    v18[6] = *a2;
    v18[3] = v11;
    goto LABEL_10;
  }
  v12 = v8;
  v13 = v20;
  LODWORD(v11) = MonitorGetCCDMonitorID(v20, v12, a5);
  if ( (_DWORD)v11 == -2147483643 )
    LODWORD(v11) = -1073741789;
  v14 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v13);
  v16 = v14;
  if ( v14 >= 0 )
  {
    if ( (int)v11 >= 0 )
      return (unsigned int)v11;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v18[3] = (int)v11;
    v18[6] = (int)a2[1];
    v18[7] = *a2;
    v18[5] = v13;
LABEL_10:
    v18[4] = v6;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v11;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
  v19[6] = (int)a2[1];
  v19[7] = *a2;
  v19[3] = v16;
  v19[4] = v6;
  v19[5] = v13;
  WdLogEvent5_WdAssertion(v19);
  return (unsigned int)v16;
}
