/*
 * XREFs of Template_ppqqpqq @ 0x1C0014D8C
 * Callers:
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01A6370 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqqpqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-69h] BYREF
  va_list v6; // [rsp+50h] [rbp-59h]
  __int64 v7; // [rsp+58h] [rbp-51h]
  int *v8; // [rsp+60h] [rbp-49h]
  __int64 v9; // [rsp+68h] [rbp-41h]
  va_list v10; // [rsp+70h] [rbp-39h]
  __int64 v11; // [rsp+78h] [rbp-31h]
  va_list v12; // [rsp+80h] [rbp-29h]
  __int64 v13; // [rsp+88h] [rbp-21h]
  va_list v14; // [rsp+90h] [rbp-19h]
  __int64 v15; // [rsp+98h] [rbp-11h]
  va_list v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+4Fh]
  __int64 v20; // [rsp+100h] [rbp+57h] BYREF
  va_list va1; // [rsp+100h] [rbp+57h]
  __int64 v22; // [rsp+108h] [rbp+5Fh]
  __int64 v23; // [rsp+110h] [rbp+67h] BYREF
  va_list va2; // [rsp+110h] [rbp+67h]
  __int64 v25; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+118h] [rbp+6Fh]
  __int64 v27; // [rsp+120h] [rbp+77h] BYREF
  va_list va4; // [rsp+120h] [rbp+77h]
  va_list va5; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v27 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 4;
  va_copy(v6, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = &v4;
  v7 = 8LL;
  va_copy(v10, va2);
  va_copy(v12, va3);
  va_copy(v14, va4);
  va_copy(v16, va5);
  v9 = 4LL;
  v11 = 4LL;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 7u, &UserData);
}
