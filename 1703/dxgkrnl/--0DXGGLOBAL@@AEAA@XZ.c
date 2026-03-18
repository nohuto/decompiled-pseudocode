/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C0110EA8
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011D064 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  DXGGLOBAL *result; // rax
  __int128 v3; // xmm1
  _OWORD v4[2]; // [rsp+28h] [rbp-39h] BYREF

  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 9;
  *((_DWORD *)this + 42) = 1;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 10;
  *((_DWORD *)this + 58) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 68) = -1;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 32;
  *((_DWORD *)this + 78) = 1;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 35;
  *((_DWORD *)this + 94) = 1;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 49) = (char *)this + 384;
  *((_QWORD *)this + 48) = (char *)this + 384;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 11;
  *((_DWORD *)this + 108) = 21;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 56) = (char *)this + 440;
  *((_QWORD *)this + 55) = (char *)this + 440;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 12;
  *((_DWORD *)this + 122) = 1;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 140) = -1;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 168) = -1;
  KeInitializeEvent((PRKEVENT)((char *)this + 632), NotificationEvent, 0);
  *((_QWORD *)this + 85) = 0LL;
  *((_WORD *)this + 400) = 1;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *(_QWORD *)((char *)this + 812) = 1LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_DWORD *)this + 208) = 0;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 217) = 65;
  *((_DWORD *)this + 218) = 1;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((PVOID *)this + 110, 0, 0);
  *((_DWORD *)this + 224) = 0;
  *((_DWORD *)this + 225) = g_IsMobileCore != 0 ? 4 : 8;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 230) = 67;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 236) = 0;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_DWORD *)this + 255) = 70;
  *((_DWORD *)this + 256) = 32;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 130) = (char *)this + 1032;
  *((_QWORD *)this + 129) = (char *)this + 1032;
  *((_BYTE *)this + 1048) = 0;
  *((_DWORD *)this + 263) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 272) = 0;
  *((_DWORD *)this + 273) = 70;
  *((_DWORD *)this + 274) = 24;
  *((_QWORD *)this + 135) = 0LL;
  *(_QWORD *)((char *)this + 1108) = 0LL;
  *(_QWORD *)((char *)this + 1116) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_BYTE *)this + 1144) = 0;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 295) = 74;
  *((_DWORD *)this + 296) = 1;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 150) = (char *)this + 1192;
  *((_QWORD *)this + 149) = (char *)this + 1192;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  *((_DWORD *)this + 308) = 0;
  *((_DWORD *)this + 309) = -1;
  *((_DWORD *)this + 310) = 1;
  *((_QWORD *)this + 153) = 0LL;
  *((_QWORD *)this + 158) = 0LL;
  *((_DWORD *)this + 318) = 0;
  *((_QWORD *)this + 157) = (char *)this + 1248;
  *((_QWORD *)this + 156) = (char *)this + 1248;
  *((_QWORD *)this + 160) = 0LL;
  *((_BYTE *)this + 1288) = 0;
  *((_DWORD *)this + 364) = 0;
  *(_QWORD *)((char *)this + 1460) = 0LL;
  *(_QWORD *)((char *)this + 1468) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_BYTE *)this + 1488) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  memset((char *)this + 104, 0, 0x20uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 98);
  memset(v4, 0, sizeof(v4));
  result = this;
  v3 = v4[1];
  *((_OWORD *)this + 89) = v4[0];
  *((_OWORD *)this + 90) = v3;
  return result;
}
