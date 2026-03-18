/*
 * XREFs of DwmAsyncDesktopFree @ 0x1C00A1814
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncDesktopFree(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  _DWORD v6[14]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x32uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741840;
    *(_QWORD *)&v6[11] = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
