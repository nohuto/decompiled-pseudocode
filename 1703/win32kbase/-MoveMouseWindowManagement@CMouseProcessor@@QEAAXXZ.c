/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0047A94
 * Callers:
 *     GenerateMouseMove @ 0x1C0045060 (GenerateMouseMove.c)
 * Callees:
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00450E8 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0049F00 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(CMouseProcessor *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  _BYTE *v3; // [rsp+20h] [rbp-B8h] BYREF
  int v4; // [rsp+28h] [rbp-B0h]
  _BYTE v5[72]; // [rsp+30h] [rbp-A8h] BYREF
  LARGE_INTEGER v6; // [rsp+78h] [rbp-60h]
  int v7; // [rsp+80h] [rbp-58h]
  int v8; // [rsp+84h] [rbp-54h]
  int v9; // [rsp+88h] [rbp-50h]

  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v5);
  v7 = 0;
  v8 = 4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 |= 0x10u;
  v6 = PerformanceCounter;
  v4 = 7;
  v3 = v5;
  CMouseProcessor::CMouseRawInput::Initialize(
    (CMouseProcessor *)((char *)this + 2456),
    (const struct CMouseProcessor::CMouseEvent *)&v3);
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)&v3);
}
