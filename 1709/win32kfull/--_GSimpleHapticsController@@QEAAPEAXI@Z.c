/*
 * XREFs of ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0220758
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02237D4 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 */

SimpleHapticsController *__fastcall SimpleHapticsController::`scalar deleting destructor'(
        SimpleHapticsController *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  SimpleHapticsController::DeInitialize(this);
  Win32FreePool(this, v2, v3);
  return this;
}
