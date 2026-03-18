/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145A08 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        struct DirectComposition::CWeakReferenceBase **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // r8
  struct DirectComposition::CWeakReferenceBase **v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx
  struct DirectComposition::CWeakReferenceBase *v11; // rdx
  struct DirectComposition::CWeakReferenceBase *v12; // rdx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
    (DirectComposition::CInteractionTrackerMarshaler *)this,
    a2);
  v5 = this + 37;
  v6 = 3LL;
  do
  {
    if ( *v5 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v5, v4);
      *v5 = 0LL;
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = (__int64 *)(this + 29);
  v8 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v7 - 4));
    v10 = *v7;
    *(v7 - 4) = 0LL;
    if ( v10 )
    {
      Win32FreePool(v10);
      *v7 = 0LL;
    }
    v7[4] = 0LL;
    ++v7;
    --v8;
  }
  while ( v8 );
  v11 = this[23];
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v11, v9);
    this[23] = 0LL;
  }
  v12 = this[24];
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v12, v9);
    this[24] = 0LL;
  }
}
