/*
 * XREFs of ?SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z @ 0x18004BE60
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetPreferredAspectRatioHint(CImmersiveApp *this, struct tagSIZE a2)
{
  CFrameApplicationPresentation *v2; // rcx
  __int64 (__fastcall *v3)(CFrameApplicationPresentation *, struct tagSIZE); // rax

  v2 = (CFrameApplicationPresentation *)*((_QWORD *)this + 36);
  v3 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct tagSIZE))(*(_QWORD *)v2 + 280LL);
  if ( v3 == CFrameApplicationPresentation::SetPreferredAspectRatioHint )
    return CFrameApplicationPresentation::SetPreferredAspectRatioHint(v2, a2);
  else
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v3)(v2, a2);
}
