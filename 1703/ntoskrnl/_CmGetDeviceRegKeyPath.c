/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x140483D10
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404BE590 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmValidateDeviceName @ 0x140483E80 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x140484594 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1404E0E78 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404E0F28 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1404E102C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405C9F28 (_CmGetDeviceControlKeyPath.c)
 */

__int64 __fastcall CmGetDeviceRegKeyPath(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        __int64 a8)
{
  __int64 result; // rax
  int v11; // ecx
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  result = CmValidateDeviceName();
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int8)v13 != 16 )
  {
    switch ( (unsigned __int8)v13 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, v14, v13, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v11, v14, v13, a4, v15, pszDest, cchDest, a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v11, v14, v13, v12, v15, pszDest, cchDest, a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v11, v14, v13, v12, v15, pszDest, cchDest, a8);
    }
    return 3221225485LL;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v11, v14, v13, a4, v15, pszDest, cchDest, a8);
}
