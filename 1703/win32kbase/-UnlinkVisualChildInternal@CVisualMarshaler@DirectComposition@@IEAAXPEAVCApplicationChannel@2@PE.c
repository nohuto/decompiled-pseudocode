/*
 * XREFs of ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C00173E8
 * Callers:
 *     ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0017170 (-RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z.c)
 *     ?UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C0140F80 (-UnlinkVisualChild@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@PEAV12@@Z.c)
 * Callees:
 *     ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C007B988 (-FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CResourceMarshaler **a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  DirectComposition::CVisualMarshaler *v3; // r9

  v3 = this;
  if ( (*((_DWORD *)a3 + 4) & 2) != 0 )
    DirectComposition::CApplicationChannel::FindAndDequeue(a3, a2 + 53);
  *((_DWORD *)a3 + 4) |= 8u;
  *((_QWORD *)a3 + 1) = *((_QWORD *)v3 + 21);
  *((_QWORD *)v3 + 21) = a3;
}
