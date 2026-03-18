/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810
 * Callers:
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400A6CA4 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400D269C (KeUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  bool result; // al

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v2 = *(_QWORD *)(a1 + 24896);
  result = 0;
  if ( v2 )
    result = (v2 & *(_QWORD *)(a2 + 576)) == v2;
  if ( result != ((*(_DWORD *)(a2 + 120) & 0x2000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
