/*
 * XREFs of McTemplateU0sqq @ 0x1802FB658
 * Callers:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1802FAD98 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x1802FB030 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1802FB758 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0sqq(__int64 a1, __int64 a2, const char *a3, int a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-50h] BYREF
  const char *v9; // [rsp+30h] [rbp-40h]
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
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v10 = v6;
  v11 = 0;
  if ( !a3 )
    a3 = "NULL";
  v9 = a3;
  v12 = &v16;
  v13 = 4LL;
  v15 = 4LL;
  v14 = &a5;
  return McGenEventWriteUM(MICROSOFT_WINDOWSPHONE_INPUT_Context, &EhmMessage, 4u, &v8);
}
