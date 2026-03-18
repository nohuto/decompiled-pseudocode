/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C00E31F0
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017ECF0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h]
  unsigned int *v27[2]; // [rsp+50h] [rbp-88h]
  unsigned int v28[4]; // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  GUID v30; // [rsp+78h] [rbp-60h] BYREF
  __int64 v31; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+90h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp-40h]
  __int64 v34; // [rsp+A0h] [rbp-38h]
  __int64 v35; // [rsp+A8h] [rbp-30h]
  __int64 v36; // [rsp+B0h] [rbp-28h]

  v29 = 0LL;
  *(_QWORD *)&v30.Data1 = 0LL;
  *(_QWORD *)v30.Data4 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  EtwActivityIdControl(3u, &v30);
  v36 = MEMORY[0xFFFFF78000000014];
  LODWORD(v31) = 52;
  LOBYTE(v34) = -1;
  v26 = 0LL;
  v25 = 2105;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2105);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v21 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v21;
      }
    }
  }
  if ( v12 )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v27 = *(_OWORD *)a1;
      *(_QWORD *)v28 = *(_QWORD *)(a1 + 16);
      if ( (v28[1] & 0x7FFFFFFC) != 0 )
      {
        v13 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v9, v11);
        *(_QWORD *)(v13 + 24) = 9746LL;
        WdLogEvent5_WdWarning(v13);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v14, &EventProfilerExit, v15, v25);
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v27 = *(_OWORD *)a1;
      *(_QWORD *)v28 = *(_QWORD *)(a1 + 16);
    }
    v17 = DxgkDestroyAllocationHelper(
            v12,
            (unsigned int)v27[0],
            HIDWORD(v27[0]),
            v27[1],
            v28[0],
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v28[1],
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v29,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v25);
    return v17;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v25);
    return 3221225485LL;
  }
}
