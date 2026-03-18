/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D3B0
 * Callers:
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0069710 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0069C50 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C004D180 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // r9d

  if ( !(_BYTE)a2 || *((_BYTE *)this + 48) )
  {
    v3 = *(_QWORD *)this;
    *((_BYTE *)this + 48) = 1;
    v4 = v3 + 41536;
    if ( v4 && *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v7 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v7);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( v8 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v5, &EventBlockThread, v6, v8);
      }
      ExAcquirePushLockExclusiveEx(v4, 0LL);
    }
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    if ( (*((_DWORD *)this + 13) & 7) == 4 )
    {
      VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, 3u);
      KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 152LL), 0, 0);
    }
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
