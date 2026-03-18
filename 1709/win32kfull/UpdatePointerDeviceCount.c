/*
 * XREFs of UpdatePointerDeviceCount @ 0x1C01CA66C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerDeviceCount(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
      --gcPointerDevices;
  }
  else
  {
    ++gcPointerDevices;
  }
  return (unsigned int)gcPointerDevices;
}
