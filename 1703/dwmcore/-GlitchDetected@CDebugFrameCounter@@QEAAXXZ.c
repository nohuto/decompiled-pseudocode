/*
 * XREFs of ?GlitchDetected@CDebugFrameCounter@@QEAAXXZ @ 0x1800C7AAC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?TryParallelMode@CIndependentRefreshRateScheduler@@AEAA_N_N@Z @ 0x18013E630 (-TryParallelMode@CIndependentRefreshRateScheduler@@AEAA_N_N@Z.c)
 * Callees:
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

void __fastcall CDebugFrameCounter::GlitchDetected(CDebugFrameCounter *this)
{
  unsigned int v2; // r8d
  int v3; // ecx

  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_DWORD *)this + 1040) == -1 )
      *((_QWORD *)this + 520) = 0LL;
    *((_QWORD *)this + *((unsigned int *)this + 1041) + 521) = CDebugFrameCounter::CurrentTime(this);
    v2 = (*((_DWORD *)this + 1041) + 1) % 0x3Cu;
    v3 = *((_DWORD *)this + 1040);
    *((_DWORD *)this + 1041) = v2;
    if ( v3 == v2 )
      *((_DWORD *)this + 1040) = (v3 + 1) % 0x3Cu;
  }
}
