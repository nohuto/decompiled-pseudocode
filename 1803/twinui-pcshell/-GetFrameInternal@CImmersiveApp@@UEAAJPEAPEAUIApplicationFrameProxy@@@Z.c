/*
 * XREFs of ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C330
 * Callers:
 *     _lambda_b1e4bdca0075c456ca4a487c57ae0709_::operator() @ 0x180008E28 (_lambda_b1e4bdca0075c456ca4a487c57ae0709_--operator().c)
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C6D0 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C950 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetFrameInternal(CImmersiveApp *this, struct IApplicationFrameProxy **a2)
{
  CFrameApplicationPresentation *v2; // rcx
  __int64 (__fastcall *v3)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax

  v2 = (CFrameApplicationPresentation *)*((_QWORD *)this + 36);
  v3 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v2 + 128LL);
  if ( v3 == CFrameApplicationPresentation::GetFrame )
    return CFrameApplicationPresentation::GetFrame(v2, a2);
  else
    return v3(v2, a2);
}
