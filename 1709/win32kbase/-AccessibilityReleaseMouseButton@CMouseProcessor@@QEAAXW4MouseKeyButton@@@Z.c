/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0130918
 * Callers:
 *     ReleaseMouseButton @ 0x1C012E390 (ReleaseMouseButton.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00167A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  __int16 v3; // ax
  _QWORD v4[3]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-11h] BYREF
  struct tagPOINT v6; // [rsp+40h] [rbp-9h] BYREF

  memset(v4, 0, sizeof(v4));
  v3 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = 2;
    WORD2(v4[0]) = 2;
  }
  if ( (a2 & 2) != 0 )
    WORD2(v4[0]) = v3 | 8;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v6, (__int64)v4, 3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v6, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
}
