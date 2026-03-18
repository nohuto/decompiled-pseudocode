/*
 * XREFs of ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C3E48
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C017EB40 (-DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z @ 0x1C00B5588 (-DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C010381C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C01ED724 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayControlInternal(const struct _LUID *a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int IsTargetInClientVidPnTopology; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rax
  int MonitorType; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  unsigned __int8 v27; // al
  int v28; // eax
  char v29; // si
  int v30; // eax
  unsigned __int8 v31[8]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v34[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v35[40]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int8 v36; // [rsp+F0h] [rbp+77h] BYREF

  v4 = a2;
  if ( a3 <= 2 && a4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v32);
    v11 = v9;
    if ( !v9 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v13) = -1073741811;
      v12[3] = a1->HighPart;
      v12[4] = a1->LowPart;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v13;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v9, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
LABEL_10:
      v17[3] = a1->HighPart;
      v17[4] = a1->LowPart;
      v17[5] = v13;
LABEL_33:
      WdLogEvent5_WdError(v17);
      goto LABEL_27;
    }
    if ( !*((_QWORD *)v11 + 288) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v13 = -1073741811LL;
      goto LABEL_10;
    }
    if ( !DmmIsTargetHMD(v11, v4) )
    {
      LODWORD(v13) = -1073741811;
LABEL_27:
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      return (unsigned int)v13;
    }
    v36 = 0;
    IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v11, v4, &v36);
    v13 = IsTargetInClientVidPnTopology;
    if ( IsTargetInClientVidPnTopology < 0 )
      goto LABEL_32;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v33);
    if ( a3 )
    {
      v21 = a3 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          *a4 = v36;
        }
        else
        {
          v22 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v22 + 24) = 8154LL;
          WdLogEvent5_WdAssertion(v22);
        }
        goto LABEL_27;
      }
      v31[0] = 0;
      MonitorType = QueryMonitorType(a1, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, v31);
      v25 = MonitorType;
      if ( MonitorType >= 0 )
      {
        v27 = v31[0];
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v26[3] = v25;
        v26[4] = a1->HighPart;
        v26[5] = a1->LowPart;
        v26[6] = v4;
        WdLogEvent5_WdError(v26);
        v27 = 0;
      }
      if ( v36 )
      {
        if ( !v27 )
        {
          v28 = HMDDisplayOnOff(a1, v4, 0);
          v13 = v28;
          if ( v28 >= 0 )
          {
LABEL_25:
            v29 = 0;
LABEL_26:
            *a4 = v29;
            goto LABEL_27;
          }
LABEL_32:
          v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v17[3] = a1->HighPart;
          v17[4] = a1->LowPart;
          v17[5] = v4;
          v17[6] = v13;
          goto LABEL_33;
        }
      }
      else if ( !v27 )
      {
        goto LABEL_25;
      }
      v29 = 1;
      goto LABEL_26;
    }
    v29 = 1;
    if ( v36 )
      goto LABEL_26;
    v30 = HMDDisplayOnOff(a1, v4, 1);
    v13 = v30;
    if ( v30 >= 0 )
      goto LABEL_26;
    goto LABEL_32;
  }
  return -1073741811LL;
}
