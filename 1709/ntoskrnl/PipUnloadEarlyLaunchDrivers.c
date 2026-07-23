/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140856CD0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x140181080 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-38h] BYREF

  v1 = (unsigned __int16 *)(a1 + 64);
  v2 = *(unsigned __int16 **)(a1 + 64);
  if ( v2 != (unsigned __int16 *)(a1 + 64) )
  {
    do
    {
      v3 = v2;
      v2 = *(unsigned __int16 **)v2;
      if ( *((int *)v3 + 14) >= 0 )
        IopUnloadDriver(v3 + 16, 1);
    }
    while ( v2 != v1 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
