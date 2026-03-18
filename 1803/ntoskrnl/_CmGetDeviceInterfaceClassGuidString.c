/*
 * XREFs of _CmGetDeviceInterfaceClassGuidString @ 0x14050AE6C
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x14050AE00 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1405F19E8 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140504998 (_CmGetDeviceInterfaceSubkeyPath.c)
 */

signed int __fastcall CmGetDeviceInterfaceClassGuidString(__int64 a1, const wchar_t *a2, wchar_t *a3)
{
  signed int result; // eax

  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, a3, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    a3[38] = 0;
    return 0;
  }
  return result;
}
