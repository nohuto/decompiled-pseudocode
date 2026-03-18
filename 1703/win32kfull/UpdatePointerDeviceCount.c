/*
 * XREFs of UpdatePointerDeviceCount @ 0x1C01A77EC
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerDeviceCount(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = (unsigned int)gcPointerDevices;
  v2 = a1 - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return result;
    result = (unsigned int)(gcPointerDevices - 1);
  }
  else
  {
    result = (unsigned int)(gcPointerDevices + 1);
  }
  gcPointerDevices = result;
  return result;
}
