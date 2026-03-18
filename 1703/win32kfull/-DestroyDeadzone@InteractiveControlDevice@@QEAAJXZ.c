/*
 * XREFs of ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C021F788
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0220140 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::DestroyDeadzone(InteractiveControlDevice *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 30);
  if ( !v2 || *((_QWORD *)this + 42) == -1LL )
    return 3221225485LL;
  result = RIMDestroyPointerDeviceDeadzone(v2 + 64);
  *((_QWORD *)this + 42) = -1LL;
  *((_DWORD *)this + 82) = 0;
  return result;
}
