/*
 * XREFs of ?SendToTouchProcessor@CMouseAsTouchAdapter@@AEAAXUtagPOINT@@0IJ_KG@Z @ 0x1C0132134
 * Callers:
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0131F34 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 */

void __fastcall CMouseAsTouchAdapter::SendToTouchProcessor(
        CMouseAsTouchAdapter *this,
        struct tagPOINT a2,
        struct tagPOINT a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned __int16 a7)
{
  int v11; // edx
  void *v12; // r11
  _QWORD v13[12]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[22]; // [rsp+80h] [rbp-80h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v14, 0, 0xA8uLL);
  v11 = *((_DWORD *)this + 17);
  v12 = (void *)*((_QWORD *)this + 1);
  v13[11] = v14;
  LODWORD(v14[15]) = a2.x - v11;
  LODWORD(v13[6]) = 1;
  v13[3] = 1LL;
  LODWORD(v14[17]) = a2.x - v11;
  v13[4] = v12;
  HIDWORD(v14[16]) = v11 + a2.y;
  HIDWORD(v14[18]) = v11 + a2.y;
  HIDWORD(v14[19]) = *((_DWORD *)this + 18);
  LODWORD(v14[10]) = a5;
  LOWORD(v14[1]) = a7;
  v13[5] = a6;
  LODWORD(v14[16]) = v11 + a2.x;
  HIDWORD(v14[15]) = a2.y - v11;
  LODWORD(v14[18]) = v11 + a2.x;
  HIDWORD(v14[17]) = a2.y - v11;
  HIDWORD(v14[14]) = 5;
  v14[6] = a2;
  v14[7] = a3;
  v14[8] = a2;
  v14[9] = a3;
  LODWORD(v14[2]) = 2;
  HIDWORD(v14[3]) = a4;
  v14[12] = a6;
  CTouchProcessor::ProcessMouseInput(
    (CTouchProcessor *)(unsigned int)(a2.y - v11),
    v12,
    (struct RIMCOMPLETEFRAME *)v13,
    (unsigned int)(v11 + a2.x));
}
