/*
 * XREFs of ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00054E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00044C0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 40);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 40) = 0LL;
  }
  DirectComposition::CInteractionMarshaler::ReleaseAllReferences(this, a2);
}
