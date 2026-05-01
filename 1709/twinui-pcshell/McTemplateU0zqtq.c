/*
 * XREFs of McTemplateU0zqtq @ 0x180061D64
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___::Run @ 0x18005EA10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___--Run.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqtq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6)
{
  __int64 v6; // rax
  int v7; // ecx
  const wchar_t *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+3Ch] [rbp-44h]
  int *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  char *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  char *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
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
  v12 = v7;
  v13 = 0;
  v8 = L"NULL";
  if ( a3 )
    v8 = a3;
  v15 = 4LL;
  v11 = v8;
  v17 = 4LL;
  v14 = &v20;
  v19 = 4LL;
  v16 = &a5;
  v18 = &a6;
  return McGenEventWriteUM(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_ApplicationStateChanged,
           5u,
           &v10);
}
