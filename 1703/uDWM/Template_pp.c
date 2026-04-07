/*
 * XREFs of Template_pp @ 0x180093880
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 Template_pp(__int64 a1, __int64 a2, ...)
{
  va_list v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+2Ch] [rbp-2Ch]
  va_list v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  va_list va1; // [rsp+78h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(v3, va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSystemAnimation_ZOrderClone, 2LL, &v3);
}
