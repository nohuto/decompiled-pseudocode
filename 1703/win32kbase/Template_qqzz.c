/*
 * XREFs of Template_qqzz @ 0x1C00DDB58
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C008E290 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqzz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h]
  const wchar_t *v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+58h] [rbp+7h]
  int v20; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v21; // [rsp+60h] [rbp+Fh]
  int v22; // [rsp+68h] [rbp+17h]
  int v23; // [rsp+6Ch] [rbp+1Bh]
  int v24; // [rsp+B8h] [rbp+67h] BYREF

  v24 = a4;
  v7 = a6;
  UserData.Ptr = (ULONGLONG)&v24;
  v16 = &a5;
  v8 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = 4LL;
  v9 = 10;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v19 = v11;
  v20 = 0;
  if ( !a6 )
    v7 = L"NULL";
  v18 = v7;
  v12 = a7;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
    v13 = a7 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v22 = v9;
  v21 = v12;
  v23 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &WindowLayoutChange_Stop, &W32kControlGuid, 4u, &UserData);
}
