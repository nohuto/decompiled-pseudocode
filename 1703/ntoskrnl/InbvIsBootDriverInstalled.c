/*
 * XREFs of InbvIsBootDriverInstalled @ 0x140158F50
 * Callers:
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x140158EE0 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_14036E468 && (v0 = *(__int64 (**)(void))(qword_14036E468 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
