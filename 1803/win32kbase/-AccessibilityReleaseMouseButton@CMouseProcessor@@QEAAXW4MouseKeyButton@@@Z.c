/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0133D60
 * Callers:
 *     ReleaseMouseButton @ 0x1C012E880 (ReleaseMouseButton.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6EC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  struct tagPOINT v8[3]; // [rsp+28h] [rbp-80h] BYREF
  struct tagPOINT v9; // [rsp+40h] [rbp-68h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *((_DWORD *)a1 + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  memset(v8, 0, sizeof(v8));
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    LOWORD(v8[0].y) = 2;
  LOWORD(v5) = (_DWORD)v6 != 0 ? 2 : 0;
  if ( (a2 & 2) != 0 )
  {
    v6 = (unsigned int)-(int)v6;
    LOWORD(v5) = (_DWORD)v6 != 0 ? 10 : 8;
    LOWORD(v8[0].y) = v5;
  }
  if ( !(_WORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v6);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)v8, 3, 256);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v9, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
}
