/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x140521A38
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140447D78 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405224E4 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140581770 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1405837F8 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x140587960 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405984C0 (_CmGetDeviceControlKeyPath.c)
 */

__int64 __fastcall CmGetDeviceRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        __int64 a8)
{
  int v9; // ebx
  int v10; // esi
  __int64 result; // rax
  int v12; // ecx
  int v13; // r9d
  int v14; // r11d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  v9 = a2;
  v10 = a1;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  result = CmValidateDeviceName(a1, a2);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int8)v14 != 16 )
  {
    switch ( (unsigned __int8)v14 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(v10, v9, v14, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v12, v9, v14, a4, v15, pszDest, cchDest, a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v12, v9, v14, v13, v15, pszDest, cchDest, a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v12, v9, v14, v13, v15, pszDest, cchDest, a8);
    }
    return 3221225485LL;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v12, v9, v14, a4, v15, pszDest, cchDest, a8);
}
