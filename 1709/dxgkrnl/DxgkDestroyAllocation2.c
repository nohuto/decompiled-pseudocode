/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C008E3A0
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192BC0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008DD70 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25[4]; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h] BYREF
  GUID v27; // [rsp+68h] [rbp-60h] BYREF
  __int64 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  __int64 v31; // [rsp+90h] [rbp-38h]
  __int64 v32; // [rsp+98h] [rbp-30h]
  __int64 v33; // [rsp+A0h] [rbp-28h]

  v26 = 0LL;
  *(_QWORD *)&v27.Data1 = 0LL;
  *(_QWORD *)v27.Data4 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  EtwActivityIdControl(3u, &v27);
  v33 = MEMORY[0xFFFFF78000000014];
  LODWORD(v28) = 52;
  LOBYTE(v31) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v21 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v21;
      }
    }
  }
  if ( v11 )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_QWORD *)v25 = *(_QWORD *)(a1 + 16);
      if ( (v25[1] & 0x7FFFFFFC) != 0 )
      {
        v12 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
        *(_QWORD *)(v12 + 24) = 9603LL;
        WdLogEvent5_WdWarning(v12);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v13, &EventProfilerExit, v14, 2105);
        return 3221225485LL;
      }
      v16 = DxgkDestroyAllocationHelper(
              v11,
              *(_OWORD *)a1,
              HIDWORD(*(_QWORD *)a1),
              *(unsigned int **)(a1 + 8),
              v25[0],
              (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v25[1],
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v26,
              v4);
    }
    else
    {
      v16 = DxgkDestroyAllocationHelper(
              v11,
              *(_OWORD *)a1,
              HIDWORD(*(_QWORD *)a1),
              *(unsigned int **)(a1 + 8),
              *(_QWORD *)(a1 + 16),
              (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)HIDWORD(*(_QWORD *)(a1 + 16)),
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v26,
              0);
    }
    v19 = v16;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, 2105);
    return v19;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, 2105);
    return 3221225485LL;
  }
}
