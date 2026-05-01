/*
 * XREFs of Template_sqq @ 0x180172A34
 * Callers:
 *     ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x180172DD0 (-GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180173024 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801734DC (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_sqq(__int64 a1, __int64 a2, const char *a3, int a4, char a5)
{
  __int64 v5; // rcx
  ULONG v6; // ecx
  const char *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  char *v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = a4;
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
  UserData.Size = v6;
  UserData.Reserved = 0;
  v7 = "NULL";
  if ( a3 )
    v7 = a3;
  v11 = 4LL;
  UserData.Ptr = (ULONGLONG)v7;
  v13 = 4LL;
  v10 = &v14;
  v12 = &a5;
  return EventWrite(0LL, &EhmMessage, 3u, &UserData);
}
