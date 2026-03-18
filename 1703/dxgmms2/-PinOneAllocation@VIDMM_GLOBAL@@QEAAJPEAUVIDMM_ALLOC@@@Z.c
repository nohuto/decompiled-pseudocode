/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C006E028
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C006E0FC (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C005CFE0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006E25C (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006E338 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 result; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  _QWORD v11[11]; // [rsp+30h] [rbp-58h] BYREF
  bool v12; // [rsp+98h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, &v12);
  if ( (int)result >= 0 && !v12 )
  {
    memset(v11, 0, 0x50uLL);
    v5 = *a2;
    LODWORD(v11[0]) = 203;
    v11[2] = a2;
    v6 = *(_QWORD *)v5;
    LODWORD(v11[4]) = (**(_DWORD **)(*(_QWORD *)v5 + 520LL) & 0x20000) != 0 ? 5 : 0;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2[1] + 9) + 160LL * (*(_DWORD *)(v6 + 76) & 0x3F)),
           (struct _VIDMM_DEFERRED_COMMAND *)v11,
           1,
           0LL);
    if ( v9 < 0 )
    {
      v10 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v10 + 24) = a2;
      WdLogEvent5_WdWarning(v10);
      VIDMM_DEVICE::UnreferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, 1);
    }
    return (unsigned int)v9;
  }
  return result;
}
