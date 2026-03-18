/*
 * XREFs of Template_xxxqq @ 0x1401E4198
 * Callers:
 *     FsRtlHeatLogIo @ 0x140686880 (FsRtlHeatLogIo.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS Template_xxxqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *ActivityId, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  va_list v5; // [rsp+50h] [rbp-29h]
  __int64 v6; // [rsp+58h] [rbp-21h]
  va_list v7; // [rsp+60h] [rbp-19h]
  __int64 v8; // [rsp+68h] [rbp-11h]
  va_list v9; // [rsp+70h] [rbp-9h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  va_list v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  __int64 v13; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+5Fh]
  __int64 v15; // [rsp+E0h] [rbp+67h] BYREF
  va_list va1; // [rsp+E0h] [rbp+67h]
  __int64 v17; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+6Fh]
  __int64 v19; // [rsp+F0h] [rbp+77h] BYREF
  va_list va3; // [rsp+F0h] [rbp+77h]
  va_list va4; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va4, ActivityId);
  va_start(va3, ActivityId);
  va_start(va2, ActivityId);
  va_start(va1, ActivityId);
  va_start(va, ActivityId);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  v8 = 8LL;
  v10 = 4LL;
  v12 = 4LL;
  return EtwWriteEx(Microsoft_Windows_Storage_Tiering_IoHeatHandle, a2, 0LL, 0, ActivityId, 0LL, 5u, &UserData);
}
