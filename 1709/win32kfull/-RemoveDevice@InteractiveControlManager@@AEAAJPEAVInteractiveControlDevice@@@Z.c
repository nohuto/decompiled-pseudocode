/*
 * XREFs of ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021C630
 * Callers:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C0112588 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C310 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021B580 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 */

__int64 __fastcall InteractiveControlManager::RemoveDevice(InteractiveControlManager *this, void **a2)
{
  int Device; // esi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, *a2, 0LL, &v8);
  if ( Device >= 0 )
  {
    v4 = v8;
    InteractiveControlDevice::Deinitialize(*((InteractiveControlDevice **)this + v8 + 5));
    Win32FreePool(*((_QWORD *)this + v4 + 5), v5, v6);
    *((_QWORD *)this + v4 + 5) = 0LL;
    --*((_DWORD *)this + 20);
  }
  return (unsigned int)Device;
}
