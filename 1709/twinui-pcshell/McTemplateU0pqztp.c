/*
 * XREFs of McTemplateU0pqztp @ 0x18006100C
 * Callers:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x180059D7C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqztp(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, char a6, char a7)
{
  __int64 v7; // rax
  int v8; // edx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+20h] [rbp-31h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+38h] [rbp-19h]
  int *v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  const wchar_t *v16; // [rsp+50h] [rbp-1h]
  int v17; // [rsp+58h] [rbp+7h]
  int v18; // [rsp+5Ch] [rbp+Bh]
  char *v19; // [rsp+60h] [rbp+Fh]
  __int64 v20; // [rsp+68h] [rbp+17h]
  char *v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+5Fh] BYREF
  int v24; // [rsp+B8h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v12 = &v23;
  v13 = 8LL;
  v14 = &v24;
  v15 = 4LL;
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
  v17 = v8;
  v18 = 0;
  v9 = L"NULL";
  if ( a5 )
    v9 = a5;
  v20 = 4LL;
  v16 = v9;
  v22 = 8LL;
  v19 = &a6;
  v21 = &a7;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, &ImmersiveApplicationManager_Foreground_Boost, 6u, &v11);
}
