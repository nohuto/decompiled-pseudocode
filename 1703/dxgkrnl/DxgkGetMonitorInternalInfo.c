/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00AC3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00AC5EC (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGADAPTER *v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  int MonitorHandle; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int CCDMonitorID; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  struct _LUID v49; // [rsp+38h] [rbp-31h] BYREF
  struct HDXGMONITOR__ *v50; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v52; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v53[8]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v54[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v55; // [rsp+68h] [rbp-1h]
  struct DXGADAPTER *v56; // [rsp+70h] [rbp+7h]
  char v57; // [rsp+78h] [rbp+Fh]
  _BYTE v58[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v59; // [rsp+88h] [rbp+1Fh]
  struct DXGADAPTER *v60; // [rsp+90h] [rbp+27h]
  char v61; // [rsp+98h] [rbp+2Fh]
  __int64 v62; // [rsp+C8h] [rbp+5Fh] BYREF

  v62 = a1;
  v6 = (unsigned int)a2;
  v8 = a1;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v62, a2, &v49, &v51);
  v12 = v9;
  if ( v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    LowPart = v49.LowPart;
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v49, &v52);
    v18 = v15;
    if ( v15 )
    {
      if ( *((_QWORD *)v15 + 285) )
      {
        v56 = v15;
        v57 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
        v60 = v15;
        v55 = -1LL;
        v61 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
        v59 = -1LL;
        DXGADAPTER::ReleaseReference(v15);
        v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
        v24 = v19;
        if ( v19 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
          v40[3] = v49.HighPart;
          v40[4] = v49.LowPart;
          v40[5] = v24;
          WdLogEvent5_WdWarning(v40);
        }
        else
        {
          MonitorHandle = MonitorGetMonitorHandle(v18, v51, 0, DxgkGetMonitorInternalInfo, (__int64)&v50);
          v24 = MonitorHandle;
          if ( MonitorHandle >= 0 )
          {
            if ( !v50 )
            {
              v43 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
              *(_QWORD *)(v43 + 24) = 6534LL;
              WdLogEvent5_WdAssertion(v43);
            }
            if ( a3 )
            {
              CCDMonitorID = MonitorGetCCDMonitorID(v50, 260LL, a3 + 20);
              v24 = CCDMonitorID;
              if ( CCDMonitorID >= 0 )
                goto LABEL_10;
              v47 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
              v47[3] = SHIDWORD(v62);
              v47[4] = (unsigned int)v62;
              v47[5] = v6;
              v47[6] = v24;
              v47[7] = 1LL;
              WdLogEvent5_WdError(v47);
            }
            if ( (int)v24 < 0 )
            {
LABEL_12:
              if ( (int)MonitorReleaseMonitorHandle(v18, v50, DxgkGetMonitorInternalInfo) < 0 )
              {
                v48 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
                *(_QWORD *)(v48 + 24) = 6569LL;
                WdLogEvent5_WdAssertion(v48);
              }
              LODWORD(v24) = 0;
              goto LABEL_15;
            }
LABEL_10:
            if ( a4 || a5 )
              MonitorGetMonitorOrientationsFromMonitor(v50, a4, a5);
            goto LABEL_12;
          }
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
          v42 = SHIDWORD(v62);
          v41[7] = 0LL;
          v41[3] = v42;
          v41[4] = (unsigned int)v62;
          v41[5] = v6;
          v41[6] = v24;
          WdLogEvent5_WdError(v41);
        }
LABEL_15:
        COREACCESS::~COREACCESS((COREACCESS *)v58);
        COREACCESS::~COREACCESS((COREACCESS *)v54);
        return (unsigned int)v24;
      }
      DXGADAPTER::ReleaseReference(v15);
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v36[6] = 1LL;
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v36[6] = 0LL;
    }
    v36[3] = v49.HighPart;
    v39 = LowPart;
    LODWORD(v24) = -1073741811;
    v36[5] = -1073741811LL;
    v36[4] = v39;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v24;
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v35[3] = SHIDWORD(v62);
  v35[4] = v8;
  v35[5] = v6;
  v35[6] = v12;
  WdLogEvent5_WdError(v35);
  return (unsigned int)v12;
}
