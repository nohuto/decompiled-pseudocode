/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C0130894
 * Callers:
 *     MouseMove @ 0x1C012E340 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00167A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, int a2, int a3)
{
  __int64 v4; // [rsp+20h] [rbp-88h] BYREF
  int v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+2Ch] [rbp-7Ch]
  int v7; // [rsp+30h] [rbp-78h]
  int v8; // [rsp+34h] [rbp-74h]
  struct tagPOINT v9; // [rsp+40h] [rbp-68h] BYREF

  v4 = 0LL;
  v8 = 0;
  v5 = 0;
  v6 = a2;
  v7 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)&v4, 1);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v9, 0LL);
}
