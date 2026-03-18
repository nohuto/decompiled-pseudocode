/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4
 * Callers:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x140113A08 (KiSetSystemAffinityThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140120EB0 (KeUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  bool v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = 0;
  if ( !a1 )
  {
    result = *(unsigned int *)(a2 + 588);
    a1 = KiProcessorBlock[result];
  }
  v4 = *(_QWORD *)(a1 + 25152);
  if ( v4 )
  {
    result = v4 & *(_QWORD *)(a2 + 576);
    v2 = result == v4;
  }
  if ( v2 != ((*(_DWORD *)(a2 + 120) & 0x1000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x1000u);
  return result;
}
