/*
 * XREFs of IopGetRegistryValues @ 0x1406100E8
 * Callers:
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

NTSTATUS __fastcall IopGetRegistryValues(HANDLE KeyHandle, _QWORD *a2)
{
  _QWORD *v2; // rdi
  NTSTATUS result; // eax

  v2 = a2 + 1;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  result = IopGetRegistryValue(KeyHandle, L"Identifier", 40, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741772 )
  {
    result = IopGetRegistryValue(KeyHandle, L"Configuration Data", 36, v2);
    if ( ((result + 0x80000000) & 0x80000000) != 0 || result == -1073741772 )
    {
      result = IopGetRegistryValue(KeyHandle, L"Component Information", 24, v2 + 1);
      if ( ((result + 0x80000000) & 0x80000000) != 0 || result == -1073741772 )
        return 0;
    }
  }
  return result;
}
