/*
 * XREFs of Template_pqccctx @ 0x1C0037D24
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0037690 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS Template_pqccctx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-79h] BYREF
  __int64 v5; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-69h] BYREF
  va_list v7; // [rsp+50h] [rbp-59h]
  __int64 v8; // [rsp+58h] [rbp-51h]
  va_list v9; // [rsp+60h] [rbp-49h]
  __int64 v10; // [rsp+68h] [rbp-41h]
  va_list v11; // [rsp+70h] [rbp-39h]
  __int64 v12; // [rsp+78h] [rbp-31h]
  va_list v13; // [rsp+80h] [rbp-29h]
  __int64 v14; // [rsp+88h] [rbp-21h]
  int *v15; // [rsp+90h] [rbp-19h]
  __int64 v16; // [rsp+98h] [rbp-11h]
  __int64 *v17; // [rsp+A0h] [rbp-9h]
  __int64 v18; // [rsp+A8h] [rbp-1h]
  __int64 v19; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+4Fh]
  __int64 v21; // [rsp+100h] [rbp+57h] BYREF
  va_list va1; // [rsp+100h] [rbp+57h]
  __int64 v23; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+5Fh]
  __int64 v25; // [rsp+110h] [rbp+67h] BYREF
  va_list va3; // [rsp+110h] [rbp+67h]
  va_list va4; // [rsp+118h] [rbp+6Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v5 = 0LL;
  va_copy(v7, va1);
  v4 = 0;
  va_copy(v9, va2);
  v8 = 4LL;
  va_copy(v11, va3);
  va_copy(v13, va4);
  v15 = &v4;
  v17 = &v5;
  v10 = 1LL;
  v12 = 1LL;
  v14 = 1LL;
  v16 = 4LL;
  v18 = 8LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPowerRequiredStart, 0LL, 7u, &UserData);
}
