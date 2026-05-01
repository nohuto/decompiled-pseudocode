/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18003F130
 * Callers:
 *     IsRmRpsHostEmptyNotificationPresent @ 0x18003F044 (IsRmRpsHostEmptyNotificationPresent.c)
 *     IsQueryUserTokenPresent @ 0x18003F138 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18003F20C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18003F678 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18003F74C (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x18003F79C (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
