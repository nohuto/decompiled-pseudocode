/*
 * XREFs of PipApplyFunctionToServiceInstances @ 0x1405DACFC
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     PnpRegSzToString @ 0x140555E50 (PnpRegSzToString.c)
 *     PipAddDevicesToBootDriverWorker @ 0x14084ED88 (PipAddDevicesToBootDriverWorker.c)
 */

NTSTATUS __fastcall PipApplyFunctionToServiceInstances(
        void *a1,
        UNICODE_STRING *a2,
        ULONG a3,
        char a4,
        HANDLE KeyHandle,
        __int64 a6,
        _DWORD *P)
{
  NTSTATUS result; // eax
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
  result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
  if ( result < 0 )
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
      PnpRegSzToString((_DWORD *)((char *)PoolWithTag + (unsigned int)PoolWithTag[2]), PoolWithTag[3], &v19);
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
  return v10;
}
