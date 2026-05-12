/*
 * XREFs of PortRegistryWriteWithHandle @ 0x1C0065D74
 * Callers:
 *     PortRegistryWriteDeviceKey @ 0x1C005E5BC (PortRegistryWriteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortRegistryWriteWithHandle(
        WCHAR *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  struct _OBJECT_ATTRIBUTES v12; // [rsp+40h] [rbp-38h] BYREF
  PCWSTR Path; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 )
  {
    v12.RootDirectory = a1;
    v12.ObjectName = a2;
    v12.Length = 48;
    v12.Attributes = 576;
    *(_OWORD *)&v12.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey((PHANDLE)&Path, 0x2001Fu, &v12, 0, 0LL, 0, 0LL);
    a1 = (WCHAR *)Path;
    v10 = v9;
  }
  else
  {
    Path = a1;
    v10 = 0;
  }
  if ( v10 >= 0 )
  {
    v10 = RtlWriteRegistryValue(0x40000000u, a1, *(PCWSTR *)(a3 + 8), a4, ValueData, ValueLength);
    if ( a2 )
      ZwClose((HANDLE)Path);
  }
  return (unsigned int)v10;
}
