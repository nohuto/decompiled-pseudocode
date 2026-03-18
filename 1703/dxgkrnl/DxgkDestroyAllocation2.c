/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C00DB120
 * Callers:
 *     ?VmBusDestroyAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CED0 (-VmBusDestroyAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB320 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26[4]; // [rsp+50h] [rbp-68h]
  _QWORD v27[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v27, 0, sizeof(v27));
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  v27[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v27[3]) = 52;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v13 = *ThreadProperty;
    }
  }
  if ( v13 )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_QWORD *)v26 = *(_QWORD *)(a1 + 16);
      if ( (v26[1] & 0x7FFFFFFC) != 0 )
      {
        v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v9, v11, v12);
        *(_QWORD *)(v14 + 24) = 8734LL;
        WdLogEvent5_WdWarning(v14);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v15, &EventProfilerExit, v16, 2105);
        return 3221225485LL;
      }
      v18 = DxgkDestroyAllocationHelper(
              v13,
              *(_OWORD *)a1,
              HIDWORD(*(_QWORD *)a1),
              *(const unsigned int **)(a1 + 8),
              v26[0],
              (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v26[1],
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27,
              v4);
    }
    else
    {
      v18 = DxgkDestroyAllocationHelper(
              v13,
              *(_OWORD *)a1,
              HIDWORD(*(_QWORD *)a1),
              *(const unsigned int **)(a1 + 8),
              *(_QWORD *)(a1 + 16),
              (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)HIDWORD(*(_QWORD *)(a1 + 16)),
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27,
              0);
    }
    v21 = v18;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2105);
    return v21;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2105);
    return 3221225485LL;
  }
}
