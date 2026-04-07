/*
 * XREFs of EtwppTemplate_qqd @ 0x18007D1B0
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800115DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 EtwppTemplate_qqd(__int64 *a1, __int64 a2, ...)
{
  __int64 v2; // rcx
  _QWORD v4[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+90h] [rbp+20h] BYREF
  va_list va; // [rsp+90h] [rbp+20h]
  __int64 v7; // [rsp+98h] [rbp+28h] BYREF
  va_list va1; // [rsp+98h] [rbp+28h]
  va_list va2; // [rsp+A0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  v2 = *a1;
  va_copy((va_list)v4, va);
  v4[1] = 8LL;
  va_copy((va_list)&v4[2], va1);
  v4[3] = 8LL;
  va_copy((va_list)&v4[4], va2);
  v4[5] = 4LL;
  return ((__int64 (__fastcall *)(__int64, void *, __int64, _QWORD *))EtwEventWrite)(v2, &EtwTraceInfo_9002, 3LL, v4);
}
