/*
 * XREFs of ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18003BB2C
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003B65C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180047C10 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18003BB50 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 */

struct IDCompositionDesktopDevicePartner *__fastcall CDesktopManager::GetDCompositionInteropDevice(CDesktopManager *a1)
{
  if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(a1) < 0 )
    return 0LL;
  else
    return (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
}
