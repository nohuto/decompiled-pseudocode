/*
 * XREFs of ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00480D0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064540 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0064738 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0064C30 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C0064C80 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0064E10 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C0064E80 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0064F10 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0065324 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006F4EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C009E4A0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C009E580 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C009E900 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C009E980 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C009EB88 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C009EE00 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C009EE50 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 */

void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = this;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v4 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v4 + 24) <= 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v10 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v10);
    }
    ++*(_DWORD *)(v4 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4 + 16, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v4 + 28) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventBlockThread);
      _InterlockedIncrement64((volatile signed __int64 *)v4);
      ExAcquirePushLockExclusiveEx(v4 + 16, 0LL);
    }
    if ( *(_QWORD *)(v4 + 8) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v11 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( *(_DWORD *)(v4 + 24) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v12 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v12);
    }
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v4 + 24) = 1;
  }
  *((_BYTE *)this + 8) = 1;
}
