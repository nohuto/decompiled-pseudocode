/*
 * XREFs of Template_pqqxqqtp @ 0x1C0024F68
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqxqqtp(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-81h] BYREF
  va_list v5; // [rsp+40h] [rbp-71h]
  __int64 v6; // [rsp+48h] [rbp-69h]
  va_list v7; // [rsp+50h] [rbp-61h]
  __int64 v8; // [rsp+58h] [rbp-59h]
  va_list v9; // [rsp+60h] [rbp-51h]
  __int64 v10; // [rsp+68h] [rbp-49h]
  va_list v11; // [rsp+70h] [rbp-41h]
  __int64 v12; // [rsp+78h] [rbp-39h]
  va_list v13; // [rsp+80h] [rbp-31h]
  __int64 v14; // [rsp+88h] [rbp-29h]
  va_list v15; // [rsp+90h] [rbp-21h]
  __int64 v16; // [rsp+98h] [rbp-19h]
  va_list v17; // [rsp+A0h] [rbp-11h]
  __int64 v18; // [rsp+A8h] [rbp-9h]
  __int64 v19; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  __int64 v21; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+4Fh]
  __int64 v23; // [rsp+108h] [rbp+57h] BYREF
  va_list va2; // [rsp+108h] [rbp+57h]
  __int64 v25; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+5Fh]
  __int64 v27; // [rsp+118h] [rbp+67h] BYREF
  va_list va4; // [rsp+118h] [rbp+67h]
  __int64 v29; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+120h] [rbp+6Fh]
  __int64 v31; // [rsp+128h] [rbp+77h] BYREF
  va_list va6; // [rsp+128h] [rbp+77h]
  va_list va7; // [rsp+130h] [rbp+7Fh] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
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
  va_copy(va5, va4);
  v27 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v29 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v31 = va_arg(va7, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v6 = 4LL;
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v8 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  va_copy(v15, va6);
  va_copy(v17, va7);
  v10 = 8LL;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventQueueSubmit, 0LL, 8u, &UserData);
}
