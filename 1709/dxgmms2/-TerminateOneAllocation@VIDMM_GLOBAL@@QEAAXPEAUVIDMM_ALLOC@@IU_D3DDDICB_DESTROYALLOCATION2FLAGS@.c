/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0062030
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006431C (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00111A0 (VidSchSubmitDeviceCommand.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0051688 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
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
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // r9d
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD v34[4]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v35[16]; // [rsp+50h] [rbp-98h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  *((_DWORD *)a2 + 8) |= 1u;
  v12 = *(_QWORD *)(v8 + 320);
  if ( *(struct _KTHREAD **)(v12 + 8) != KeGetCurrentThread() )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[5] = v12;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( *(int *)(v12 + 24) <= 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v31 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (*(_DWORD *)(v12 + 24))-- == 1 )
  {
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  v16 = (__int64)a2[1];
  a2[24] = (__int64 *)a5;
  v17 = *(_QWORD *)v16;
  *(_BYTE *)(v16 + 48) = 1;
  v18 = v17 + 41240;
  if ( v18 && *(struct _KTHREAD **)(v18 + 8) == KeGetCurrentThread() )
  {
    v32 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v32 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v32);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *(_DWORD *)(v18 + 16);
      if ( v29 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v19, (__int64)&EventBlockThread, v20, v29);
    }
    ExAcquirePushLockExclusiveEx(v18, 0LL);
  }
  *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
  if ( (*(_DWORD *)(v16 + 52) & 7) == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v16, 3u);
    KeSetEvent(*(PRKEVENT *)(**(_QWORD **)v16 + 152LL), 0, 0);
  }
  *(_QWORD *)(v18 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0p(v21, &EventTerminateAllocation, v22, a2);
  v23 = **a2;
  v24 = *(_QWORD *)(v23 + 16);
  if ( (**(_DWORD **)(v23 + 504) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1926);
    *((_QWORD *)this + 964) += v24;
  }
  else
  {
    ++*((_DWORD *)this + 1930);
    *((_QWORD *)this + 966) += v24;
  }
  v34[1] = a2;
  v34[0] = 1LL;
  memset(v35, 0, sizeof(v35));
  LODWORD(v35[5]) = 0;
  v35[6] = v34;
  v35[3] = 0LL;
  LODWORD(v35[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 504) & 0x4000) != 0;
  v25 = a2[1][4];
  v26 = VidSchSubmitDeviceCommand(v25, (__int64)v35);
  v28 = v26;
  if ( v26 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v27);
    *(_QWORD *)(v33 + 24) = v28;
    WdLogEvent5_WdWarning(v33);
    v34[2] = 5LL;
    v34[3] = 0LL;
    VidSchFlushDevice(v25);
    LODWORD(v35[0]) = 0;
    VidSchSubmitDeviceCommand(v25, (__int64)v35);
  }
  if ( !LOBYTE(v34[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
