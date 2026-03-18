/*
 * XREFs of ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02219D0
 * Callers:
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C01126B0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C021B2E0 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetBackgroundAccessor(InteractiveControlDevice *this, __int64 a2, int a3)
{
  __int128 v3; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  if ( *((_QWORD *)this + 6) == *((_QWORD *)&v3 + 1) )
  {
    *((_DWORD *)this + 14) |= a3;
  }
  else
  {
    *(_QWORD *)&v3 = (char *)this + 48;
    v6 = v3;
    HMAssignmentLock(&v6);
    *((_DWORD *)this + 14) = a3;
  }
}
