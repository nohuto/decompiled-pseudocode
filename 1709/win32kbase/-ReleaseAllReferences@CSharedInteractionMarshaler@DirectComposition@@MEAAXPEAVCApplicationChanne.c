/*
 * XREFs of ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0021C20 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    ObfDereferenceObject((PVOID)(v5 - 24));
    *((_QWORD *)this + 36) = 0LL;
  }
  DirectComposition::CInteractionMarshaler::ReleaseAllReferences(this, a2, a3);
}
