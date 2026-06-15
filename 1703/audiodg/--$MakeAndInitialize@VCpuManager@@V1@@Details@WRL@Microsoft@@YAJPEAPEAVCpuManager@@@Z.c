/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001790
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14000162C (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001728 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x140001830 (--0CpuManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x1400018D0 (-RuntimeClassInitialize@CpuManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager>(CpuManager **a1)
{
  CpuManager *v2; // rax
  CpuManager *v3; // rbx
  int v4; // edi
  CpuManager *v6; // [rsp+50h] [rbp+8h] BYREF
  CpuManager *v7; // [rsp+58h] [rbp+10h]
  CpuManager *v8; // [rsp+60h] [rbp+18h]
  CpuManager *v9; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = 0LL;
  v2 = (CpuManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v3 = CpuManager::CpuManager(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = CpuManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((__int64 *)&v6);
  return (unsigned int)v4;
}
