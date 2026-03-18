/*
 * XREFs of Phase1Initialization @ 0x1405B7F90
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140139C30 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405B7FF8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x14082FC9C (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_14087C660 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
