/*
 * XREFs of ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01574F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000D060 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0046708 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

void __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  if ( *((_DWORD *)this + 70) )
  {
    DirectComposition::CConnection::ReleaseSystemResource(*((_QWORD *)a2 + 5), *((_DWORD *)this + 70));
    *((_DWORD *)this + 70) = 0;
  }
}
