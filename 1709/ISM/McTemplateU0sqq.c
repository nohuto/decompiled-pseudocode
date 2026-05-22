/*
 * XREFs of McTemplateU0sqq @ 0x1800BF55C
 * Callers:
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x1800BFAD0 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800BFD68 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180001B54 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0sqq(__int64 a1, __int64 a2, const char *a3, int a4, char a5)
{
  __int64 v5; // rcx
  int v6; // ecx
  const char *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+20h] [rbp-50h] BYREF
  const char *v10; // [rsp+30h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  int *v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  char *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a4;
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
  v11 = v6;
  v12 = 0;
  v7 = "NULL";
  if ( a3 )
    v7 = a3;
  v10 = v7;
  v13 = &v17;
  v14 = 4LL;
  v15 = &a5;
  v16 = 4LL;
  return McGenEventWriteUM(MICROSOFT_WINDOWSPHONE_INPUT_Context, &EhmMessage, 4u, &v9);
}
