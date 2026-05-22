/*
 * XREFs of RegisterManipulationThread @ 0x180005900
 * Callers:
 *     <none>
 * Callees:
 *     ?s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x18000EAC0 (-s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX.c)
 *     IsGetInputHostForWindowHandlePresent @ 0x1800CB3C8 (IsGetInputHostForWindowHandlePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterManipulationThread(int (*a1)(struct _MIT_INPUT_INTEROP_MESSAGE *, void *), void *a2)
{
  int (*v4)(struct _MIT_INPUT_INTEROP_MESSAGE *, void *); // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( (gdwMitConfig & 4) != 0 )
  {
    Win32kInterop::s_RegisterManipulationThreadCallback(a1, a2);
    v4 = 0LL;
    return MITRegisterManipulationThread(v4);
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    v4 = a1;
    return MITRegisterManipulationThread(v4);
  }
  GestureTargetingComponent::s_pfnMTCallback = a1;
  if ( (unsigned __int8)IsGetInputHostForWindowHandlePresent() )
  {
    v7 = 0LL;
    GetInputHostForWindowHandle(0LL, &v7);
    v6 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 1LL;
}
