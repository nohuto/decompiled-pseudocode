/*
 * XREFs of OpenMultiplePortDevice @ 0x1C01BE8E8
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0122350 (xxxRegisterForDeviceClassNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

_BOOL8 __fastcall OpenMultiplePortDevice(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rbx
  PWSTR Buffer; // rdi
  unsigned __int64 v6; // rbx
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v10[8]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  memset(SourceString, 0, 0x208uLL);
  v8 = 0;
  if ( (unsigned int)v2 > 2 )
    return 0LL;
  v4 = &aDeviceTemplate[70 * v2];
  if ( gProtocolType || (v4[11] & 1) != 0 )
    return 0LL;
  FastGetProfileDwordW(0LL, *((unsigned int *)v4 + 4), L"ConnectMultiplePorts", 0LL, &v8, 0);
  if ( !v8 && gpWin32kDriverObject )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    RtlAppendUnicodeToString(&Destination, (PCWSTR)v4[5]);
    Buffer = Destination.Buffer;
    v6 = (unsigned __int64)Destination.Length >> 1;
    Destination.Buffer[v6 - 1] = 48;
    do
    {
      RIMAddNonPnpDeviceOfType(a1, &Destination, (unsigned int)v2, 0LL, v10);
      ++Buffer[v6 - 1];
    }
    while ( Buffer[v6 - 1] <= 0x39u );
    return 0LL;
  }
  FastGetProfileStringW(0LL, 9LL, v4[3], v4[4], SourceString, 260, 0);
  RtlInitUnicodeString(&Destination, SourceString);
  return (int)RIMAddNonPnpDeviceOfType(a1, &Destination, (unsigned int)v2, 0LL, v10) >= 0;
}
