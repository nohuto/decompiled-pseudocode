/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E25F0
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C01E3600 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int updated; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _DPI_INFORMATION *v26[2]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v28[32]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v29[40]; // [rsp+70h] [rbp+17h] BYREF
  Win81 *v30; // [rsp+B8h] [rbp+5Fh] BYREF

  v26[1] = 0LL;
  v6 = a3;
  v7 = (unsigned int)a2;
  LODWORD(v26[0]) = 2172;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2172);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v26, 2172);
  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, this, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
    v15 = v12;
    if ( v12 >= 0 )
    {
      v30 = 0LL;
      v21 = DxgkQueryDmmInterface(this, v13, &v30);
      v15 = v21;
      if ( v21 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v30, this, (void *const)(unsigned int)v7, v6, a4, a5, v26[0]);
        goto LABEL_12;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v20[3] = v15;
      v20[4] = this;
      v20[5] = v7;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = v15;
      CurrentProcess = PsGetCurrentProcess(v18, v17);
      v16[5] = this;
      v20 = v16;
      v16[4] = CurrentProcess;
    }
    WdLogEvent5_WdError(v20);
    updated = v15;
LABEL_12:
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    goto LABEL_13;
  }
  v10 = WdLogNewEntry5_WdError(v9);
  updated = -1073741811;
  *(_QWORD *)(v10 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v10);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, (int)v26[0]);
  return updated;
}
