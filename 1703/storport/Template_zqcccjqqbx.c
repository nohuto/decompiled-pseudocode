/*
 * XREFs of Template_zqcccjqqbx @ 0x1C004253C
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C0041618 (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqcccjqqbx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        int a11,
        __int64 a12,
        char a13)
{
  __int64 v13; // rax
  unsigned int v14; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-B1h] BYREF
  char *v17; // [rsp+40h] [rbp-A1h]
  __int64 v18; // [rsp+48h] [rbp-99h]
  char *v19; // [rsp+50h] [rbp-91h]
  __int64 v20; // [rsp+58h] [rbp-89h]
  char *v21; // [rsp+60h] [rbp-81h]
  __int64 v22; // [rsp+68h] [rbp-79h]
  char *v23; // [rsp+70h] [rbp-71h]
  __int64 v24; // [rsp+78h] [rbp-69h]
  __int64 v25; // [rsp+80h] [rbp-61h]
  __int64 v26; // [rsp+88h] [rbp-59h]
  char *v27; // [rsp+90h] [rbp-51h]
  __int64 v28; // [rsp+98h] [rbp-49h]
  int *v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+A8h] [rbp-39h]
  __int64 v31; // [rsp+B0h] [rbp-31h]
  int v32; // [rsp+B8h] [rbp-29h]
  int v33; // [rsp+BCh] [rbp-25h]
  char *v34; // [rsp+C0h] [rbp-21h]
  __int64 v35; // [rsp+C8h] [rbp-19h]

  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  UserData.Size = v14;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v17 = &a5;
  v20 = 1LL;
  v19 = &a6;
  v22 = 1LL;
  v21 = &a7;
  v24 = 1LL;
  v23 = &a8;
  v25 = a9;
  v27 = &a10;
  v29 = &a11;
  v31 = a12;
  v32 = a11;
  v34 = &a13;
  v26 = 16LL;
  v28 = 4LL;
  v30 = 4LL;
  v33 = 0;
  v35 = 8LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventMiniportBugResetBroken, a3, 0xAu, &UserData);
}
