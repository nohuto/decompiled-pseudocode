/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C4900
 * Callers:
 *     DxgkGetMonitorDisplayId @ 0x1C01C73D0 (DxgkGetMonitorDisplayId.c)
 *     DxgkGetMonitorEdid @ 0x1C01C7400 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C022DFA0 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C022E05C (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // r12
  DWORD LowPart; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  DXGGLOBAL *Global; // rax
  DWORD v20; // ebx
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rcx
  DXGADAPTER *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  _QWORD *v30; // rax
  int MonitorHandle; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 HighPart; // rcx
  struct HDXGMONITOR__ *v35; // rsi
  __int64 v36; // rax
  int EdidFromMonitor; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rbx
  _QWORD *v41; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  struct _LUID v52; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-51h] BYREF
  int v54; // [rsp+40h] [rbp-49h] BYREF
  __int64 v55; // [rsp+48h] [rbp-41h]
  _BYTE v56[8]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v57[32]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v58[88]; // [rsp+78h] [rbp-11h] BYREF
  struct _LUID v59; // [rsp+E0h] [rbp+57h] BYREF
  unsigned int v60; // [rsp+F0h] [rbp+67h] BYREF

  v59 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  LowPart = a1.LowPart;
  v55 = 0LL;
  v54 = 2187;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2187);
  if ( !v7 || (v6 & 0x7F) == 0 )
  {
    v15 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v59, v8, &v52, &v60);
    v14 = v15;
    if ( v15 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v17[3] = v59.HighPart;
      v18 = LowPart;
      v17[5] = v8;
      v17[6] = v14;
LABEL_14:
      v17[4] = v18;
      WdLogEvent5_WdError(v17);
      goto LABEL_32;
    }
    Global = DXGGLOBAL::GetGlobal(v16);
    v20 = v52.LowPart;
    v21 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v52, &v53);
    v23 = v21;
    if ( !v21 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v17[6] = 0LL;
LABEL_13:
      v17[3] = v52.HighPart;
      v18 = v20;
      LODWORD(v14) = -1073741811;
      v17[5] = -1073741811LL;
      goto LABEL_14;
    }
    if ( !*((_QWORD *)v21 + 307) )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v21);
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v17[6] = 1LL;
      goto LABEL_13;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, v21, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v56);
    v29 = v25;
    if ( v25 >= 0 )
    {
      MonitorHandle = MonitorGetMonitorHandle(v23, v60, 0LL, DxgkGetMonitorDescriptor, &v52);
      v29 = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v35 = (struct HDXGMONITOR__ *)v52;
        if ( !*(_QWORD *)&v52 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v36 + 24) = 6849LL;
          WdLogEvent5_WdAssertion(v36);
        }
        if ( v7 )
        {
          EdidFromMonitor = MonitorGetEdidFromMonitor(v35, v6, a5, a6);
          v40 = EdidFromMonitor;
          if ( EdidFromMonitor < 0 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v41[3] = v59.HighPart;
            v41[4] = LowPart;
            v41[5] = v8;
            v41[6] = v40;
            v41[7] = 1LL;
            WdLogEvent5_WdError(v41);
          }
          LODWORD(v14) = 0;
        }
        else
        {
          DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v35, (unsigned int)v6, a5, a6);
          v14 = DisplayIDFromMonitor;
          v45 = DisplayIDFromMonitor + 0x80000000;
          if ( (int)v45 >= 0 && DisplayIDFromMonitor != -1073741789 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v43, v44);
            v46[3] = v59.HighPart;
            v46[4] = LowPart;
            v46[5] = v8;
            v46[6] = v14;
            WdLogEvent5_WdWarning(v46);
          }
        }
        if ( (int)MonitorReleaseMonitorHandle(v23, (__int64)v35, DxgkGetMonitorDescriptor, v39) < 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v48 + 24) = 6894LL;
          WdLogEvent5_WdAssertion(v48);
        }
        goto LABEL_31;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      HighPart = v59.HighPart;
      v33[7] = 0LL;
      v33[3] = HighPart;
      v33[4] = LowPart;
      v33[5] = v8;
      v33[6] = v29;
      WdLogEvent5_WdError(v33);
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30[3] = v52.HighPart;
      v30[4] = v20;
      v30[5] = v29;
      WdLogEvent5_WdWarning(v30);
    }
    LODWORD(v14) = v29;
LABEL_31:
    COREACCESS::~COREACCESS((COREACCESS *)v58);
    COREACCESS::~COREACCESS((COREACCESS *)v57);
    goto LABEL_32;
  }
  v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v13 + 24) = v6;
  *(_QWORD *)(v13 + 32) = 128LL;
  WdLogEvent5_WdWarning(v13);
  LODWORD(v14) = -1073741811;
LABEL_32:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v49, &EventProfilerExit, v50, v54);
  return (unsigned int)v14;
}
