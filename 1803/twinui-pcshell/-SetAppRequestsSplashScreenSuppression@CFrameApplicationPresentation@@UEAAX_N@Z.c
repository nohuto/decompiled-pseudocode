/*
 * XREFs of ?SetAppRequestsSplashScreenSuppression@CFrameApplicationPresentation@@UEAAX_N@Z @ 0x180013680
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     <none>
 */

void __fastcall CFrameApplicationPresentation::SetAppRequestsSplashScreenSuppression(
        CFrameApplicationPresentation *this,
        char a2)
{
  *((_BYTE *)this + 541) = a2;
}
