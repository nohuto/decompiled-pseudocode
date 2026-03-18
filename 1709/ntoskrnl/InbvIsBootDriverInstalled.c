/*
 * XREFs of InbvIsBootDriverInstalled @ 0x140156FF0
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x140156F80 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
