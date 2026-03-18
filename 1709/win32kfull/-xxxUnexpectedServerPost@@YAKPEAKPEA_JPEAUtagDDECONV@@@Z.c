/*
 * XREFs of ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0990 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0F80 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F10C0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F13B0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1480 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1710 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 * Callees:
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F00D8 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01F07B4 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0A34 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0202140 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxUnexpectedServerPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v4; // edx

  v4 = *a1;
  if ( *a1 == 993 )
    return SpontaneousTerminate(a1, a3);
  if ( v4 <= 0x3E1 )
    return 0LL;
  if ( v4 > 0x3E3 )
  {
    if ( v4 == 996 )
    {
      xxxClientFreeDDEHandle(*a2, 1LL);
      return 3LL;
    }
    if ( v4 == 997 )
      return xxxAdviseData(a1, a2, a3);
    if ( v4 > 0x3E8 )
      return 0LL;
  }
  return AbnormalDDEPost(a3, v4);
}
