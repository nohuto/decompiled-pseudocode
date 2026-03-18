/*
 * XREFs of MmInitSystem @ 0x14089C070
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiInitializeSystemVa @ 0x1408BB130 (MiInitializeSystemVa.c)
 *     KeQueryNumaGraph @ 0x1408DFF44 (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  void *NumaGraph; // rax
  void *v5; // rsi

  v2 = a2;
  if ( (_DWORD)a1 == -1 )
  {
    MiInitializeSystemVa(a2);
    return 1;
  }
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (void *)KeQueryNumaGraph();
        v5 = NumaGraph;
        if ( NumaGraph )
        {
          memmove(qword_1403CB6A0, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
          ExFreePoolWithTag(v5, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, v2) )
      {
        byte_1403CC514 = 1;
        return 1;
      }
    }
    else if ( (_DWORD)a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return MiInitSystem(a1, a2);
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    a2 = v2;
    a1 = 0LL;
    return MiInitSystem(a1, a2);
  }
  return 0;
}
