/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0066390
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006871C (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00012F0 (VidSchSubmitDeviceCommand.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00761CC (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  _QWORD v32[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v33[16]; // [rsp+58h] [rbp-41h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320), v9, v10);
  v13 = a2[1];
  a2[24] = (__int64 *)a5;
  v14 = *v13;
  *((_BYTE *)v13 + 48) = 1;
  v15 = v14 + 41816;
  if ( v15 && *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v29 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v29);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v15 + 16);
      if ( v28 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, (__int64)&EventBlockThread, v17, v28);
    }
    ExAcquirePushLockExclusiveEx(v15, 0LL);
  }
  *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
  if ( (*((_DWORD *)v13 + 13) & 7) == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v13, 3LL);
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v13 + 152LL), 0, 0);
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0p(v18, &EventTerminateAllocation, v19, a2);
  v20 = **a2;
  v21 = *(_QWORD *)(v20 + 16);
  if ( (**(_DWORD **)(v20 + 504) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 2070);
    *((_QWORD *)this + 1036) += v21;
  }
  else
  {
    ++*((_DWORD *)this + 2074);
    *((_QWORD *)this + 1038) += v21;
  }
  v32[1] = a2;
  v32[0] = 1LL;
  memset(v33, 0, sizeof(v33));
  LODWORD(v33[5]) = 0;
  v33[3] = 0LL;
  v33[6] = v32;
  LODWORD(v33[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 504) & 0x4000) != 0;
  v23 = a2[1][4];
  v24 = VidSchSubmitDeviceCommand(v23, (__int64)v33, v22);
  v27 = v24;
  if ( v24 < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v26, v25);
    *(_QWORD *)(v30 + 24) = v27;
    WdLogEvent5_WdWarning(v30);
    v32[2] = 5LL;
    v32[3] = 0LL;
    VidSchFlushDevice(v23);
    LODWORD(v33[0]) = 0;
    VidSchSubmitDeviceCommand(v23, (__int64)v33, v31);
  }
  if ( !LOBYTE(v32[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
