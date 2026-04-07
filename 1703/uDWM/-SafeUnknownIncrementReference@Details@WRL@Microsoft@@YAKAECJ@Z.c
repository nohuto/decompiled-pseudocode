/*
 * XREFs of ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004DCD8
 * Callers:
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800737F8 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAUIHolographicDisplayInt.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180073804 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Micro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownIncrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  do
  {
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) )
      break;
    v2 = *(_DWORD *)this;
  }
  while ( *(_DWORD *)this != 0x7FFFFFFF );
  result = (unsigned int)(v2 + 1);
  if ( v2 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
