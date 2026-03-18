/*
 * XREFs of NotifyUserMSBDAIfApplicable @ 0x1C003ADA8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

NTSTATUS NotifyUserMSBDAIfApplicable()
{
  ULONGLONG v0; // rax
  NTSTATUS result; // eax
  _DWORD v2[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+40h] [rbp-C0h] BYREF
  int v4; // [rsp+48h] [rbp-B8h]
  const wchar_t *v5; // [rsp+50h] [rbp-B0h]
  _DWORD *v6; // [rsp+58h] [rbp-A8h]
  int v7; // [rsp+60h] [rbp-A0h]
  _DWORD *v8; // [rsp+68h] [rbp-98h]
  int v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  int v11; // [rsp+80h] [rbp-80h]
  _BYTE v12[40]; // [rsp+88h] [rbp-78h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+B0h] [rbp-50h] BYREF

  memset(&VersionInfo, 0, sizeof(VersionInfo));
  VersionInfo.wProductType = 1;
  v0 = VerSetConditionMask(0LL, 0x80u, 1u);
  result = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v0);
  if ( result >= 0 )
  {
    v2[0] = 0;
    v3 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v5 = L"BasicDisplayUserNotified";
    v6 = v2;
    v8 = v2;
    v4 = 288;
    v7 = 67108868;
    v9 = 4;
    memset(v12, 0, sizeof(v12));
    result = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v3, 0LL, 0LL);
    if ( !v2[0] )
      return WdDiagNotifyUser(0LL, 8LL, 0LL, 0LL);
  }
  return result;
}
