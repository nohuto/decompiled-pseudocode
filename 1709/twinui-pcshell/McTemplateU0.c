/*
 * XREFs of McTemplateU0 @ 0x180025CB8
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18003B3E0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0(__int64 a1, EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-28h] BYREF

  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, a2, 1u, &v3);
}
