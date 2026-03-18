/*
 * XREFs of Template_zqzt @ 0x1C00FD6E4
 * Callers:
 *     EtwFontLoadAttemptEvent @ 0x1C00FCC70 (EtwFontLoadAttemptEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqzt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  ULONG v10; // r8d
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  const wchar_t *v17; // [rsp+50h] [rbp-1h]
  int v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+5Ch] [rbp+Bh]
  char *v20; // [rsp+60h] [rbp+Fh]
  __int64 v21; // [rsp+68h] [rbp+17h]

  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  UserData.Size = v10;
  UserData.Reserved = 0;
  v15 = &a5;
  v11 = a6;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  v16 = 4LL;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v18 = v8;
  v17 = v11;
  v20 = &a7;
  v19 = 0;
  v21 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &FontLoadAttemptEvent, &W32kControlGuid, 4u, &UserData);
}
