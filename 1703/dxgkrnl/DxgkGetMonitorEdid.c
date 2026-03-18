/*
 * XREFs of DxgkGetMonitorEdid @ 0x1C01AB1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01E3CF0 (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorEdid(struct _LUID a1, __int64 a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  __int64 v5; // r12
  __int64 v7; // r15
  DWORD LowPart; // edi
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  DXGGLOBAL *Global; // rax
  DWORD v19; // ebx
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGADAPTER *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  _QWORD *v34; // rax
  int MonitorHandle; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 HighPart; // rcx
  struct HDXGMONITOR__ *v42; // rbx
  __int64 v43; // rax
  int EdidFromMonitor; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rsi
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  struct _LUID v55; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v56; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v57[8]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v58[32]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v59[88]; // [rsp+68h] [rbp-9h] BYREF
  struct _LUID v60; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v61; // [rsp+E0h] [rbp+6Fh] BYREF

  v60 = a1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  LowPart = a1.LowPart;
  if ( (a3 & 0x7F) != 0 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = v5;
    *(_QWORD *)(v9 + 32) = 128LL;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v60, a2, &v55, &v61);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v17[3] = v60.HighPart;
    v17[4] = LowPart;
    v17[5] = v7;
    v17[6] = v16;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v16;
  }
  Global = DXGGLOBAL::GetGlobal(v13, v12, v14, v15);
  v19 = v55.LowPart;
  v21 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v55, &v56, v20);
  v24 = v21;
  if ( !v21 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v25[6] = 0LL;
LABEL_8:
    v25[3] = v55.HighPart;
    v25[5] = -1073741811LL;
    v25[4] = v19;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v21 + 285) )
  {
    DXGADAPTER::ReleaseReference(v21);
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v25[6] = 1LL;
    goto LABEL_8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v21, 0LL);
  DXGADAPTER::ReleaseReference(v24);
  v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57);
  v33 = v28;
  if ( v28 >= 0 )
  {
    MonitorHandle = MonitorGetMonitorHandle(v24, v61, 0LL, &DxgkGetMonitorEdid, (struct HDXGMONITOR__ **)&v55);
    v33 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v42 = (struct HDXGMONITOR__ *)v55;
      if ( !*(_QWORD *)&v55 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
        *(_QWORD *)(v43 + 24) = 6696LL;
        WdLogEvent5_WdAssertion(v43);
      }
      EdidFromMonitor = MonitorGetEdidFromMonitor(v42, v5, a4, a5);
      v48 = EdidFromMonitor;
      if ( EdidFromMonitor < 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
        v49[3] = v60.HighPart;
        v49[4] = LowPart;
        v49[5] = v7;
        v49[6] = v48;
        v49[7] = 1LL;
        WdLogEvent5_WdError(v49);
      }
      if ( (int)MonitorReleaseMonitorHandle(v24, v42, &DxgkGetMonitorEdid, v47) < 0 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
        *(_QWORD *)(v54 + 24) = 6719LL;
        WdLogEvent5_WdAssertion(v54);
      }
      LODWORD(v33) = 0;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      HighPart = v60.HighPart;
      v40[7] = 0LL;
      v40[3] = HighPart;
      v40[4] = LowPart;
      v40[5] = v7;
      v40[6] = v33;
      WdLogEvent5_WdError(v40);
    }
  }
  else
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    v34[3] = v55.HighPart;
    v34[4] = v19;
    v34[5] = v33;
    WdLogEvent5_WdWarning(v34);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v59);
  COREACCESS::~COREACCESS((COREACCESS *)v58);
  return (unsigned int)v33;
}
