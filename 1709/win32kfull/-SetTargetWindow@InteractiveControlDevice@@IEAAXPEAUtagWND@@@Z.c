/*
 * XREFs of ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C022219C
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221EDC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetTargetWindow(InteractiveControlDevice *this, struct tagWND *a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a2;
  v2[0] = (char *)this + 40;
  HMAssignmentLock(v2);
}
