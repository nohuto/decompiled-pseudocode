/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C3B80
 * Callers:
 *     DxgkGetMonitorDisplayId @ 0x1C01C4F80 (DxgkGetMonitorDisplayId.c)
 *     DxgkGetMonitorEdid @ 0x1C01C4FB0 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01FE5B4 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01FE670 (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // r12
  DWORD LowPart; // edi
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  DXGGLOBAL *Global; // rax
  DWORD v17; // ebx
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rcx
  DXGADAPTER *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  _QWORD *v28; // rax
  int MonitorHandle; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 HighPart; // rcx
  struct HDXGMONITOR__ *v33; // rbx
  __int64 v34; // rax
  int EdidFromMonitor; // eax
  __int64 v36; // rcx
  __int64 v37; // rsi
  _QWORD *v38; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _LUID v45; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v47[8]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v48[32]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v49[88]; // [rsp+68h] [rbp-11h] BYREF
  struct _LUID v50; // [rsp+D0h] [rbp+57h] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+67h] BYREF

  v50 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (unsigned int)a2;
  LowPart = a1.LowPart;
  if ( (_BYTE)a3 && (a4 & 0x7F) != 0 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v6;
    *(_QWORD *)(v10 + 32) = 128LL;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  v12 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v50, a2, &v45, &v51);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = v50.HighPart;
    v15[4] = LowPart;
    v15[5] = v8;
    v15[6] = v14;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  Global = DXGGLOBAL::GetGlobal(v13);
  v17 = v45.LowPart;
  v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v45, &v46);
  v20 = v18;
  if ( !v18 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[6] = 0LL;
LABEL_9:
    v21[3] = v45.HighPart;
    v21[5] = -1073741811LL;
    v21[4] = v17;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v18 + 288) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v18);
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v21[6] = 1LL;
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v18, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v20);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
  v27 = v23;
  if ( v23 >= 0 )
  {
    MonitorHandle = MonitorGetMonitorHandle(v20, v51, 0, DxgkGetMonitorDescriptor, &v45);
    v27 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v33 = (struct HDXGMONITOR__ *)v45;
      if ( !*(_QWORD *)&v45 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v34 + 24) = 6641LL;
        WdLogEvent5_WdAssertion(v34);
      }
      if ( v7 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v33, v6, a5, a6);
        v37 = EdidFromMonitor;
        if ( EdidFromMonitor < 0 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v38[3] = v50.HighPart;
          v38[4] = LowPart;
          v38[5] = v8;
          v38[6] = v37;
          v38[7] = 1LL;
          WdLogEvent5_WdError(v38);
        }
        LODWORD(v27) = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v33, (unsigned int)v6, a5, a6);
        v27 = DisplayIDFromMonitor;
        if ( (int)(DisplayIDFromMonitor + 0x80000000) >= 0 && DisplayIDFromMonitor != -1073741789 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdWarning(0x80000000LL, v40, v41);
          v42[3] = v50.HighPart;
          v42[4] = LowPart;
          v42[5] = v8;
          v42[6] = v27;
          WdLogEvent5_WdWarning(v42);
        }
      }
      if ( (int)MonitorReleaseMonitorHandle(v20, (struct _IO_REMOVE_LOCK *)v33, &DxgkGetMonitorEdid) < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v44 + 24) = 6686LL;
        WdLogEvent5_WdAssertion(v44);
      }
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      HighPart = v50.HighPart;
      v31[7] = 0LL;
      v31[3] = HighPart;
      v31[4] = LowPart;
      v31[5] = v8;
      v31[6] = v27;
      WdLogEvent5_WdError(v31);
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v28[3] = v45.HighPart;
    v28[4] = v17;
    v28[5] = v27;
    WdLogEvent5_WdWarning(v28);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v49);
  COREACCESS::~COREACCESS((COREACCESS *)v48);
  return (unsigned int)v27;
}
