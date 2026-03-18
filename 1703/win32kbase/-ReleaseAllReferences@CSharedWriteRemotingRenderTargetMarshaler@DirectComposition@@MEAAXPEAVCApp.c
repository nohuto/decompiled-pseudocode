/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014FED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 9) = 0LL;
  }
  DirectComposition::CRemotingRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
