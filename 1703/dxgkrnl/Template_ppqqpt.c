/*
 * XREFs of Template_ppqqpt @ 0x1C0014E50
 * Callers:
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01A6370 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_ppqqpt(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-51h] BYREF
  va_list v6; // [rsp+50h] [rbp-41h]
  __int64 v7; // [rsp+58h] [rbp-39h]
  int *v8; // [rsp+60h] [rbp-31h]
  __int64 v9; // [rsp+68h] [rbp-29h]
  va_list v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+78h] [rbp-19h]
  va_list v12; // [rsp+80h] [rbp-11h]
  __int64 v13; // [rsp+88h] [rbp-9h]
  va_list v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  __int64 v16; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v18; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v20; // [rsp+F8h] [rbp+67h]
  __int64 v21; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+6Fh]
  __int64 v23; // [rsp+108h] [rbp+77h] BYREF
  va_list va3; // [rsp+108h] [rbp+77h]
  va_list va4; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 4;
  va_copy(v6, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = &v4;
  v7 = 8LL;
  va_copy(v10, va2);
  va_copy(v12, va3);
  va_copy(v14, va4);
  v9 = 4LL;
  v11 = 4LL;
  v13 = 8LL;
  v15 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 6u, &UserData);
}
