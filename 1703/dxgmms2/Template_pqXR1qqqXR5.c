/*
 * XREFs of Template_pqXR1qqqXR5 @ 0x1C00244A0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_pqXR1qqqXR5(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  __int64 v7; // [rsp+50h] [rbp-49h]
  int v8; // [rsp+58h] [rbp-41h]
  int v9; // [rsp+5Ch] [rbp-3Dh]
  va_list v10; // [rsp+60h] [rbp-39h]
  __int64 v11; // [rsp+68h] [rbp-31h]
  va_list v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  va_list v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  __int64 v16; // [rsp+90h] [rbp-9h]
  int v17; // [rsp+98h] [rbp-1h]
  int v18; // [rsp+9Ch] [rbp+3h]
  __int64 v19; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v21; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v23; // [rsp+F8h] [rbp+5Fh]
  __int64 v24; // [rsp+100h] [rbp+67h] BYREF
  va_list va2; // [rsp+100h] [rbp+67h]
  __int64 v26; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+108h] [rbp+6Fh]
  __int64 v28; // [rsp+110h] [rbp+77h] BYREF
  va_list va4; // [rsp+110h] [rbp+77h]
  __int64 v30; // [rsp+118h] [rbp+7Fh]
  va_list va5; // [rsp+120h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  v30 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v9 = 0;
  va_copy(v5, va1);
  v7 = v23;
  v8 = 8 * v21;
  va_copy(v10, va2);
  va_copy(v12, va3);
  va_copy(v14, va4);
  v16 = v30;
  v17 = 8 * v28;
  v18 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 7u, &UserData);
}
