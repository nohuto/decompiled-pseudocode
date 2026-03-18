/*
 * XREFs of ?UnlinkVisualChild@CVisualTargetMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@@Z @ 0x1C009C920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::UnlinkVisualChild(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3)
{
  *((_DWORD *)this + 4) |= 0x20u;
}
