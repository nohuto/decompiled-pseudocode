/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01307E8
 * Callers:
 *     MouseButtonAction @ 0x1C012E2F0 (MouseButtonAction.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00167A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, int a3)
{
  __int16 v4; // ax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  struct tagPOINT v6[3]; // [rsp+28h] [rbp-80h] BYREF
  struct tagPOINT v7; // [rsp+40h] [rbp-68h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = 1;
  if ( a2 != 1 )
    v4 = 4;
  if ( a3 == 1 )
    v4 *= 2;
  LOWORD(v6[0].y) = v4;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v7, (__int64)v6, 2);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v7, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
}
