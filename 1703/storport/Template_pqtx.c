/*
 * XREFs of Template_pqtx @ 0x1C0037F1C
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001DF00 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS Template_pqtx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-31h] BYREF
  __int64 v5; // [rsp+38h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  va_list v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  int *v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  __int64 *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  va_list va1; // [rsp+D0h] [rbp+6Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = 0LL;
  va_copy(v7, va1);
  v9 = &v4;
  v11 = &v5;
  v4 = 0;
  v8 = 4LL;
  v10 = 4LL;
  v12 = 8LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterPowerRequiredStart, 0LL, 4u, &UserData);
}
