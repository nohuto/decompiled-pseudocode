/*
 * XREFs of IopGetRegistryKeyInformation @ 0x140586A18
 * Callers:
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     pIoQueryDeviceDescription @ 0x140586DD0 (pIoQueryDeviceDescription.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ZwQueryKey @ 0x14017E200 (ZwQueryKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  PVOID PoolWithTagPriority; // rax
  void *v6; // rbx
  NTSTATUS Key; // edi
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF

  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( result == -1073741789 || result == -2147483643 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              (unsigned int)NumberOfBytes,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x20206F49u);
    v6 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      Key = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTagPriority, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( Key < 0 )
      {
        ExFreePoolWithTag(v6, 0);
        return Key;
      }
      else
      {
        *a2 = v6;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
