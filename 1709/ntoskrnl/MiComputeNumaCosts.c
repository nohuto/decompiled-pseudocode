/*
 * XREFs of MiComputeNumaCosts @ 0x140856F40
 * Callers:
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     KeQueryNumaGraph @ 0x140856F94 (KeQueryNumaGraph.c)
 */

void MiComputeNumaCosts()
{
  void *NumaGraph; // rax
  void *v1; // rbx

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    NumaGraph = (void *)KeQueryNumaGraph();
    v1 = NumaGraph;
    if ( NumaGraph )
    {
      memmove(qword_140388508, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
