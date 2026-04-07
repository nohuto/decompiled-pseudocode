/*
 * XREFs of EtwppTemplate_qq @ 0x1800754E8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18000F194 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001189C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 EtwppTemplate_qq(__int64 *a1, __int64 a2, ...)
{
  __int64 v2; // rcx
  va_list v4; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+28h] [rbp-40h]
  int v6; // [rsp+2Ch] [rbp-3Ch]
  va_list v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  v2 = *a1;
  va_copy(v4, va);
  v5 = 8;
  v6 = 0;
  v8 = 8;
  va_copy(v7, va1);
  v9 = 0;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, va_list *))EtwEventWrite)(v2, a2, 2LL, &v4);
}
