/*
 * XREFs of PortRegistryCreateKeyEx @ 0x1C0016F18
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001689C (RaidUnitRegisterInterfaces.c)
 *     PortMapBuildLunEntry @ 0x1C0016C4C (PortMapBuildLunEntry.c)
 *     PortMapBuildAdapterEntry @ 0x1C00480C8 (PortMapBuildAdapterEntry.c)
 *     PortMapBuildBusEntry @ 0x1C00481D0 (PortMapBuildBusEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

__int64 PortRegistryCreateKeyEx(void *a1, ULONG a2, void **a3, const wchar_t *a4, ...)
{
  int v7; // eax
  NTSTATUS v8; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[64]; // [rsp+90h] [rbp-70h] BYREF
  va_list Args; // [rsp+170h] [rbp+70h] BYREF

  va_start(Args, a4);
  v7 = _vsnwprintf(Dest, 0x3EuLL, a4, Args);
  if ( v7 < 0 || (unsigned __int64)v7 > 0x3D )
    Dest[62] = 0;
  Dest[63] = 0;
  RtlInitUnicodeString(&DestinationString, Dest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, a2, &Disposition);
  if ( v8 >= 0 )
  {
    if ( Disposition == 2 )
      v8 = 0x40000000;
    if ( v8 >= 0 )
    {
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
    }
  }
  return (unsigned int)v8;
}
