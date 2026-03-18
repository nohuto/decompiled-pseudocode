/*
 * XREFs of ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 32) = 0LL;
  }
  DirectComposition::CInteractionMarshaler::ReleaseAllReferences(this, a2);
}
