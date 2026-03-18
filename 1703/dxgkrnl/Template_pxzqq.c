/*
 * XREFs of Template_pxzqq @ 0x1C004125C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003EF40 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pxzqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  va_list v9; // [rsp+40h] [rbp-29h]
  __int64 v10; // [rsp+48h] [rbp-21h]
  const wchar_t *v11; // [rsp+50h] [rbp-19h]
  int v12; // [rsp+58h] [rbp-11h]
  int v13; // [rsp+5Ch] [rbp-Dh]
  va_list v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  va_list v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  const wchar_t *v22; // [rsp+D8h] [rbp+6Fh]
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  va_list va2; // [rsp+E0h] [rbp+77h]
  va_list va3; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, const wchar_t *);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v3 = v22;
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v9, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v10 = 8LL;
  if ( v22 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v22[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v12 = v6;
  v13 = 0;
  if ( !v22 )
    v3 = L"NULL";
  v15 = 4LL;
  v11 = v3;
  va_copy(v14, va2);
  v17 = 4LL;
  va_copy(v16, va3);
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
