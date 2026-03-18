/*
 * XREFs of ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0149330
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000A8D8 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CManipulationMarshaler::ReleaseAllReferences(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v3; // rbx
  unsigned int i; // edi
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v3 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 48);
  for ( i = 0; i < 5; ++i )
  {
    if ( *v3 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v3);
      *v3 = 0LL;
    }
    ++v3;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 86);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 86) = 0LL;
  }
}
