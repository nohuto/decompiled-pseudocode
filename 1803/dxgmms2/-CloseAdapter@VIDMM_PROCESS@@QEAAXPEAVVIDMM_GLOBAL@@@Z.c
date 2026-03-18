/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073EE0
 * Callers:
 *     VidMmCloseAdapter @ 0x1C0003E30 (VidMmCloseAdapter.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C0035410 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0075EA8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0077CE0 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0077E54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00652D0 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C0072DB0 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0073FEC (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(VIDMM_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  __int64 v6; // rsi
  _DWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD v9[12]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = this;
  }
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v6 + 496) )
    {
      memset(v9, 0, 0x58uLL);
      v9[5] = *((_QWORD *)a2 + 5112);
      v9[0] = -4294967181LL;
      v9[6] = v6;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v9);
    }
    VIDMM_PROCESS::DestroyAdapterInfo(this, v5);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    if ( *((_DWORD *)a2 + 926) )
    {
      v7 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v2++), v7[v5]);
      while ( v2 < *((_DWORD *)a2 + 926) );
    }
  }
}
