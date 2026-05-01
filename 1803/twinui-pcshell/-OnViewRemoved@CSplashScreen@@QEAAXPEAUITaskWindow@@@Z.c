/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x1801389D0
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x180131D08 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // r14
  struct IUnknown **v5; // rdi
  bool v6; // bl
  __int64 *v7; // r14
  __int64 *v8; // rbx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v11; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v12; // [rsp+58h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 13);
  v5 = (struct IUnknown **)*((_QWORD *)this + 12);
  if ( v5 != v4 )
  {
    v12 = &v11;
    do
    {
      v11 = *v5;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
      v6 = (unsigned int)SHIsSameObject(a2, v11) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      if ( v6 )
        break;
      ++v5;
    }
    while ( v5 != v4 );
  }
  try
  {
    v7 = (__int64 *)*((_QWORD *)this + 13);
    v8 = (__int64 *)(v5 + 1);
    if ( v5 + 1 != (struct IUnknown **)v7 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(v8 - 1, v8);
        ++v8;
      }
      while ( v8 != v7 );
      v7 = (__int64 *)*((_QWORD *)this + 13);
    }
    IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(v7 - 1);
    *((_QWORD *)this + 13) -= 8LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
      v9);
  }
}
