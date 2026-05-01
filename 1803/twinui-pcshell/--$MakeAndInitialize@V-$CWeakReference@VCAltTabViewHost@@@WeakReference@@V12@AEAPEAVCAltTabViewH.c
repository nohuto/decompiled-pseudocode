/*
 * XREFs of ??$MakeAndInitialize@V?$CWeakReference@VCAltTabViewHost@@@WeakReference@@V12@AEAPEAVCAltTabViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCAltTabViewHost@@@WeakReference@@AEAPEAVCAltTabViewHost@@@Z @ 0x180274AA8
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x180275624 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x180274CB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CAltTabViewHost>,WeakReference::CWeakReference<CAltTabViewHost>,CAltTabViewHost * &>(
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
    *v6 = &WeakReference::CWeakReference<CAltTabViewHost>::`vftable';
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
