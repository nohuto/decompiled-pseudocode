/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01310D8
 * Callers:
 *     MouseButtonAction @ 0x1C012EDF0 (MouseButtonAction.c)
 * Callees:
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00450E8 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0049F00 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C008237C (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(__int64 a1, int a2, int a3, __int64 *a4)
{
  BOOL v6; // esi
  __int64 v7; // rcx
  BOOL v8; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v10; // xmm0
  __int128 v11; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v13[72]; // [rsp+60h] [rbp-59h] BYREF
  LARGE_INTEGER v14; // [rsp+A8h] [rbp-11h]
  __int64 v15; // [rsp+B0h] [rbp-9h]
  int v16; // [rsp+B8h] [rbp-1h]
  __int128 v17; // [rsp+CCh] [rbp+13h]

  BYTE12(v11) = 0;
  v6 = a2 != 1;
  v7 = *((_QWORD *)gptiCurrent + 47);
  v8 = a3 != 0;
  *(_QWORD *)&v11 = *(_QWORD *)(v7 + 824);
  DWORD2(v11) = *(int *)(v7 + 12) < 0;
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v13);
  v15 = *a4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = v11;
  v16 |= 0x10u;
  v14 = PerformanceCounter;
  *(_QWORD *)&v11 = v13;
  v17 = v10;
  CMouseProcessor::CButtonEvent::CButtonEvent(
    (__int64)v12,
    (unsigned int)(v6 + 1),
    (unsigned int)(v8 + 1),
    0,
    (__int64 *)&v11);
  CMouseProcessor::CMouseRawInput::Initialize(
    (CMouseProcessor::CMouseRawInput *)(a1 + 2456),
    (const struct CMouseProcessor::CMouseEvent *)v12);
  CMouseProcessor::ProcessMouseButton((CMouseProcessor *)a1, (const struct CMouseProcessor::CButtonEvent *)v12);
}
