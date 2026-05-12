/*
 * XREFs of ShimGetMsftId @ 0x1C0046920
 * Callers:
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0046760 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C005E5BC (PortRegistryWriteDeviceKey.c)
 *     PortRegistryReadDeviceKey @ 0x1C005FF8C (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall ShimGetMsftId(__int64 a1, __int64 a2)
{
  UUID *v2; // rdi
  int DeviceKey; // eax
  char v7; // al
  char v8; // al
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  v2 = (UUID *)(a2 + 12);
  v11 = 16;
  v12 = a2 + 12;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v9, L"GeneratedID");
  DeviceKey = PortRegistryReadDeviceKey(
                *(_QWORD *)(a1 + 8),
                (unsigned int)&DestinationString,
                (unsigned int)&v9,
                3,
                (__int64)&v12,
                (__int64)&v11);
  if ( DeviceKey == -1073741772 )
  {
    if ( ExUuidCreate(v2) < 0 )
      return 3221225473LL;
    DeviceKey = PortRegistryWriteDeviceKey(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)&DestinationString,
                  (unsigned int)&v9,
                  3,
                  v12,
                  v11);
  }
  if ( DeviceKey < 0 )
    return 3221225473LL;
  v7 = *(_BYTE *)a2 & 0xF1;
  *(_DWORD *)(a2 + 4) = 1413894989;
  *(_DWORD *)(a2 + 8) = 538976288;
  *(_BYTE *)a2 = v7 | 1;
  v8 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v8 | 1;
  return 0LL;
}
