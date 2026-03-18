/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C01A2C00
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C016F760 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C01A72A0 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00D1544 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C014760C (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C01A3718 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID Elements; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  PVOID v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  size_t v30; // r8
  const void *v31; // rdx
  unsigned int v32; // ebx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-D0h]
  struct DXGPROCESS *v36; // [rsp+60h] [rbp-C8h]
  void *v37[2]; // [rsp+68h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-B0h]
  void *v39; // [rsp+88h] [rbp-A0h]
  void **v40; // [rsp+90h] [rbp-98h]
  PVOID v41[3]; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp-78h]
  PVOID v43[9]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+108h] [rbp-20h]

  v4 = (void **)a1;
  v35 = 0LL;
  v34 = 2161;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2161);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2161);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v36 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = PsGetCurrentProcess(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v34);
    return 3221225485LL;
  }
  v41[0] = 0LL;
  v42 = 0;
  v43[0] = 0LL;
  v44 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v37 = *(_OWORD *)v4;
    *(_OWORD *)Src = *((_OWORD *)v4 + 1);
    v39 = v4[4];
    if ( !LODWORD(Src[0]) )
    {
      v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v15 + 24) = 1358LL;
      WdLogEvent5_WdError(v15);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v43);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v34);
      return 3221225485LL;
    }
    Elements = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v41, (unsigned int)Src[0]);
    if ( !Elements )
    {
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v43);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v34);
      return 3221225495LL;
    }
    v21 = 4LL * v42;
    v22 = Src[1];
    if ( (char *)Src[1] + v21 < Src[1] || (char *)Src[1] + v21 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Elements, v22, v21);
    Src[1] = Elements;
    if ( !HIDWORD(v37[0]) )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = 1375LL;
      WdLogEvent5_WdError(v24);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v43);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v34);
      return 3221225485LL;
    }
    v27 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(v43, HIDWORD(v37[0]));
    if ( !v27 )
    {
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v43);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v34);
      return 3221225495LL;
    }
    v30 = 4LL * v44;
    v31 = v37[1];
    if ( (char *)v37[1] + v30 < v37[1] || (char *)v37[1] + v30 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v31, v30);
    v37[1] = v27;
    v4 = v37;
    v40 = v37;
  }
  v32 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v43);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v33, v34);
  return v32;
}
