/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0150E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0143E10 (-ReleaseAllReferences@CRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationCha.c)
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
