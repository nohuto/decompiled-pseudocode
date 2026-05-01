/*
 * XREFs of ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800F79F0
 * Callers:
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180105E60 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18010DF10 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18010E550 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801113C4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180115EF0 (-HandleDestruction@CImmersiveWindowManager@@UEAA-AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveAppli.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180116570 (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180116668 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveAppFinderByApplication *__fastcall CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
        CImmersiveAppFinderByApplication *this,
        struct IImmersiveApplicationInternal *a2)
{
  *(_QWORD *)this = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))a2)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    this);
  return this;
}
