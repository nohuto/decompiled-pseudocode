/*
 * XREFs of Template_zzqqq @ 0x1C0031E80
 * Callers:
 *     RaCallMiniportFindAdapter @ 0x1C0010DCC (RaCallMiniportFindAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  unsigned int v11; // edx
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+4Ch] [rbp-1Dh]
  char *v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  char *v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  char *v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]

  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v12 = a5;
  UserData.Size = v11;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (unsigned __int64)a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v17 = v9;
  v16 = v12;
  v19 = &a6;
  v18 = 0;
  v21 = &a7;
  v20 = 4LL;
  v23 = &a8;
  v22 = 4LL;
  v24 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventPortConfigChange, 0LL, 5u, &UserData);
}
