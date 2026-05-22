/*
 * XREFs of McTemplateU0p @ 0x18008611C
 * Callers:
 *     ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x180086E00 (-PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180001B54 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

ULONG McTemplateU0p()
{
  const wchar_t *v1; // [rsp+20h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+28h] [rbp-30h] BYREF
  const wchar_t **v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v1 = L"Invalid contactcount injected!";
  v3 = &v1;
  v5 = 0;
  v4 = 8;
  return McGenEventWriteUM(MinInput_Context, &MinInput_Error, 2u, &v2);
}
