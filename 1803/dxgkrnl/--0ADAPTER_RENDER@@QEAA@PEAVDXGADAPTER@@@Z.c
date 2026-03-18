/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01586C0
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0158DB8 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

ADAPTER_RENDER *__fastcall ADAPTER_RENDER::ADAPTER_RENDER(ADAPTER_RENDER *this, struct DXGADAPTER *a2)
{
  ADAPTER_RENDER *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 32;
  *((_DWORD *)this + 46) = 1;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_BYTE *)this + 536) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 3;
  *((_DWORD *)this + 148) = 17;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 165) = 8;
  *((_DWORD *)this + 166) = 10;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_BYTE *)this + 728) = 0;
  *((_DWORD *)this + 188) = -1;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_BYTE *)this + 776) = 1;
  *((_BYTE *)this + 778) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_WORD *)this + 536) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)((char *)this + 1216),
    0LL,
    0LL,
    0x200u,
    0x40uLL,
    0x4B677844u,
    0);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)((char *)this + 1344),
    0LL,
    0LL,
    0x200u,
    0x488uLL,
    0x4B677844u,
    0);
  *((_DWORD *)this + 368) = 0;
  *((_QWORD *)this + 186) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_BYTE *)this + 1512) = 0;
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)this + 4, NotificationEvent, 1u);
  memset((char *)this + 264, 0, 0xA0uLL);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 63) = -1LL;
  *((_QWORD *)this + 64) = -1LL;
  memset((char *)this + 600, 0, 0x20uLL);
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 87) = (char *)this + 688;
  *((_QWORD *)this + 86) = (char *)this + 688;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 132) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 133) = this;
  *((_QWORD *)this + 130) = 0LL;
  return result;
}
