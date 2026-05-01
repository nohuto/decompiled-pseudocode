/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801453B8
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180145CB4 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x1801460A0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180146C90 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180146DC0 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18014729C (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801473C8 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1801478B4 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x18019A580 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019A90C (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019AA3C (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019ACAC (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, a2);
}
