/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50
 * Callers:
 *     KiSetSystemAffinityThread @ 0x14003AA28 (KiSetSystemAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C268C (KeUpdateThreadSchedulingProperties.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // r8

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  result = *(_QWORD *)(a1 + 24896);
  v3 = 0;
  if ( result )
    v3 = (result & *(_QWORD *)(a2 + 576)) == result;
  if ( v3 != ((*(_DWORD *)(a2 + 120) & 0x2000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
