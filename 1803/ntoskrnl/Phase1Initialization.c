/*
 * XREFs of Phase1Initialization @ 0x140627590
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140171A4C (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1406275F8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1408A6040 (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_1408F2660 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
