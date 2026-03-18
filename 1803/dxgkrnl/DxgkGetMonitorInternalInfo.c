/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00ABB70
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00AA124 (MonitorGetAdvancedColorParams.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00ABE84 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetBrightnessNitsCaps @ 0x1C011173C (MonitorGetBrightnessNitsCaps.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  DWORD LowPart; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  int MonitorHandle; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  struct HDXGMONITOR__ *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int CCDMonitorID; // eax
  __int64 v30; // rcx
  int AdvancedColorParams; // eax
  bool v32; // al
  int IsMonitorAndLinkHDRCapable; // eax
  _QWORD *v34; // rax
  __int64 HighPart; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  int v43; // [rsp+28h] [rbp-B1h]
  char v44; // [rsp+78h] [rbp-61h] BYREF
  char v45; // [rsp+79h] [rbp-60h] BYREF
  bool v46; // [rsp+7Ah] [rbp-5Fh] BYREF
  bool v47; // [rsp+7Bh] [rbp-5Eh] BYREF
  char v48; // [rsp+7Ch] [rbp-5Dh] BYREF
  bool v49; // [rsp+7Dh] [rbp-5Ch] BYREF
  _BYTE v50[2]; // [rsp+7Eh] [rbp-5Bh] BYREF
  struct _LUID v51; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-51h] BYREF
  int v53; // [rsp+90h] [rbp-49h] BYREF
  __int64 v54; // [rsp+98h] [rbp-41h]
  __int64 v55; // [rsp+A0h] [rbp-39h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v57[8]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v58[8]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-11h]
  struct DXGADAPTER *v60; // [rsp+D0h] [rbp-9h]
  char v61; // [rsp+D8h] [rbp-1h]
  _BYTE v62[8]; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v63; // [rsp+E8h] [rbp+Fh]
  struct DXGADAPTER *v64; // [rsp+F0h] [rbp+17h]
  char v65; // [rsp+F8h] [rbp+1Fh]
  __int64 v66; // [rsp+138h] [rbp+5Fh] BYREF

  v66 = a1;
  v54 = 0LL;
  v7 = a2;
  LowPart = a1;
  v53 = 2186;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2186);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2186);
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v66, v7, &v51, &v52);
  v11 = v9;
  if ( v9 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    HighPart = SHIDWORD(v66);
    v34[5] = v7;
    v34[6] = v11;
LABEL_32:
    v34[3] = HighPart;
    v34[4] = LowPart;
    WdLogEvent5_WdError(v34);
    goto LABEL_17;
  }
  Global = DXGGLOBAL::GetGlobal(v10);
  LowPart = v51.LowPart;
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v51, &v56);
  v15 = v13;
  if ( !v13 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v34[6] = 0LL;
LABEL_31:
    HighPart = v51.HighPart;
    LODWORD(v11) = -1073741811;
    v34[5] = -1073741811LL;
    goto LABEL_32;
  }
  if ( !*((_QWORD *)v13 + 307) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v36);
    v34[6] = 1LL;
    goto LABEL_31;
  }
  v60 = v13;
  v61 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v64 = v13;
  v59 = -1LL;
  v65 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v63 = -1LL;
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57);
  v20 = v16;
  if ( v16 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v37[3] = v51.HighPart;
    v37[4] = v51.LowPart;
    v37[5] = v20;
    WdLogEvent5_WdWarning(v37);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle(v15, v52, 0LL, DxgkGetMonitorInternalInfo, &v55);
    v20 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v24 = (struct HDXGMONITOR__ *)v55;
      if ( !v55 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v40 + 24) = 6630LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( a3 )
      {
        CCDMonitorID = MonitorGetCCDMonitorID(v24, 260LL, a3 + 20);
        v20 = CCDMonitorID;
        if ( CCDMonitorID < 0
          || (AdvancedColorParams = MonitorGetAdvancedColorParams(
                                      v24,
                                      (_QWORD *)(a3 + 540),
                                      (unsigned __int64 *)(a3 + 548),
                                      (_DWORD *)(a3 + 556),
                                      (_QWORD *)(a3 + 564),
                                      (_DWORD *)(a3 + 572),
                                      (_DWORD *)(a3 + 576),
                                      (_DWORD *)(a3 + 580),
                                      &v44,
                                      &v49,
                                      &v45,
                                      &v46,
                                      &v47),
              v20 = AdvancedColorParams,
              AdvancedColorParams < 0)
          || (v32 = v46,
              *(_DWORD *)(a3 + 588) = (v45 != 0 ? 2 : 0) | (v44 != 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFFC,
              *(_DWORD *)(a3 + 584) = (v47 ? 4 : 0) | (v32 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9,
              IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v24, v50, &v48),
              v20 = IsMonitorAndLinkHDRCapable,
              IsMonitorAndLinkHDRCapable < 0) )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v41[3] = SHIDWORD(v66);
          v41[4] = (unsigned int)v66;
          v41[5] = v7;
          v41[6] = v20;
          WdLogEvent5_WdError(v41);
        }
        else
        {
          *(_DWORD *)(a3 + 588) = (v48 != 0 ? 4 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFFB;
        }
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
          8395569LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00564B0,
          0,
          v43);
        MonitorGetBrightnessNitsCaps(v24, a3 + 592);
      }
      if ( (int)v20 >= 0 && (a4 || a5) )
        MonitorGetMonitorOrientationsFromMonitor(v24, a4, a5);
      if ( (int)MonitorReleaseMonitorHandle(v15, (__int64)v24, DxgkGetMonitorInternalInfo, v23) < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v42 + 24) = 6712LL;
        WdLogEvent5_WdAssertion(v42);
      }
      LODWORD(v11) = 0;
      goto LABEL_16;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v39 = SHIDWORD(v66);
    v38[7] = 0LL;
    v38[3] = v39;
    v38[4] = (unsigned int)v66;
    v38[5] = v7;
    v38[6] = v20;
    WdLogEvent5_WdError(v38);
  }
  LODWORD(v11) = v20;
LABEL_16:
  COREACCESS::~COREACCESS((COREACCESS *)v62);
  COREACCESS::~COREACCESS((COREACCESS *)v58);
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v53);
  return (unsigned int)v11;
}
