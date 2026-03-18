/*
 * XREFs of ?OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020A12C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01A80E0 (EditionRimDeviceReadNotification.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

int __fastcall OnInteractiveControlInputReport(struct RawInputManagerDeviceObject *a1, void *a2, unsigned int a3)
{
  InteractiveControlManager *v6; // rax

  v6 = InteractiveControlManager::Instance();
  return InteractiveControlManager::OnInputReport(v6, a1, a2, a3);
}
