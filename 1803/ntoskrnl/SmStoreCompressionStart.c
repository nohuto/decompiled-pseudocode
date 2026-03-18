/*
 * XREFs of SmStoreCompressionStart @ 0x14052D268
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14007F3AC (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1400837DC (MmStoreFlushOutstandingEvictions.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     SmSwapStore @ 0x14052D160 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140466188, (__int64)&v4, 0, 0LL);
  v2 = v1;
  if ( v1 || dword_1404661B0 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (v1 & 0x80000000) == 0LL )
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return v1;
}
