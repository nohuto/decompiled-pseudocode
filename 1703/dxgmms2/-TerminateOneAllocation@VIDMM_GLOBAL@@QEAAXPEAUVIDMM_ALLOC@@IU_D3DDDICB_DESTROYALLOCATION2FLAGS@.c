/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005F230
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0061134 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00108F0 (VidSchSubmitDeviceCommand.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C004D180 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD v32[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v34[16]; // [rsp+50h] [rbp-98h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320), v9, v10);
  v13 = (__int64)a2[1];
  a2[24] = (__int64 *)a5;
  v14 = *(_QWORD *)v13;
  *(_BYTE *)(v13 + 48) = 1;
  v15 = v14 + 41536;
  if ( v15 && *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v27 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v15 + 16);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v16, &EventBlockThread, v17, v28);
    }
    ExAcquirePushLockExclusiveEx(v15, 0LL);
  }
  *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
  if ( (*(_DWORD *)(v13 + 52) & 7) == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v13, 3u);
    KeSetEvent(*(PRKEVENT *)(**(_QWORD **)v13 + 152LL), 0, 0);
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    Template_p(v18, &EventTerminateAllocation, v19, a2);
  v20 = **a2;
  v21 = *(_QWORD *)(v20 + 16);
  if ( (**(_DWORD **)(v20 + 520) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1926);
    *((_QWORD *)this + 964) += v21;
  }
  else
  {
    ++*((_DWORD *)this + 1930);
    *((_QWORD *)this + 966) += v21;
  }
  v32[1] = a2;
  v32[0] = 1LL;
  memset(v34, 0, sizeof(v34));
  LODWORD(v34[5]) = 0;
  v34[6] = v32;
  v34[3] = 0LL;
  LODWORD(v34[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 520) & 0x4000) != 0;
  v22 = a2[1][4];
  v23 = VidSchSubmitDeviceCommand(v22, (__int64)v34);
  v26 = v23;
  if ( v23 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v25, v24);
    *(_QWORD *)(v29 + 24) = v26;
    WdLogEvent5_WdWarning(v29);
    v33[0] = 5LL;
    v33[1] = 0LL;
    VidSchFlushDevice(v22, (int *)v33, v30, v31);
    LODWORD(v34[0]) = 0;
    VidSchSubmitDeviceCommand(v22, (__int64)v34);
  }
  if ( !LOBYTE(v32[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
