/*
 * XREFs of Template_pqqz @ 0x1C0022B88
 * Callers:
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C010B91C (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqz(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  va_list v8; // [rsp+40h] [rbp-11h]
  __int64 v9; // [rsp+48h] [rbp-9h]
  va_list v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  const wchar_t *v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+6Ch] [rbp+1Bh]
  __int64 v15; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v17; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v19; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  const wchar_t *v21; // [rsp+D0h] [rbp+7Fh]
  va_list va3; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, const wchar_t *);
  v3 = v21;
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  va_copy(v10, va2);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 4LL;
  v11 = 4LL;
  if ( v21 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v21[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v13 = v5;
  v14 = 0;
  if ( !v21 )
    v3 = L"NULL";
  v12 = v3;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventNodeMetadata, 0LL, 4u, &UserData);
}
