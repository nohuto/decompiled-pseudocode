/*
 * XREFs of ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18011CDB8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180110654 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ??0CAppViewManager@@QEAA@XZ @ 0x18011D5B0 (--0CAppViewManager@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
        CAppViewManager **a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  CAppViewManager *v5; // rax
  CAppViewManager *v6; // rax
  __int64 v7; // rdx
  CAppViewManager *v8; // rbx
  CAppViewManager *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (CAppViewManager *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CAppViewManager::CAppViewManager(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)v6 + 15, v7);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
