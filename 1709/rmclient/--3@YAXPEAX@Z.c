/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18000725C
 * Callers:
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x1800021E0 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180002C10 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180002DC0 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002E50 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002F80 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800062B0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800080B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000A1C0 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000A4F0 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x18000A520 (--_GCMemoryManager@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_e4930aad52d023ff94aaea99e79990d9_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B7A0 (--_G-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandle.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B800 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$0.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B840 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_G?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B870 (--_G-$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@M.c)
 *     ??_G?$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B8A0 (--_G-$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft.c)
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B8D0 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UEAAPEAX.c)
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18000B900 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B950 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000CA90 (--_GResourceManagerProxy@@UEAAPEAXI@Z.c)
 *     ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000CF90 (--_GModernResourceManagerProxy@@UEAAPEAXI@Z.c)
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18000DD20 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x18000DD50 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
