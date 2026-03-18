/*
 * XREFs of DpiIsValidEdid @ 0x1C0011018
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105AB0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0118B48 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DpiIsValidEdid(__int64 a1)
{
  unsigned int v1; // edx

  if ( *(_DWORD *)a1 == -256 && *(_DWORD *)(a1 + 4) == 0xFFFFFF )
  {
    v1 = 128;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  if ( (*(_BYTE *)a1 & 0xF0) == 0x20 )
  {
    v1 = 256;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  return 0;
}
