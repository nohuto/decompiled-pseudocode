/*
 * XREFs of ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00DB450
 * Callers:
 *     ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C01404A0 (-UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z.c)
 * Callees:
 *     ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C00803A4 (-FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler ***a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  DirectComposition::CVisualMarshaler *v3; // r9

  v3 = this;
  if ( ((_DWORD)a3[2] & 2) != 0 )
    DirectComposition::CApplicationChannel::FindAndDequeue(a3, a2 + 51);
  *((_DWORD *)a3 + 4) |= 8u;
  a3[1] = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v3 + 21);
  *((_QWORD *)v3 + 21) = a3;
}
