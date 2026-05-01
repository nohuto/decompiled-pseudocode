/*
 * XREFs of Template_pqztp @ 0x18005F43C
 * Callers:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180057730 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pqztp(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, char a6, char a7)
{
  __int64 v7; // rax
  int v8; // edx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-31h] BYREF
  int *v12; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+38h] [rbp-19h]
  const wchar_t *v14; // [rsp+40h] [rbp-11h]
  int v15; // [rsp+48h] [rbp-9h]
  int v16; // [rsp+4Ch] [rbp-5h]
  char *v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  char *v19; // [rsp+60h] [rbp+Fh]
  __int64 v20; // [rsp+68h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+5Fh] BYREF
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 8LL;
  v12 = &v22;
  v13 = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v15 = v8;
  v16 = 0;
  v9 = L"NULL";
  if ( a5 )
    v9 = a5;
  v18 = 4LL;
  v14 = v9;
  v20 = 8LL;
  v17 = &a6;
  v19 = &a7;
  return EventWrite(
           Microsoft_Windows_Immersive_ShellHandle,
           &ImmersiveApplicationManager_Foreground_Boost,
           5u,
           &UserData);
}
