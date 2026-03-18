/*
 * XREFs of SmStoreCompressionStart @ 0x140738EE0
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14000A570 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14022D948 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1404445CC (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_14041B178, &v4, 0, 0);
  v2 = v1;
  if ( v1 || dword_14041B1A0 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return (int)v1;
}
