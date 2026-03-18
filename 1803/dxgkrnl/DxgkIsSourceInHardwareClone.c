/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C00D6750
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00D6A90 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  int v3; // esi
  __int64 v4; // r15
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rax
  __int64 LowPart; // rcx
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v24 = 0LL;
  v23 = 2175;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2175);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2175);
  Global = DXGGLOBAL::GetGlobal(v7);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v28);
  v11 = v9;
  if ( !v9 )
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = a1->HighPart;
    *(_QWORD *)(v22 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v22);
    LODWORD(v14) = -1073741811;
    goto LABEL_7;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v9, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
  v14 = v12;
  if ( v12 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v20[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v20[5] = v14;
LABEL_13:
    v20[4] = LowPart;
    WdLogEvent5_WdError(v20);
    goto LABEL_6;
  }
  v15 = DmmEnumClientVidPnPathTargetsFromSource(v11, v4, 1uLL, (unsigned int *const)&v28);
  v14 = v15;
  if ( v15 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v20[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v20[5] = v4;
    v20[6] = v14;
    goto LABEL_13;
  }
  LOBYTE(v3) = (_DWORD)v28 != -1;
  *a3 = v3;
LABEL_6:
  DXGADAPTER::ReleaseReferenceNoTracking(v11);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  COREACCESS::~COREACCESS((COREACCESS *)v26);
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v23);
  return (unsigned int)v14;
}
