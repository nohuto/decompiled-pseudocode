/*
 * XREFs of ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x1802D3EEC
 * Callers:
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4170 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ChromeManager@@QEAA@XZ @ 0x1802D3F74 (--0ChromeManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1802D4370 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E34D8 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ChromeManager,ChromeManager,IUnknown * &>(
        ChromeManager **a1,
        struct IUnknown **a2)
{
  ChromeManager *v4; // rax
  int v5; // ebx
  ChromeManager *v6; // rax
  struct IUnknown *v7; // rdx
  ChromeManager *v8; // rdi
  ChromeManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ChromeManager *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ChromeManager::ChromeManager(v4);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    v5 = ChromeManager::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
