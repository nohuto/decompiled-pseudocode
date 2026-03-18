/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DAF10
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetDeviceObject @ 0x1C00DB05C (MonitorGetDeviceObject.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  DXGADAPTER *v13; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _LUID v32; // [rsp+28h] [rbp-29h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-21h] BYREF
  int v34; // [rsp+38h] [rbp-19h] BYREF
  __int64 v35; // [rsp+40h] [rbp-11h]
  _BYTE v36[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v37[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v38[40]; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+67h] BYREF

  v35 = 0LL;
  v6 = a2;
  v34 = 2166;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2166);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2166);
  if ( !a1 || !a3 || !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(v13) = -1073741811;
    v29[3] = -1073741811LL;
LABEL_20:
    WdLogEvent5_WdWarning(v29);
    goto LABEL_11;
  }
  v32 = *a1;
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v32, v6, &v32, &v39);
  v13 = (DXGADAPTER *)v11;
  if ( v11 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v12);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v32, &v33);
    v13 = v15;
    if ( v15 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v15, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v13);
      if ( *((_QWORD *)v13 + 307) )
      {
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
        v24 = v20;
        if ( v20 < 0 )
        {
          v31 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v31 + 24) = v13;
          *(_QWORD *)(v31 + 32) = v24;
          WdLogEvent5_WdWarning(v31);
          LODWORD(v13) = v24;
        }
        else
        {
          LODWORD(v13) = MonitorGetDeviceObject(v13, v39, a3, a4);
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v30 + 24) = v13;
        LODWORD(v13) = -1073741811;
        *(_QWORD *)(v30 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      goto LABEL_11;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v13) = -1073741811;
    v29[3] = v32.LowPart;
    v29[4] = v32.HighPart;
    v29[5] = -1073741811LL;
    goto LABEL_20;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v28[3] = a1->LowPart;
  v28[4] = a1->HighPart;
  v28[5] = v6;
  v28[6] = v13;
  WdLogEvent5_WdError(v28);
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v34);
  return (unsigned int)v13;
}
