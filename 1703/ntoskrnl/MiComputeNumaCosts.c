/*
 * XREFs of MiComputeNumaCosts @ 0x1408267F0
 * Callers:
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeQueryNumaGraph @ 0x1407F6610 (KeQueryNumaGraph.c)
 */

void MiComputeNumaCosts()
{
  PVOID NumaGraph; // rax
  void *v1; // rbx

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    NumaGraph = KeQueryNumaGraph();
    v1 = NumaGraph;
    if ( NumaGraph )
    {
      memmove(qword_14036C1C0, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
