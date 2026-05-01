/*
 * XREFs of ??$MakeAndInitialize@V?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@AEAPEAVCPPIAllUpViewHost@@@Z @ 0x180277C70
 * Callers:
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1802786E8 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x180274CB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CPPIAllUpViewHost>,WeakReference::CWeakReference<CPPIAllUpViewHost>,CPPIAllUpViewHost * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>(v5);
    v8 = v6;
    *v6 = &WeakReference::CWeakReference<CPPIAllUpViewHost>::`vftable';
    v6[2] = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
