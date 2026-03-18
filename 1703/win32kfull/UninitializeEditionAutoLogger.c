/*
 * XREFs of UninitializeEditionAutoLogger @ 0x1C011B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
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
