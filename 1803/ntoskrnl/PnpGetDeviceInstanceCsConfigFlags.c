/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x1405DC58C
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int RegistryValue; // ebx
  PVOID v7; // rcx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = PnpUnicodeStringToWstr((__int16 **)&P, 0LL, a1);
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
