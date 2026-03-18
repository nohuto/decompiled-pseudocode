/*
 * XREFs of ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021C630 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C022070C (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0220758 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220B98 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02219D0 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221EDC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C022219C (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02237D4 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225FC0 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlDevice::Deinitialize(InteractiveControlDevice *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  SimpleHapticsController *v5; // rcx
  SimpleHapticsController *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rdi
  InteractiveControlInput *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8

  v1 = *((_QWORD *)this + 44);
  if ( v1 )
  {
    FindTimer(0LL, v1, 4u, 1, 0LL);
    *((_QWORD *)this + 44) = 0LL;
  }
  InteractiveControlDevice::SetFocus(this, 0LL, *((unsigned int *)this + 16));
  v5 = (SimpleHapticsController *)*((_QWORD *)this + 48);
  if ( v5 )
  {
    SimpleHapticsController::DeInitialize(v5);
    v6 = (SimpleHapticsController *)*((_QWORD *)this + 48);
    if ( v6 )
      SimpleHapticsController::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 48) = 0LL;
  }
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    Win32FreePool(v7, v3, v4);
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( *((_QWORD *)this + 43) != -1LL )
    InteractiveControlDevice::DestroyDeadzone(this);
  if ( *(_QWORD *)this )
  {
    RawInputManagerDeviceObjectDereference(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  InteractiveControlParser::FreeDeviceCapabilities((InteractiveControlDevice *)((char *)this + 72));
  v9 = (char *)this + 16;
  while ( *(char **)v9 != v9 )
  {
    v10 = *(InteractiveControlInput **)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9
      || (v11 = *(_QWORD *)v10, *(InteractiveControlInput **)(*(_QWORD *)v10 + 8LL) != v10) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    InteractiveControlInput::`scalar deleting destructor'(v10, 0LL, v8);
    Win32FreePool(v10, v12, v13);
    --*((_DWORD *)this + 8);
  }
  InteractiveControlDevice::SetTargetWindow(this, 0LL);
  InteractiveControlDevice::SetBackgroundAccessor(this, 0LL, 0);
  *((_DWORD *)this + 2) = 0;
}
