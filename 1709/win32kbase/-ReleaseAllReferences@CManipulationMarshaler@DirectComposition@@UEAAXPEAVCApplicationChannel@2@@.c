/*
 * XREFs of ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0142150
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CManipulationMarshaler::ReleaseAllReferences(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  struct DirectComposition::CWeakReferenceBase **v4; // rbx
  unsigned int i; // edi

  v4 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 48);
  for ( i = 0; i < 5; ++i )
  {
    if ( *v4 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v4, a3);
      *v4 = 0LL;
    }
    ++v4;
  }
}
