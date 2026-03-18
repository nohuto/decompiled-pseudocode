/*
 * XREFs of ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C0140F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00173E8 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler **a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  DirectComposition::CResourceMarshaler *v3; // r8

  DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(this, a2, a3);
  DirectComposition::CResourceMarshaler::AddRef(v3);
}
