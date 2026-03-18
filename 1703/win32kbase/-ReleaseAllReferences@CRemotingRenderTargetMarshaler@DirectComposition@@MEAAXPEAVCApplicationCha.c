/*
 * XREFs of ?ReleaseAllReferences@CRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01445C0
 * Callers:
 *     ?ReleaseAllReferences@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014FED0 (-ReleaseAllReferences@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CRemotingRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 6) = 0LL;
  }
}
