/*
 * XREFs of ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0087240
 * Callers:
 *     CitSessionConnectChange @ 0x1C0084720 (CitSessionConnectChange.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0086E50 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDesktopSwitch @ 0x1C00870C0 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpIsUserDesktopActive(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return *((_DWORD *)a1 + 134) == 1 && (*((_BYTE *)a1 + 432) & 0x18) == 0x18;
}
