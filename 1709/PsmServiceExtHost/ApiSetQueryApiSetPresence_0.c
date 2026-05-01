/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800266A0
 * Callers:
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180026640 (IsRmRpsHostEmptyNotificationPresent.c)
 *     IsQueryUserTokenPresent @ 0x1800266A8 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18002677C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18002695C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
