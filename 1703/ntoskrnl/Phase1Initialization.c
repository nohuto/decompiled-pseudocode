/*
 * XREFs of Phase1Initialization @ 0x1405A8000
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140155608 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140809ED0 (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_1407C55D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
