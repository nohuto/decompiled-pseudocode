/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x140067DF8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     PpmIdleEvaluateConstraints @ 0x14015BFD0 (PpmIdleEvaluateConstraints.c)
 * Callees:
 *     MmGetNextNode @ 0x140067EB0 (MmGetNextNode.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KNODE *ParentNode; // r8
  unsigned int v2; // r9d
  unsigned int NextNode; // eax
  __int64 v4; // r10
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  ParentNode = CurrentPrcb->ParentNode;
  v2 = ParentNode->Affinity.Reserved[0];
  if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) != (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    return 0;
  while ( 1 )
  {
    NextNode = MmGetNextNode(v2, &v7);
    if ( NextNode == -1 )
      break;
    v6 = *(_QWORD *)(v4 + 8LL * NextNode + 4166656);
    if ( *(_QWORD *)(v6 + 64) != *(_QWORD *)(v6 + 136) )
      return 0;
  }
  return 1;
}
