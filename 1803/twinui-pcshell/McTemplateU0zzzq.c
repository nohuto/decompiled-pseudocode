/*
 * XREFs of McTemplateU0zzzq @ 0x1802B309C
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1802B2110 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG McTemplateU0zzzq(_DWORD a1, _DWORD a2, const wchar_t *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // r8d
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v15; // [rsp+30h] [rbp-50h]
  int v16; // [rsp+38h] [rbp-48h]
  int v17; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+4Ch] [rbp-34h]
  const wchar_t *v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+5Ch] [rbp-24h]
  va_list v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  va_list va; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va, a5);
  v5 = -1LL;
  v6 = 10;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v17 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v15 = a3;
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
  v11 = a5;
  v19 = v10;
  if ( !a4 )
    a4 = L"NULL";
  v20 = 0;
  v18 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v6 = 2 * v5 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v22 = v6;
  v21 = v11;
  v23 = 0;
  va_copy(v24, va);
  v25 = 4LL;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, &SwitchToAppByIdWithArguments_Stop, 5u, &v14);
}
