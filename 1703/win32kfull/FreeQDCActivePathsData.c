/*
 * XREFs of FreeQDCActivePathsData @ 0x1C01A7168
 * Callers:
 *     FindMonitorForDigitizer @ 0x1C01A6B50 (FindMonitorForDigitizer.c)
 *     GetQDCActivePathsData @ 0x1C01A7350 (GetQDCActivePathsData.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01B77C0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01B83A8 (_InitializeTouchInjection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeQDCActivePathsData(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1[2];
    if ( v2 )
      Win32FreePool(v2);
    v3 = a1[1];
    if ( v3 )
      Win32FreePool(v3);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
