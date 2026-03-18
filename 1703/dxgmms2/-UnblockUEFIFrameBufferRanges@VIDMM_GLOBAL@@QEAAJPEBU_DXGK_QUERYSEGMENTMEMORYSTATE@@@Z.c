/*
 * XREFs of ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C00957CC
 * Callers:
 *     VidMmUnblockUEFIFrameBufferRanges @ 0x1C001EE10 (VidMmUnblockUEFIFrameBufferRanges.c)
 * Callees:
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00A3FD8 (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(
        VIDMM_GLOBAL *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  struct _KTHREAD *CurrentThread; // r8
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, CurrentThread);
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[3] = 275LL;
    v5[4] = 23LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( a2->NumInvalidMemoryRanges == 1 )
  {
    v7 = 472LL * a2->PhysicalAdapterIndex;
    v8 = *(_DWORD *)(v7 + *((_QWORD *)this + 5021) + 20) + (unsigned int)a2->DriverSegmentId;
    if ( (unsigned int)v8 < *((_DWORD *)this + 926) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v8);
      if ( v7 )
        return VIDMM_SEGMENT::UnblockMemoryRanges(v7, v8, 1LL, a2->pMemoryRanges);
    }
    v6 = WdLogNewEntry5_WdAssertion(v7, v8);
    *(_QWORD *)(v6 + 24) = a2->PhysicalAdapterIndex;
    *(_QWORD *)(v6 + 32) = a2->DriverSegmentId;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = a2->NumInvalidMemoryRanges;
  }
  WdLogEvent5_WdAssertion(v6);
  return 3221225485LL;
}
