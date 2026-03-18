/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C0133BBC
 * Callers:
 *     MouseButtonAction @ 0x1C012E7B0 (MouseButtonAction.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6EC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // ax
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  struct tagPOINT v10[3]; // [rsp+28h] [rbp-80h] BYREF
  struct tagPOINT v11; // [rsp+40h] [rbp-68h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( *((_DWORD *)a1 + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( (unsigned int)(a2 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  memset(v10, 0, sizeof(v10));
  v8 = 1;
  if ( a2 != 1 )
    v8 = 4;
  if ( a3 == 1 )
    v8 *= 2;
  LOWORD(v10[0].y) = v8;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v11, (__int64)v10, 2, 256);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v11, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
}
