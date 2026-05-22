/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800320A4 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180032AE0 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032C40 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800351DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  int v7; // ebx
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  __int64 v14; // [rsp+218h] [rbp+118h]
  __int16 v15; // [rsp+23Ah] [rbp+13Ah]
  __int16 v16; // [rsp+23Ch] [rbp+13Ch]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v11, 0, 0x6C8uLL);
  v12 = PerformanceCount;
  v14 = *((_QWORD *)this + 240);
  v16 = 64;
  v13 = 1736;
  v11[0] = 4;
  v11[2] = TickCount;
  v15 = a2;
  if ( !a3 )
    v16 = 65;
  if ( *((_BYTE *)this + 4880) )
  {
    v8 = *((_QWORD *)this + 486);
    v11[1] = *((_DWORD *)this + 974);
    v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 24LL))(v8, v11);
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  else
  {
    v7 = -2147418113;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v7;
}
