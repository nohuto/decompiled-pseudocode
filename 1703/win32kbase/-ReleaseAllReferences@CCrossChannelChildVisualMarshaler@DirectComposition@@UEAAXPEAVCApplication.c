/*
 * XREFs of ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C001492C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0017BC0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  if ( *((_DWORD *)this + 60) )
  {
    DirectComposition::CConnection::ReleaseSystemResource(*((_QWORD *)a2 + 5), *((_DWORD *)this + 60));
    *((_DWORD *)this + 60) = 0;
  }
}
