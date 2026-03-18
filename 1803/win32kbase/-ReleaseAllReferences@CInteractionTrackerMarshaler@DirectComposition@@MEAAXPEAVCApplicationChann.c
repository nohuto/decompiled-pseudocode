/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000A8D8 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014DF28 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        struct DirectComposition::CWeakReferenceBase **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  struct DirectComposition::CWeakReferenceBase *v9; // rdx
  struct DirectComposition::CWeakReferenceBase *v10; // rdx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
    (DirectComposition::CInteractionTrackerMarshaler *)this,
    a2);
  v4 = this + 37;
  v5 = 3LL;
  do
  {
    if ( *v4 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v4);
      *v4 = 0LL;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (__int64 *)(this + 29);
  v7 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v6 - 4));
    v8 = *v6;
    *(v6 - 4) = 0LL;
    if ( v8 )
    {
      Win32FreePool(v8);
      *v6 = 0LL;
    }
    v6[4] = 0LL;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = this[23];
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v9);
    this[23] = 0LL;
  }
  v10 = this[24];
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
    this[24] = 0LL;
  }
}
