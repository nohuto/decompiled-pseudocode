/*
 * XREFs of Template_zqqqqqqq @ 0x1C0040480
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rax
  unsigned int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-81h] BYREF
  char *v15; // [rsp+40h] [rbp-71h]
  __int64 v16; // [rsp+48h] [rbp-69h]
  char *v17; // [rsp+50h] [rbp-61h]
  __int64 v18; // [rsp+58h] [rbp-59h]
  char *v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  char *v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  char *v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  char *v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  char *v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]

  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  UserData.Size = v12;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v16 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  v20 = 4LL;
  v19 = &a7;
  v22 = 4LL;
  v21 = &a8;
  v24 = 4LL;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v26 = 4LL;
  v28 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterResourceListFailure, 0LL, 8u, &UserData);
}
