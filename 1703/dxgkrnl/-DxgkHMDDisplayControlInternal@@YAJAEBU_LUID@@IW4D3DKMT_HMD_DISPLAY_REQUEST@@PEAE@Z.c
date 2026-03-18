/*
 * XREFs of ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01A9158
 * Callers:
 *     ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C017AD90 (-DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C00F8170 (DmmIsTargetHMD.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C01AAE28 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 */

__int64 __fastcall DxgkHMDDisplayControlInternal(const struct _LUID *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // r14
  int v6; // esi
  DXGGLOBAL *Global; // rax
  __int64 v9; // r9
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGADAPTER *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int IsTargetInClientVidPnTopology; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // esi
  __int64 v29; // rax
  int MonitorType; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  _QWORD *v34; // rax
  unsigned __int8 v35; // al
  int v36; // eax
  char v37; // si
  int v38; // eax
  unsigned __int8 v39[8]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-21h] BYREF
  char v41[8]; // [rsp+60h] [rbp-19h] BYREF
  char v42[32]; // [rsp+68h] [rbp-11h] BYREF
  char v43[40]; // [rsp+88h] [rbp+Fh] BYREF
  char v44; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (unsigned int)a2;
  v6 = a3;
  if ( (unsigned int)a3 <= 2 && a4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, (__int64)a4);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v40, v9);
    v13 = v10;
    if ( !v10 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v15) = -1073741811;
      v14[3] = a1->HighPart;
      v14[4] = a1->LowPart;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      return (unsigned int)v15;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v10, 0LL);
    DXGADAPTER::ReleaseReference(v13);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
    v15 = v17;
    if ( v17 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
LABEL_10:
      v20[3] = a1->HighPart;
      v20[4] = a1->LowPart;
      v20[5] = v15;
LABEL_33:
      WdLogEvent5_WdError(v20);
      goto LABEL_27;
    }
    if ( !*((_QWORD *)v13 + 285) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v15 = -1073741811LL;
      goto LABEL_10;
    }
    if ( !DmmIsTargetHMD(v13, v4) )
    {
      LODWORD(v15) = -1073741811;
LABEL_27:
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      return (unsigned int)v15;
    }
    v44 = 0;
    IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v13, (unsigned int)v4, &v44);
    v15 = IsTargetInClientVidPnTopology;
    if ( IsTargetInClientVidPnTopology < 0 )
      goto LABEL_32;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v41);
    if ( v6 )
    {
      v28 = v6 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          *a4 = v44;
        }
        else
        {
          v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
          *(_QWORD *)(v29 + 24) = 8132LL;
          WdLogEvent5_WdAssertion(v29);
        }
        goto LABEL_27;
      }
      v39[0] = 0;
      MonitorType = QueryMonitorType(a1, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, v39);
      v33 = MonitorType;
      if ( MonitorType >= 0 )
      {
        v35 = v39[0];
      }
      else
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
        v34[3] = v33;
        v34[4] = a1->HighPart;
        v34[5] = a1->LowPart;
        v34[6] = v4;
        WdLogEvent5_WdError(v34);
        v35 = 0;
      }
      if ( v44 )
      {
        if ( !v35 )
        {
          v36 = HMDDisplayOnOff(a1, v4, 0);
          v15 = v36;
          if ( v36 >= 0 )
          {
LABEL_25:
            v37 = 0;
LABEL_26:
            *a4 = v37;
            goto LABEL_27;
          }
LABEL_32:
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
          v20[3] = a1->HighPart;
          v20[4] = a1->LowPart;
          v20[5] = v4;
          v20[6] = v15;
          goto LABEL_33;
        }
      }
      else if ( !v35 )
      {
        goto LABEL_25;
      }
      v37 = 1;
      goto LABEL_26;
    }
    v37 = 1;
    if ( v44 )
      goto LABEL_26;
    v38 = HMDDisplayOnOff(a1, v4, 1);
    v15 = v38;
    if ( v38 >= 0 )
      goto LABEL_26;
    goto LABEL_32;
  }
  return -1073741811LL;
}
