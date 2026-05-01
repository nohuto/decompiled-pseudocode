/*
 * XREFs of ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x180138900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801382E8 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSplashScreen::OnActivationEnd(CSplashScreen *this)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  UAPViewWrapper *v4; // [rsp+58h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_DWORD *)this + 34) == 1 )
  {
    *((_DWORD *)this + 34) = 2;
    v4 = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
                (Microsoft::WRL::Details::WeakReferenceImpl **)this + 18,
                &v4) >= 0 )
    {
      v3 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
      (**(void (__fastcall ***)(UAPViewWrapper *, GUID *, __int64 *))v4)(
        v4,
        &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
        &v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
