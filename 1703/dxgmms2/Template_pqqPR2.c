/*
 * XREFs of Template_pqqPR2 @ 0x1C0024578
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqPR2(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  __int64 v9; // [rsp+60h] [rbp+Fh]
  int v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+6Ch] [rbp+1Bh]
  __int64 v12; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v14; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  __int64 v18; // [rsp+D0h] [rbp+7Fh]
  va_list va3; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v18 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v11 = 0;
  va_copy(v5, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v7, va2);
  v9 = v18;
  v10 = 8 * v16;
  v6 = 4LL;
  v8 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventReferenceWrittenPrimaries, 0LL, 4u, &UserData);
}
