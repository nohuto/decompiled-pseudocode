/*
 * XREFs of Template_zqtq @ 0x180060080
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b80a549fac08ad064d4fba4063c5e56a___::Run @ 0x18005CBA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b80a549fac08ad064d4fba4063c5e56a___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqtq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6)
{
  __int64 v6; // rax
  ULONG v7; // ecx
  const wchar_t *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  int *v11; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-48h]
  char *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  char *v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  UserData.Size = v7;
  v8 = L"NULL";
  if ( a3 )
    v8 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v8;
  v11 = &v17;
  v12 = 4LL;
  v13 = &a5;
  v15 = &a6;
  v14 = 4LL;
  v16 = 4LL;
  return EventWrite(
           Microsoft_Windows_Immersive_ShellHandle,
           &ImmersiveShell_AppManager_ApplicationStateChanged,
           4u,
           &UserData);
}
