/*
 * XREFs of _PnpContainerRaiseDevicesChangedEvent @ 0x1405E0AF8
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14054E3A8 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x140781880 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangedEvent(__int64 a1, __int64 a2)
{
  void (__fastcall *v2)(__int64, __int64, __int64); // rdi
  __int64 result; // rax
  DEVPROPKEY **v6; // r14
  __int64 v7; // rbp

  v2 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 320);
  result = 0LL;
  if ( v2 )
  {
    v2(a1, a2, 5LL);
    v6 = off_1402BB4B8;
    v7 = 3LL;
    do
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v2)(a1, a2, 5LL);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
