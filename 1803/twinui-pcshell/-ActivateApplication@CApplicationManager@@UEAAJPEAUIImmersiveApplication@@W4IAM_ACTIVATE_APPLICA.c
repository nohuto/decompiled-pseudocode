/*
 * XREFs of ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180044D10
 * Callers:
 *     ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18001C970 (-SetFocus@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::ActivateApplication(
        __int64 a1,
        struct IImmersiveApplication *a2,
        unsigned int a3)
{
  return CApplicationManager::ActivateApplicationInternal(a1 + 88, a3, a2);
}
