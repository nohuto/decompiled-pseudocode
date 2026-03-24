/*
 * XREFs of MouseQueryDeviceKey @ 0x1C000CC7C
 * Callers:
 *     MouseClassGetWaitWakeEnableState @ 0x1C000C828 (MouseClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0001800 (memmove.c)
 */

__int64 __fastcall MouseQueryDeviceKey(HANDLE KeyHandle, __int64 a2, void *a3, ULONG a4)
{
  ULONG v6; // r9d
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  unsigned int v12; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  RtlInitUnicodeString(&ValueName, L"WaitWakeEnabled");
  v6 = -1;
  v7 = ValueName.MaximumLength + 24;
  v8 = ValueName.MaximumLength + 28;
  if ( v8 >= v7 )
    v6 = ValueName.MaximumLength + 28;
  Length = v6;
  if ( v8 < v7 )
    return v8 < v7 ? 0xC0000095 : 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x43756F4Du);
  if ( PoolWithTag )
  {
    v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, Length, &Length);
    if ( v11 >= 0 )
    {
      v12 = PoolWithTag[3];
      if ( v12 > 4 )
        v11 = -1073741789;
      else
        memmove(a3, (char *)PoolWithTag + PoolWithTag[2], v12);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
