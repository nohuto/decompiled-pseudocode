/*
 * XREFs of IopGetRegistryKeyInformation @ 0x1405D953C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  PVOID Pool; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool = IopVerifierExAllocatePool(NonPagedPoolNx, Length);
    if ( Pool )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
        return v6;
      }
      else
      {
        *a2 = Pool;
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
