/*
 * XREFs of Template_szz @ 0x1C00FD3F8
 * Callers:
 *     EtwSyscallFilterMessage @ 0x1C00FCD20 (EtwSyscallFilterMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_szz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  ULONG v8; // eax
  const wchar_t *v9; // rax
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // r8d
  const wchar_t *v13; // rax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  const wchar_t *v20; // [rsp+50h] [rbp-28h]
  int v21; // [rsp+58h] [rbp-20h]
  int v22; // [rsp+5Ch] [rbp-1Ch]

  v6 = -1LL;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5;
  }
  UserData.Size = v8;
  v9 = a5;
  if ( !a4 )
    a4 = "NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a4;
  v10 = 10;
  if ( a5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v18 = v12;
  v19 = 0;
  if ( !a5 )
    v9 = L"NULL";
  v17 = v9;
  v13 = a6;
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v10 = 2 * v6 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v13 = L"NULL";
  v21 = v10;
  v20 = v13;
  v22 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &SyscallFilterMessage, &W32kControlGuid, 3u, &UserData);
}
