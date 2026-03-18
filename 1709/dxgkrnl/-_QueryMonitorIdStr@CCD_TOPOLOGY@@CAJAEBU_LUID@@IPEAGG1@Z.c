/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00DBFE4 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     RtlStringCchLengthW @ 0x1C000BCF8 (RtlStringCchLengthW.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00A9AB0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00F5E8C (MonitorIsHMDDevicePresent.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v5; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  VIDPN_MGR *v16; // r15
  int ConnectedMonitorHandle; // eax
  __int64 v18; // rcx
  struct HDXGMONITOR__ *v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r15
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _BYTE v31[8]; // [rsp+28h] [rbp-41h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v36[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v37[40]; // [rsp+70h] [rbp+7h] BYREF

  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v34);
  v12 = v8;
  if ( !v8 )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v26 + 24) = a1->HighPart;
    *(_QWORD *)(v26 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v26);
    LODWORD(v15) = -1073741810;
    return (unsigned int)v15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v8, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
  v15 = v13;
  if ( v13 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v27[3] = v15;
    v27[4] = v12;
    v27[5] = a1->HighPart;
    v27[6] = a1->LowPart;
    WdLogEvent5_WdError(v27);
    goto LABEL_13;
  }
  v16 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, (__int64)v16);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v16, v5, (struct HDXGMONITOR__ **)&pcchLength);
  v15 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v28[3] = v15;
    v28[5] = v12;
LABEL_21:
    v28[4] = v5;
    v28[6] = a1->HighPart;
    v28[7] = a1->LowPart;
    WdLogEvent5_WdError(v28);
    goto LABEL_12;
  }
  v19 = (struct HDXGMONITOR__ *)pcchLength;
  v31[0] = 0;
  MonitorIsHMDDevicePresent(pcchLength, v31, 0LL);
  if ( !v31[0] )
  {
    LODWORD(v15) = MonitorGetCCDMonitorID(v19, a4, a3);
    if ( (_DWORD)v15 == -2147483643 )
      LODWORD(v15) = -1073741789;
  }
  v20 = VIDPN_MGR::ReleaseMonitorHandle(v16, v19);
  v22 = v20;
  if ( v20 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21);
    v29[3] = v22;
    v29[4] = v5;
    v29[5] = v19;
    v29[6] = a1->HighPart;
    v29[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v29);
    LODWORD(v15) = v22;
  }
  else
  {
    if ( !v31[0] )
    {
      if ( (int)v15 >= 0 )
      {
        v23 = RtlStringCchLengthW(a3, a4, &pcchLength);
        v15 = v23;
        if ( v23 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24);
          v30[3] = v15;
          v30[4] = a3;
          v30[5] = a4;
          v30[6] = a1->HighPart;
          v30[7] = a1->LowPart;
          WdLogEvent5_WdAssertion(v30);
        }
        else
        {
          *a5 = pcchLength;
        }
        goto LABEL_12;
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v28[3] = (int)v15;
      v28[5] = v19;
      goto LABEL_21;
    }
    LODWORD(v15) = 0;
    *a5 = 0;
  }
LABEL_12:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
LABEL_13:
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v15;
}
