/*
 * XREFs of McTemplateU0zqq @ 0x180136D08
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180119EAC (-SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z.c)
 *     ?ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ @ 0x1801362FC (-ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0zqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-50h] BYREF
  const wchar_t *v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  int *v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  char *v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+98h] [rbp+28h] BYREF

  v16 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v9 = a3;
  v12 = &v16;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION,
           4u,
           &v8);
}
