/*
 * XREFs of UninitializeEditionAutoLogger @ 0x1C01255A0
 * Callers:
 *     <none>
 * Callees:
 *     WppCleanupKm @ 0x1C036B510 (WppCleanupKm.c)
 */

__int64 __fastcall UninitializeEditionAutoLogger(__int64 a1)
{
  if ( gFullLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gFullLog = 0LL;
  }
  return WppCleanupKm(a1);
}
