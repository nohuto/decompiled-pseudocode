/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00EC3E0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00ADEB8 (MonitorIsHMDDevicePresent.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGADAPTER *v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  int ConnectedMonitorHandle; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  struct HDXGMONITOR__ *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int CCDMonitorID; // r15d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _BYTE v44[8]; // [rsp+28h] [rbp-51h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-49h] BYREF
  struct HDXGMONITOR__ *v46; // [rsp+38h] [rbp-41h] BYREF
  __int64 v47; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v49[8]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v50[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v51[40]; // [rsp+80h] [rbp+7h] BYREF

  v6 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v48);
  v15 = v10;
  if ( !v10 )
  {
    v39 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v39 + 24) = a1->HighPart;
    *(_QWORD *)(v39 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v39);
    LODWORD(v21) = -1073741810;
    return (unsigned int)v21;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v10, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49);
  v21 = v16;
  if ( v16 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v40[3] = v21;
    v40[4] = v15;
    v40[5] = a1->HighPart;
    v40[6] = a1->LowPart;
    WdLogEvent5_WdError(v40);
    goto LABEL_12;
  }
  pcchLength = *(_QWORD *)(*((_QWORD *)v15 + 285) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v47, pcchLength, v19, v20);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)pcchLength, v6, &v46);
  v21 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v41[3] = v21;
    v41[4] = v6;
    v41[5] = v15;
    v41[6] = a1->HighPart;
    v41[7] = a1->LowPart;
    WdLogEvent5_WdError(v41);
    goto LABEL_11;
  }
  v44[0] = 0;
  v26 = v46;
  MonitorIsHMDDevicePresent(v46, v44, 0LL, v25);
  if ( v44[0] )
  {
    LODWORD(v21) = 0;
    *a5 = 0;
    goto LABEL_11;
  }
  CCDMonitorID = MonitorGetCCDMonitorID(v26, a4, a3);
  if ( CCDMonitorID == -2147483643 )
    CCDMonitorID = -1073741789;
  v31 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)pcchLength, v26);
  v21 = v31;
  if ( v31 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
    v42[4] = v6;
LABEL_21:
    v42[3] = v21;
    v42[5] = v26;
    v42[6] = a1->HighPart;
    v42[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v42);
    goto LABEL_11;
  }
  if ( CCDMonitorID < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
    v43[3] = CCDMonitorID;
    v43[4] = v6;
    v43[5] = v26;
    v43[6] = a1->HighPart;
    v43[7] = a1->LowPart;
    WdLogEvent5_WdError(v43);
    LODWORD(v21) = CCDMonitorID;
    goto LABEL_11;
  }
  v26 = (struct HDXGMONITOR__ *)a4;
  v36 = RtlStringCchLengthW(a3, a4, &pcchLength);
  v21 = v36;
  if ( v36 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v37, v27, v28, v29);
    v42[4] = a3;
    goto LABEL_21;
  }
  *a5 = pcchLength;
LABEL_11:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v27, v28, v29);
LABEL_12:
  COREACCESS::~COREACCESS((COREACCESS *)v51);
  COREACCESS::~COREACCESS((COREACCESS *)v50);
  DXGADAPTER::ReleaseReference(v15);
  return (unsigned int)v21;
}
