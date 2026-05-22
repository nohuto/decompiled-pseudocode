/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18003DD50 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x18003DFA0 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800407DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  _DWORD *v7; // rdx
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[356]; // [rsp+38h] [rbp-C8h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset(v12, 0, sizeof(v12));
  v7 = (_DWORD *)*((_QWORD *)this + 4);
  HIDWORD(v12[0]) = *v7;
  v8 = v7[1];
  v12[2] = PerformanceCount.QuadPart;
  v12[83] = *((_QWORD *)this + 37);
  WORD2(v12[87]) = 64;
  LODWORD(v12[0]) = v8;
  LODWORD(v12[1]) = TickCount;
  LODWORD(v12[5]) = 2848;
  WORD1(v12[87]) = a2;
  if ( !a3 )
    WORD2(v12[87]) = 65;
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 30) + 48LL))(
                      *((_QWORD *)this + 30),
                      v12);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 12, 2044, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
