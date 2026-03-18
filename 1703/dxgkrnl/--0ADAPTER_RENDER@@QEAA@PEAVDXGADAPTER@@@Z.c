/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C010A9A0
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0120958 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
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
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_BYTE *)this + 424) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 119) = 3;
  *((_DWORD *)this + 120) = 20;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 8;
  *((_DWORD *)this + 138) = 12;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_BYTE *)this + 616) = 0;
  *((_DWORD *)this + 160) = -1;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 162) = 0;
  *((_QWORD *)this + 82) = 0LL;
  *((_BYTE *)this + 664) = 1;
  *((_BYTE *)this + 666) = 0;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_WORD *)this + 480) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 276) = 0;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)this + 4, NotificationEvent, 1u);
  memset((char *)this + 256, 0, 0x40uLL);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 50) = -1LL;
  memset((char *)this + 488, 0, 0x20uLL);
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 73) = (char *)this + 576;
  *((_QWORD *)this + 72) = (char *)this + 576;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 118) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 119) = this;
  *((_QWORD *)this + 116) = 0LL;
  return result;
}
