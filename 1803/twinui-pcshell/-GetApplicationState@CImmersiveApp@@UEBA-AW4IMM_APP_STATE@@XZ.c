/*
 * XREFs of ?GetApplicationState@CImmersiveApp@@UEBA?AW4IMM_APP_STATE@@XZ @ 0x1800499C0
 * Callers:
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003D0D0 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetApplicationState(__int64 a1)
{
  return *(unsigned int *)(a1 + 424);
}
