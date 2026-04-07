/*
 * XREFs of ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800737D0
 * Callers:
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180072A50 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073E20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAUIHolographicDisplayInt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InlineIsEqualGUID(const struct _GUID *a1, const struct _GUID *a2)
{
  return a1->Data1 == a2->Data1
      && *(_DWORD *)&a1->Data2 == *(_DWORD *)&a2->Data2
      && *(_DWORD *)a1->Data4 == *(_DWORD *)a2->Data4
      && *(_DWORD *)&a1->Data4[4] == *(_DWORD *)&a2->Data4[4];
}
