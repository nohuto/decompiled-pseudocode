/*
 * XREFs of McTemplateU0dz @ 0x18006737C
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x1800659F0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0dz(__int64 a1, __int64 a2, int a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-48h] BYREF
  int *v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  const wchar_t *v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = a3;
  v10 = 4LL;
  v9 = &v14;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v12 = v5;
  v13 = 0;
  v6 = L"NULL";
  if ( a4 )
    v6 = a4;
  v11 = v6;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, &ImmersiveShell_AppManager_WindowTitleChange, 3u, &v8);
}
