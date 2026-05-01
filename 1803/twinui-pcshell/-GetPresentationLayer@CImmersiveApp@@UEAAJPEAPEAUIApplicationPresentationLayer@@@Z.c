/*
 * XREFs of ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x18004C2F0
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetPresentationLayer(CImmersiveApp *this, struct IApplicationPresentationLayer **a2)
{
  struct IApplicationPresentationLayer *v2; // rbx

  v2 = (struct IApplicationPresentationLayer *)*((_QWORD *)this + 36);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 36));
  *a2 = v2;
  return 0LL;
}
