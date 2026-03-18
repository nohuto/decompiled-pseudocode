/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x14003AF40
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 * Callees:
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KNODE *ParentNode; // r8
  unsigned int v2; // r9d
  unsigned int NextNode; // eax
  __int64 v5; // r10
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
    v6 = *(_QWORD *)(v5 + 8LL * NextNode + 4609024);
    if ( *(_QWORD *)(v6 + 64) != *(_QWORD *)(v6 + 136) )
      return 0;
  }
  return 1;
}
