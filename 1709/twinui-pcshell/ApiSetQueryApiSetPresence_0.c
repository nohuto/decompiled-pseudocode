/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1801E57A0
 * Callers:
 *     IsOleInitializePresent @ 0x1801E3F70 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x1801E40C8 (IsNAVShutdownPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x1801E4D50 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x1801E4EB4 (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x1801E5990 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1801E5A64 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
