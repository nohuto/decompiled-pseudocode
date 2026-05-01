/*
 * XREFs of ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180006934
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180006840 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000C12C (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 * Callees:
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180006A20 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 */

__int64 RmpGetDeviceTier()
{
  int i; // ebx
  const WCHAR *DeviceTierName; // rax
  DWORD cbData; // [rsp+30h] [rbp-19h] BYREF
  DWORD Type; // [rsp+34h] [rbp-15h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-11h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-9h] BYREF
  _MEMORYSTATUSEX Buffer; // [rsp+50h] [rbp+7h] BYREF

  hKey = 0LL;
  i = 0;
  Buffer.dwLength = 64;
  if ( GlobalMemoryStatusEx(&Buffer)
    && !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager\\TierThresholds", 0, 0x20019u, &hKey) )
  {
    for ( i = 3; i > 0; --i )
    {
      cbData = 4;
      DeviceTierName = (const WCHAR *)RmpGetDeviceTierNameEx((unsigned int)i);
      if ( !RegQueryValueExW(hKey, DeviceTierName, 0LL, &Type, Data, &cbData)
        && Type == 4
        && Buffer.ullTotalPhys >= (unsigned int)(*(_DWORD *)Data << 20) )
      {
        break;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)i;
}
