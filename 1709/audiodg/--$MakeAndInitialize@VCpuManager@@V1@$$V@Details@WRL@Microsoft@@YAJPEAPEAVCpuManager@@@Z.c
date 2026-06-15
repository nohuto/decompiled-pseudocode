/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x14001B768
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14001B5C4 (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ??0CpuManager@@QEAA@XZ @ 0x14001B800 (--0CpuManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x14001B8A0 (-RuntimeClassInitialize@CpuManager@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x14001B9EC (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  CpuManager *v2; // rax
  CpuManager *v3; // rbx
  int v4; // edi
  CpuManager *v6; // [rsp+58h] [rbp+10h] BYREF
  CpuManager *v7; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = (CpuManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v7 = v2;
    v3 = CpuManager::CpuManager(v2);
    v6 = v3;
    v4 = CpuManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
