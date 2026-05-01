/*
 * XREFs of ??$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoaderInternal@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x18026D908
 * Callers:
 *     ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18026DE64 (-CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CIconLoaderInternal@@QEAA@XZ @ 0x18026DB00 (--0CIconLoaderInternal@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CIconLoaderInternal@@QEAAJPEAUIApplicationViewIconLoader@@@Z @ 0x18026EFC0 (-RuntimeClassInitialize@CIconLoaderInternal@@QEAAJPEAUIApplicationViewIconLoader@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIconLoaderInternal,CIconLoaderInternal,IApplicationViewIconLoader * &>(
        CIconLoaderInternal **a1,
        struct IApplicationViewIconLoader **a2)
{
  CIconLoaderInternal *v4; // rax
  int v5; // edi
  CIconLoaderInternal *v6; // rax
  struct IApplicationViewIconLoader *v7; // rdx
  CIconLoaderInternal *v8; // rbx
  CIconLoaderInternal *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CIconLoaderInternal *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CIconLoaderInternal::CIconLoaderInternal(v4);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    v5 = CIconLoaderInternal::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CIconLoaderInternal *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
