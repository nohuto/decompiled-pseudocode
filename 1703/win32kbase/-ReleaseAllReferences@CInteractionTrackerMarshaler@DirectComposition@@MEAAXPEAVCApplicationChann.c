/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C00197D4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145FD4 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        struct DirectComposition::CWeakReferenceBase **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // r14
  struct DirectComposition::CWeakReferenceBase **v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rcx
  struct DirectComposition::CWeakReferenceBase *v9; // rdx
  struct DirectComposition::CWeakReferenceBase *v10; // rdx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
    (DirectComposition::CInteractionTrackerMarshaler *)this,
    a2);
  v4 = 3LL;
  v5 = this + 34;
  v6 = 3LL;
  do
  {
    if ( *v5 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v5);
      *v5 = 0LL;
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = (__int64 *)(this + 28);
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v7 - 3));
    v8 = *v7;
    *(v7 - 3) = 0LL;
    if ( v8 )
    {
      Win32FreePool(v8);
      *v7 = 0LL;
    }
    v7[3] = 0LL;
    ++v7;
    --v4;
  }
  while ( v4 );
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
