/*
 * XREFs of InbvIsBootDriverInstalled @ 0x140183210
 * Callers:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1401831A0 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
