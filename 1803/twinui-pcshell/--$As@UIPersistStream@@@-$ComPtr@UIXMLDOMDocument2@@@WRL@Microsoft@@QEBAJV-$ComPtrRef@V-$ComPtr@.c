/*
 * XREFs of ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x180145244
 * Callers:
 *     ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1801495B4 (-XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windo.c)
 *     ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019B7F8 (-XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_00000109_0000_0000_c000_000000000046,
           a2);
}
