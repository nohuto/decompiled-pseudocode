/*
 * XREFs of McTemplateU0pp @ 0x18008FD60
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180005ABC (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006CE6C (McGenEventWriteUM.c)
 */

__int64 McTemplateU0pp(__int64 a1, __int64 a2, ...)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  va_list v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy((va_list)&v3[2], va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Udwm_Provider_Context,
           &UdwmSystemAnimation_ZOrderClone,
           3LL,
           (__int64)v3);
}
