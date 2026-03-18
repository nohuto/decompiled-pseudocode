/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C01A72C0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00D1544 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C01A4960 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID Elements; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // r8
  const void *v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // r8
  int v25; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+48h] [rbp-60h]
  void *Src[2]; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v28; // [rsp+60h] [rbp-48h]
  struct _KTHREAD **v29; // [rsp+68h] [rbp-40h]
  PVOID v30[3]; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+88h] [rbp-20h]

  v3 = a1;
  v26 = 0LL;
  v25 = 2162;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2162);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2162);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v29 = Current;
  if ( Current )
  {
    v30[0] = 0LL;
    v31 = 0;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)v3;
    v28 = *(unsigned __int64 **)(v3 + 16);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 4));
    if ( v14 )
    {
      Elements = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v30, v14);
      if ( Elements )
      {
        v21 = 4LL * v31;
        v22 = Src[1];
        if ( (char *)Src[1] + v21 < Src[1] || (char *)Src[1] + v21 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Elements, v22, v21);
        Src[1] = Elements;
        v23 = SubmitWaitForSyncObjectsFromGpu(
                v14,
                (const unsigned int *)Elements,
                v28,
                (unsigned int)Src[0],
                Current,
                1,
                0);
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(qword_1C0079010, &EventProfilerExit, v24, v25);
        return v23;
      }
      else
      {
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v19, &EventProfilerExit, v20, v25);
        return 3221225495LL;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v15 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v25);
      return 3221225485LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v25);
    return 3221225485LL;
  }
}
