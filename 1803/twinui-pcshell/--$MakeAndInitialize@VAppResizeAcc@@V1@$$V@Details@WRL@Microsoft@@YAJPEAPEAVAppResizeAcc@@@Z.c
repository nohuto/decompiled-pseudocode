/*
 * XREFs of ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x1802E56DC
 * Callers:
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E5A44 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppResizeAcc@@QEAA@XZ @ 0x1802E5794 (--0AppResizeAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1802E6094 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeAcc,AppResizeAcc,>(AppResizeAcc **a1)
{
  AppResizeAcc *v2; // rax
  int v3; // ebx
  AppResizeAcc *v4; // rdi
  AppResizeAcc *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (AppResizeAcc *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v6 = AppResizeAcc::AppResizeAcc(v2);
    v4 = v6;
    v3 = AppResizeAcc::RuntimeClassInitialize(v6);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
      v3 = 0;
      *a1 = v4;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
