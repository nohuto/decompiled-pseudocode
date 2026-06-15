/*
 * XREFs of ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x1400018D0
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001790 (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

__int64 __fastcall CpuManager::RuntimeClassInitialize(CpuManager *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-C8h]
  _OWORD v13[11]; // [rsp+30h] [rbp-B8h] BYREF

  *((_DWORD *)this + 68) = 0;
  LODWORD(v13[0]) = 0;
  memset((char *)v13 + 8, 0, 0xA0uLL);
  LOWORD(v12) = 0;
  v2 = v13[1];
  *(_OWORD *)((char *)this + 280) = v13[0];
  v3 = v13[2];
  *(_OWORD *)((char *)this + 296) = v2;
  v4 = v13[3];
  *(_OWORD *)((char *)this + 312) = v3;
  v5 = v13[4];
  *(_OWORD *)((char *)this + 328) = v4;
  v6 = v13[5];
  *(_OWORD *)((char *)this + 344) = v5;
  v7 = v13[6];
  *(_OWORD *)((char *)this + 360) = v6;
  v8 = v13[8];
  *(_OWORD *)((char *)this + 376) = v7;
  *(_OWORD *)((char *)this + 392) = v13[7];
  v9 = v13[9];
  v10 = *(_QWORD *)&v13[10];
  *(_OWORD *)((char *)this + 408) = v8;
  *(_OWORD *)((char *)this + 424) = v9;
  *((_QWORD *)this + 55) = v10;
  result = 0LL;
  *((_OWORD *)this + 28) = v12;
  return result;
}
