/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1801971C0
 * Callers:
 *     IsOleInitializePresent @ 0x180195DE0 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x180195EC0 (IsNAVShutdownPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x18019691C (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x1801969FC (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x18019727C (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18019735C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
