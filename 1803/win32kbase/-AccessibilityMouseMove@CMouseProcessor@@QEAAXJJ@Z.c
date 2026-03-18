/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C0133CB4
 * Callers:
 *     MouseMove @ 0x1C012E800 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6EC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 v6; // [rsp+20h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+2Ch] [rbp-7Ch]
  __int64 v9; // [rsp+30h] [rbp-78h]
  struct tagPOINT v10; // [rsp+40h] [rbp-68h] BYREF

  v4 = a2;
  if ( *((_DWORD *)this + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v6 = 0LL;
  v7 = 0;
  v8 = v4;
  v9 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v10, (__int64)&v6, 1, 256);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v10, 0LL);
}
