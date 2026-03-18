/*
 * XREFs of UsbhGetPdoRegistryParameter @ 0x1C00226D0
 * Callers:
 *     UsbhReadPdoRegistryKeys @ 0x1C0020330 (UsbhReadPdoRegistryKeys.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0040278 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C004D1C0 (UsbhUpdateRegHubHardResetCount.c)
 * Callees:
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhGetPdoRegistryParameter(
        struct _DEVICE_OBJECT *a1,
        const WCHAR *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        ULONG ResultLength)
{
  bool v7; // cf
  NTSTATUS v11; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  unsigned int v15; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  v7 = (_BYTE)ResultLength != 0;
  LOBYTE(ResultLength) = -(char)ResultLength;
  v11 = IoOpenDeviceRegistryKey(a1, 2 - v7, 0x1F0000u, &KeyHandle);
  if ( v11 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 12, 0x42554855u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, a4 + 12);
      v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, a4 + 12, &ResultLength);
      if ( v11 == -2147483643 )
        v11 = 0;
      if ( v11 >= 0 )
      {
        v15 = v13[2];
        if ( a4 < v15 )
          v15 = a4;
        memmove(a3, v13 + 3, v15);
        if ( a5 )
          *a5 = v13[1];
        if ( a6 )
          *a6 = v13[2];
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v11 = -1073741670;
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v11;
}
