/*
 * XREFs of Template_zqqqqq @ 0x1C0040394
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  unsigned int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+48h] [rbp-39h]
  char *v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  char *v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  char *v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]

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
  if ( !a4 )
    a4 = L"NULL";
  v14 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v18 = 4LL;
  v17 = &a7;
  v20 = 4LL;
  v19 = &a8;
  v22 = 4LL;
  v21 = &a9;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventIncreaseAdapterResourceList, 0LL, 6u, &UserData);
}
