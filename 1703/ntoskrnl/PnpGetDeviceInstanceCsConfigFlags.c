/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x140559660
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int RegistryValue; // ebx
  PVOID v7; // rcx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = PnpUnicodeStringToWstr(&P, 0LL, a1);
  if ( (int)result >= 0 )
  {
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)P,
                      0x210u,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    PnpUnicodeStringToWstrFree(P, (__int64)a1);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, &P);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
      {
        v7 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
          *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (unsigned int)RegistryValue;
  }
  return result;
}
