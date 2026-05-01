/*
 * XREFs of ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@Z @ 0x18023B2E8
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802425D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BEI@AA @ 0x1800AE840 (--_9IPropertyValue@Foundation@Windows@@$BEI@AA.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=2
__int64 SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),TouchKeyboardExperienceManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 112) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v6 =  Windows::Foundation::IPropertyValue::`vcall'{72,{flat}}(a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v11 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)va);
      v9[0] = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9);
      v9[1] = (__int64) Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a1,
        v8);
      *(_QWORD *)a1 = off_1803213E8;
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( (__int64 *)(a1 + 8) != v9 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v9[0] = 0LL;
      }
      *(_QWORD *)(a1 + 16) =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      *(_QWORD *)(a1 + 104) = a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
