/*
 * XREFs of ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145FD4
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145EF0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0146080 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned int i; // esi

  if ( *((_QWORD *)this + 37) )
  {
    for ( i = 0; i < *((_DWORD *)this + 76); ++i )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 37) + 16LL * i));
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 37) + 16LL * i + 8));
    }
    Win32FreePool(*((_QWORD *)this + 37));
    *((_QWORD *)this + 37) = 0LL;
    *((_DWORD *)this + 76) = 0;
    *((_DWORD *)this + 77) = 0;
  }
}
