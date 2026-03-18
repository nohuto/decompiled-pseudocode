/*
 * XREFs of ?OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020D3EC
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01AB480 (EditionRimDeviceReadNotification.c)
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C021C4FC (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

int __fastcall OnInteractiveControlInputReport(struct RawInputManagerDeviceObject *a1, void *a2, unsigned int a3)
{
  InteractiveControlManager *v6; // rax

  v6 = InteractiveControlManager::Instance();
  return InteractiveControlManager::OnInputReport(v6, a1, a2, a3);
}
