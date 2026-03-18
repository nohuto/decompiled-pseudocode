/*
 * XREFs of ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C01404A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00DB450 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler ***a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  DirectComposition::CResourceMarshaler *v3; // r8

  DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(this, a2, a3);
  DirectComposition::CResourceMarshaler::AddRef(v3);
}
