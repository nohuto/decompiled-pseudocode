/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18000728C
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180001A80 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800028A0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180002E40 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002EC0 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800030C0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x1800040C0 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180007C88 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180009FAC (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000A0E4 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000A280 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x18000A2B0 (--_GCMemoryManager@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_E?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x18000AE90 (--_E-$GitInvokeHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18000AEF0 (--_E-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AF30 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler@PEAUIInspectable@@@F.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AF70 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@VNil@Details@23@V562.c)
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AFA0 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microso.c)
 *     ??_G?$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft@@VNil@Details@56@V7856@V7856@V7856@V7856@V7856@V7856@V7856@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AFD0 (--_G-$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft.c)
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18000B000 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B050 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000C050 (--_GResourceManagerProxy@@UEAAPEAXI@Z.c)
 *     ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000C550 (--_GModernResourceManagerProxy@@UEAAPEAXI@Z.c)
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18000C8D0 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x18000C900 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
