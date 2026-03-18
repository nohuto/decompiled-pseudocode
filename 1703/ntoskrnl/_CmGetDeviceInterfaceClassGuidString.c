/*
 * XREFs of _CmGetDeviceInterfaceClassGuidString @ 0x1404E1710
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404E16A4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140596324 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140489128 (_CmGetDeviceInterfaceSubkeyPath.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuidString(__int64 a1, const wchar_t *a2, wchar_t *a3)
{
  int result; // eax

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
