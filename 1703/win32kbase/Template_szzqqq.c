/*
 * XREFs of Template_szzqqq @ 0x1C00DDDF8
 * Callers:
 *     EtwTraceTimerNoCoalescing @ 0x1C00DA6F0 (EtwTraceTimerNoCoalescing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_szzqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  ULONG v11; // eax
  const wchar_t *v12; // rax
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // r8d
  const wchar_t *v16; // rax
  bool v17; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v20; // [rsp+40h] [rbp-41h]
  int v21; // [rsp+48h] [rbp-39h]
  int v22; // [rsp+4Ch] [rbp-35h]
  const wchar_t *v23; // [rsp+50h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-29h]
  int v25; // [rsp+5Ch] [rbp-25h]
  char *v26; // [rsp+60h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp-19h]
  char *v28; // [rsp+70h] [rbp-11h]
  __int64 v29; // [rsp+78h] [rbp-9h]
  char *v30; // [rsp+80h] [rbp-1h]
  __int64 v31; // [rsp+88h] [rbp+7h]

  v9 = -1LL;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  UserData.Size = v11;
  v12 = a5;
  if ( !a4 )
    a4 = "NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a4;
  v13 = 10;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v21 = v15;
  v22 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v20 = v12;
  v16 = a6;
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v13 = 2 * v9 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v16 = L"NULL";
  v24 = v13;
  v23 = v16;
  v25 = 0;
  v26 = &a7;
  v27 = 4LL;
  v28 = &a8;
  v29 = 4LL;
  v30 = &a9;
  v31 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TimerNoCoalescing, &W32kControlGuid, 6u, &UserData);
}
