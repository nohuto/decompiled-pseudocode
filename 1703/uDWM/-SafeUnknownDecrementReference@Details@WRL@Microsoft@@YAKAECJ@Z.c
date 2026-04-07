/*
 * XREFs of ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004DCB4
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073EB0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAUIHolographicDisplayInternal@I.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073F10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@$01@WRL_ea_180073F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownDecrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d

  do
    v2 = *(_DWORD *)this;
  while ( *(_DWORD *)this != 0x7FFFFFFF
       && v2 != _InterlockedCompareExchange((volatile signed __int32 *)this, v2 - 1, v2) );
  return (unsigned int)(v2 - 1);
}
