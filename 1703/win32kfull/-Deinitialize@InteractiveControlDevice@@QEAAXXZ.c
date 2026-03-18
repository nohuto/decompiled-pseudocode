/*
 * XREFs of ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021B3D4 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C021F2FC (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C021F348 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C021F788 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02205D8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220A08 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C0220CC0 (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0222320 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0224AF4 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlDevice::Deinitialize(InteractiveControlDevice *this)
{
  __int64 v1; // rdx
  SimpleHapticsController *v3; // rcx
  SimpleHapticsController *v4; // rcx
  __int64 v5; // rcx
  InteractiveControlInput **v6; // rdi
  InteractiveControlInput *v7; // rsi
  InteractiveControlInput **v8; // rax

  v1 = *((_QWORD *)this + 43);
  if ( v1 )
  {
    FindTimer(0LL, v1, 4u, 1, 0LL);
    *((_QWORD *)this + 43) = 0LL;
  }
  InteractiveControlDevice::SetFocus(this, 0LL, *((unsigned int *)this + 16));
  v3 = (SimpleHapticsController *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    SimpleHapticsController::DeInitialize(v3);
    v4 = (SimpleHapticsController *)*((_QWORD *)this + 47);
    if ( v4 )
      SimpleHapticsController::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 47) = 0LL;
  }
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_QWORD *)this + 42) != -1LL )
    InteractiveControlDevice::DestroyDeadzone(this);
  if ( *(_QWORD *)this )
  {
    RawInputManagerDeviceObjectDereference(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  InteractiveControlParser::FreeDeviceCapabilities((InteractiveControlDevice *)((char *)this + 72));
  v6 = (InteractiveControlInput **)((char *)this + 16);
  while ( *v6 != (InteractiveControlInput *)v6 )
  {
    v7 = *v6;
    v8 = *(InteractiveControlInput ***)*v6;
    if ( *((InteractiveControlInput ***)*v6 + 1) != v6 || v8[1] != v7 )
      __fastfail(3u);
    *v6 = (InteractiveControlInput *)v8;
    v8[1] = (InteractiveControlInput *)v6;
    InteractiveControlInput::`scalar deleting destructor'(v7, 0);
    Win32FreePool(v7);
    --*((_DWORD *)this + 8);
  }
  InteractiveControlDevice::SetTargetWindow(this, 0LL);
  InteractiveControlDevice::SetBackgroundAccessor(this, 0LL, 0);
  *((_DWORD *)this + 2) = 0;
}
