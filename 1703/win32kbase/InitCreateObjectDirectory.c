/*
 * XREFs of InitCreateObjectDirectory @ 0x1C01D77D0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 InitCreateObjectDirectory()
{
  unsigned int v0; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, szWindowStationDirectory);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)gpsdInitWinSta;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v0 = ZwCreateDirectoryObject(&ghWinstaDirectory, 4u, &ObjectAttributes);
  Win32FreePool(gpsdInitWinSta);
  gpsdInitWinSta = 0LL;
  return v0;
}
