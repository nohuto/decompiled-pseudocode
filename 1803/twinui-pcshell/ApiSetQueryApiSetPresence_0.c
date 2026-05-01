/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18009BDA0
 * Callers:
 *     IsOleInitializePresent @ 0x18009A308 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x18009A460 (IsNAVShutdownPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x18009B464 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x18009B604 (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x18009C0B4 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18009C248 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
