/*
 * XREFs of PsInitSystem @ 0x140809E88
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
