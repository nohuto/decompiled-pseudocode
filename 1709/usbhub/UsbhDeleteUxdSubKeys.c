/*
 * XREFs of UsbhDeleteUxdSubKeys @ 0x1C0058328
 * Callers:
 *     UsbhUxdShutdown @ 0x1C0058CEC (UsbhUxdShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0058748 (UsbhGetUxdLoadKeySettings.c)
 */

__int64 __fastcall UsbhDeleteUxdSubKeys(__int64 a1, WCHAR *a2)
{
  _DWORD *v3; // r15
  WCHAR *PoolWithTag; // rax
  WCHAR *v5; // rdi
  ULONG v6; // edx
  ULONG v7; // ebx
  ULONG v8; // r14d
  int v9; // r8d
  __int64 v10; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v13[20]; // [rsp+40h] [rbp-98h] BYREF

  v3 = FdoExt(a1);
  memset(v13, 0, 0x44uLL);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x2AuLL);
  v6 = 0;
  v7 = 0;
  while ( ZwEnumerateValueKey(a2, v6, KeyValueBasicInformation, v5, 0x2Au, ResultLength) >= 0 )
  {
    v8 = v7++;
    if ( *((_DWORD *)v5 + 1) == 3 && (int)UsbhGetUxdLoadKeySettings(v10, a2, v5 + 6, v13) >= 0 && (v13[9] || v3[1294]) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v9,
          34,
          (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
          (__int64)(v5 + 6));
      if ( RtlDeleteRegistryValue(0x40000000u, a2, v5 + 6) >= 0 )
        v7 = v8;
    }
    v6 = v7;
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
