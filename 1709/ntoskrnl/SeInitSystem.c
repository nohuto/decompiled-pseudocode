/*
 * XREFs of SeInitSystem @ 0x14084AA38
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x14084AA68 (SepInitializationPhase0.c)
 */

char SeInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1();
}
