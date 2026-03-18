/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C019BFF4
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C019D420 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1C01BC2A0 (--0REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??0DXGBLACKBOX@@QEAA@XZ @ 0x1C01EB438 (--0DXGBLACKBOX@@QEAA@XZ.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  DXGGLOBAL *result; // rax
  _OWORD v5[2]; // [rsp+28h] [rbp-39h] BYREF

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
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 10;
  *((_DWORD *)this + 60) = 28;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 70) = -1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 32;
  *((_DWORD *)this + 80) = 1;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 35;
  *((_DWORD *)this + 96) = 1;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 50) = (char *)this + 392;
  *((_QWORD *)this + 49) = (char *)this + 392;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 11;
  *((_DWORD *)this + 110) = 18;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 57) = (char *)this + 448;
  *((_QWORD *)this + 56) = (char *)this + 448;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 123) = 12;
  *((_DWORD *)this + 124) = 1;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 142) = -1;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 632));
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 696));
  *((_QWORD *)this + 95) = 0LL;
  *((_WORD *)this + 440) = 1;
  *(_QWORD *)((char *)this + 884) = 0LL;
  *(_QWORD *)((char *)this + 892) = 1LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 236) = 0;
  *((_DWORD *)this + 237) = 65;
  *((_DWORD *)this + 238) = 1;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((DXGGLOBAL *)((char *)this + 960), 0, 0);
  *((_DWORD *)this + 244) = 0;
  *((_DWORD *)this + 245) = 8;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 250) = 67;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_DWORD *)this + 256) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 275) = 70;
  *((_DWORD *)this + 276) = 32;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 140) = (char *)this + 1112;
  *((_QWORD *)this + 139) = (char *)this + 1112;
  *((_BYTE *)this + 1128) = 0;
  *((_DWORD *)this + 283) = 0;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_DWORD *)this + 292) = 0;
  *((_DWORD *)this + 293) = 70;
  *((_DWORD *)this + 294) = 21;
  *((_QWORD *)this + 145) = 0LL;
  *(_QWORD *)((char *)this + 1188) = 0LL;
  *((_QWORD *)this + 158) = 0x200000000LL;
  *(_QWORD *)((char *)this + 1196) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_DWORD *)this + 324) = 74;
  *((_QWORD *)this + 164) = (char *)this + 1304;
  *((_QWORD *)this + 163) = (char *)this + 1304;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_DWORD *)this + 336) = 0;
  *((_DWORD *)this + 337) = -1;
  *((_DWORD *)this + 338) = 1;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_DWORD *)this + 346) = 0;
  *((_QWORD *)this + 171) = (char *)this + 1360;
  *((_QWORD *)this + 170) = (char *)this + 1360;
  *((_QWORD *)this + 174) = 0LL;
  *((_BYTE *)this + 1400) = 0;
  *((_DWORD *)this + 392) = 0;
  *((_QWORD *)this + 197) = 0LL;
  *((_QWORD *)this + 198) = 0LL;
  *((_QWORD *)this + 199) = 0LL;
  *((_DWORD *)this + 400) = 0;
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_DWORD *)this + 408) = 0;
  *((_DWORD *)this + 409) = 78;
  *((_DWORD *)this + 410) = 1;
  *((_QWORD *)this + 203) = 0LL;
  *((_DWORD *)this + 414) = 0;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_WORD *)this + 848) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 432) = 0;
  *((_DWORD *)this + 433) = -1;
  *((_DWORD *)this + 434) = 14;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *((_DWORD *)this + 446) = 0;
  *((_DWORD *)this + 447) = -1;
  *((_DWORD *)this + 448) = 1;
  *((_QWORD *)this + 222) = 0LL;
  DXGBLACKBOX::DXGBLACKBOX((DXGGLOBAL *)((char *)this + 1800));
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  memset((char *)this + 104, 0, 0x20uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 108);
  *((_QWORD *)this + 154) = (char *)this + 1224;
  *((_QWORD *)this + 153) = (char *)this + 1224;
  memset(v5, 0, sizeof(v5));
  v2 = v5[0];
  *((_BYTE *)this + 696) = 1;
  v3 = v5[1];
  result = this;
  *((_OWORD *)this + 96) = v2;
  *((_OWORD *)this + 97) = v3;
  return result;
}
