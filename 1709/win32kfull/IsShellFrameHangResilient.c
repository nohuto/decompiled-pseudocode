/*
 * XREFs of IsShellFrameHangResilient @ 0x1C0102128
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  if ( !gfShellFrameHangResilient )
    return 0;
  if ( (*(_DWORD *)(a1 + 1184) & 0x40000) == 0 )
    return 0;
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 408) + 384LL) <= 1u )
    return 0;
  v2 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( *(_QWORD *)(v2 + 40) || *(_QWORD *)(v2 + 48) || IsAdaptiveQueueDetachExempted(a1) )
    return 0;
  return v1;
}
