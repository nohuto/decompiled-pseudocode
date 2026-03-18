/*
 * XREFs of ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C007F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C007F1B4 (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::SetReferenceProperty(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        DirectComposition::CVisualTargetMarshaler **a4,
        bool *a5)
{
  DirectComposition::CVisualTargetMarshaler **v5; // rbx

  v5 = 0LL;
  *a5 = 0;
  if ( a3 == 13 )
  {
    if ( !a4 )
      return DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, v5, a5);
    if ( (*((unsigned __int8 (__fastcall **)(DirectComposition::CVisualTargetMarshaler **, __int64))*a4 + 15))(
           a4,
           134LL) )
    {
      v5 = a4;
      return DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, v5, a5);
    }
  }
  return 3221225485LL;
}
