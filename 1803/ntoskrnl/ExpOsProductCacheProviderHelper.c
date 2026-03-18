/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x140549CD4
 * Callers:
 *     ExpCloudbookHardwareLockedProvider @ 0x140549BD0 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x140549E30 (ExpGenuinePolicyPostProcess.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1407BE2B0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpGetSubscriptionPfn @ 0x1407BE454 (ExpGetSubscriptionPfn.c)
 *     ExpOsProductContentIdCacheProvider @ 0x1407BE640 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x1407BE680 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        PUNICODE_STRING ValueName,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *ResultLength)
{
  NTSTATUS ValueKey; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF

  KeyHandle = 0LL;
  *ResultLength = 1;
  ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_1407FA180);
  if ( ValueKey >= 0 )
  {
    ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ResultLength, 0x20534C53u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        ValueKey = ZwQueryValueKey(
                     KeyHandle,
                     ValueName,
                     KeyValuePartialInformation,
                     PoolWithTag,
                     (ULONG)ResultLength,
                     (PULONG)&ResultLength);
        if ( ValueKey >= 0 )
        {
          *a5 = v13[2];
          if ( a2 )
            *a2 = v13[1];
          if ( a4 >= v13[2] )
          {
            if ( a3 )
              memmove(a3, v13 + 3, (unsigned int)v13[2]);
          }
          else
          {
            ValueKey = -1073741789;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        ValueKey = -1073741801;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)ValueKey;
}
