/*
 * XREFs of ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x180073E90
 * Callers:
 *     <none>
 * Callees:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180075300 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 */

void __fastcall CApplicationViewManager::HandleFlashingChangeForWindow(CApplicationViewManager *this, HWND a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = a2;
  v2[1] = (char *)this - 128;
  CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___((char *)this - 128, v2);
}
