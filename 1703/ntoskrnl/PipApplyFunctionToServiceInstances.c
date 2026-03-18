/*
 * XREFs of PipApplyFunctionToServiceInstances @ 0x14059C6CC
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x14017E1A0 (ZwEnumerateValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x14059CDE8 (PnpRegSzToString.c)
 *     PipOpenServiceEnumKeys @ 0x1405AD84C (PipOpenServiceEnumKeys.c)
 *     PipAddDevicesToBootDriverWorker @ 0x1407F8FCC (PipAddDevicesToBootDriverWorker.c)
 */

__int64 __fastcall PipApplyFunctionToServiceInstances(
        void *a1,
        __int64 a2,
        ULONG a3,
        char a4,
        HANDLE KeyHandle,
        __int64 a6,
        _DWORD *P)
{
  __int64 result; // rax
  int v8; // ebx
  NTSTATUS RegistryValue; // eax
  int v10; // edi
  _DWORD *PoolWithTag; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  int v14; // ebx
  unsigned __int16 v15[4]; // [rsp+40h] [rbp-10h] BYREF
  char *v16; // [rsp+48h] [rbp-8h]
  HANDLE Handle; // [rsp+80h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v19) = a4;
  ResultLength = a3;
  Handle = a1;
  result = PipOpenServiceEnumKeys(a2, 131097LL, 0LL, &KeyHandle, 0);
  if ( (int)result < 0 )
    return result;
  v8 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
  v10 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_20;
    v10 = 0;
  }
  else
  {
    if ( P[1] == 4 && P[3] >= 4u )
      v8 = *(_DWORD *)((char *)P + (unsigned int)P[2]);
    ExFreePoolWithTag(P, 0);
  }
  if ( !v8 )
    goto LABEL_20;
  Handle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, PoolWithTag, 0x200u, &ResultLength);
    if ( v13 < 0 )
      break;
    if ( PoolWithTag[1] == 1 )
    {
      v15[0] = 0;
      PnpRegSzToString((char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3], &v19);
      v15[0] = v19;
      v15[1] = *((_WORD *)PoolWithTag + 6);
      v16 = (char *)PoolWithTag + (unsigned int)PoolWithTag[2];
      if ( (_WORD)v19 )
      {
        if ( (int)PnpUnicodeStringToWstr(&P, 0LL, v15) >= 0 )
        {
          v10 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)P, 0x10u, 0, 983103, 0, (__int64)&Handle, 0LL);
          PnpUnicodeStringToWstrFree(P, (__int64)v15);
          if ( v10 >= 0 )
          {
            v14 = PipAddDevicesToBootDriverWorker(Handle, v15, a6);
            ZwClose(Handle);
            if ( !v14 )
              goto LABEL_19;
          }
        }
      }
    }
LABEL_16:
    ;
  }
  if ( v13 != -2147483622 )
    goto LABEL_16;
  v10 = 0;
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_20:
  ZwClose(KeyHandle);
  return (unsigned int)v10;
}
