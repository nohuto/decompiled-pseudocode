/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001548
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x1400013A4 (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001674 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x1400016B0 (--0CpuManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  unsigned int v2; // edi
  CpuManager *v3; // rax
  CpuManager *v4; // rbx
  _OWORD v6[10]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v7; // [rsp+E8h] [rbp+37h]
  CpuManager *v8; // [rsp+120h] [rbp+6Fh] BYREF
  CpuManager *v9; // [rsp+128h] [rbp+77h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (CpuManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = CpuManager::CpuManager(v3);
    v8 = v4;
    *((_DWORD *)v4 + 68) = 0;
    memset_0(v6, 0, 0xA8uLL);
    *(_OWORD *)((char *)v4 + 280) = v6[0];
    *(_OWORD *)((char *)v4 + 296) = v6[1];
    *(_OWORD *)((char *)v4 + 312) = v6[2];
    *(_OWORD *)((char *)v4 + 328) = v6[3];
    *(_OWORD *)((char *)v4 + 344) = v6[4];
    *(_OWORD *)((char *)v4 + 360) = v6[5];
    *(_OWORD *)((char *)v4 + 376) = v6[6];
    *(_OWORD *)((char *)v4 + 392) = v6[7];
    *(_OWORD *)((char *)v4 + 408) = v6[8];
    *(_OWORD *)((char *)v4 + 424) = v6[9];
    *((_QWORD *)v4 + 55) = v7;
    *((_OWORD *)v4 + 28) = 0u;
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
