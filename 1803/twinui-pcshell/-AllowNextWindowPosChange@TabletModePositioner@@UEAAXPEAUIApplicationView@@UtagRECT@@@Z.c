/*
 * XREFs of ?AllowNextWindowPosChange@TabletModePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1802C3F10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

void __fastcall TabletModePositioner::AllowNextWindowPosChange(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)this + 40, a2);
  *(struct tagRECT *)((char *)this + 344) = *a3;
}
