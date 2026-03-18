/*
 * XREFs of _CmIsLocalMachineContainer @ 0x1405E8E10
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceContainerMappedProperty @ 0x140586A44 (_CmGetDeviceContainerMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 */

bool __fastcall CmIsLocalMachineContainer(__int64 a1, const wchar_t *a2)
{
  char v2; // bl
  int v5; // [rsp+40h] [rbp-78h] BYREF
  int v6; // [rsp+44h] [rbp-74h] BYREF
  wchar_t Str1[40]; // [rsp+50h] [rbp-68h] BYREF

  v5 = 78;
  v2 = 0;
  if ( (int)CmGetDeviceRegProp(a1, (__int64)L"HTREE\\ROOT\\0", 0LL, 37, (__int64)&v6, (__int64)Str1, (__int64)&v5, 0) >= 0 )
  {
    Str1[38] = 0;
    return wcsicmp(Str1, a2) == 0;
  }
  return v2;
}
