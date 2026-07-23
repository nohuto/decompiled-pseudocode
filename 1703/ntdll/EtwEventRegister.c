/*
 * XREFs of EtwEventRegister @ 0x18001ADD0
 * Callers:
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     sub_1800831CC @ 0x1800831CC (sub_1800831CC.c)
 *     sub_180086558 @ 0x180086558 (sub_180086558.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D3E98 @ 0x1800D3E98 (sub_1800D3E98.c)
 *     sub_1800D3F18 @ 0x1800D3F18 (sub_1800D3F18.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

NTSTATUS __cdecl EtwEventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  LONG v4; // eax
  NTSTATUS v5; // ebx

  if ( !EnableCallback && CallbackContext )
    return 87;
  v4 = EtwNotificationRegister(ProviderId, 3u, (PETW_NOTIFICATION_CALLBACK)EnableCallback, CallbackContext, RegHandle);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
