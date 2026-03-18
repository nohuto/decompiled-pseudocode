/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01119FC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116C2C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
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
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_DWORD *)this + 131) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 143) = 3;
  *((_DWORD *)this + 144) = 20;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_DWORD *)this + 161) = 8;
  *((_DWORD *)this + 162) = 12;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_BYTE *)this + 712) = 0;
  *((_DWORD *)this + 184) = -1;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_QWORD *)this + 94) = 0LL;
  *((_BYTE *)this + 760) = 1;
  *((_BYTE *)this + 762) = 0;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_WORD *)this + 528) = 0;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_DWORD *)this + 300) = 0;
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)this + 4, NotificationEvent, 1u);
  memset((char *)this + 256, 0, 0xA0uLL);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 62) = -1LL;
  memset((char *)this + 584, 0, 0x20uLL);
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 85) = (char *)this + 672;
  *((_QWORD *)this + 84) = (char *)this + 672;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 130) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 131) = this;
  *((_QWORD *)this + 128) = 0LL;
  return result;
}
