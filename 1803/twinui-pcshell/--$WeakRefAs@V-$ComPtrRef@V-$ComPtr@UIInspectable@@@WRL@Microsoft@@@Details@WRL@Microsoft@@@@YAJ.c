/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801382E8
 * Callers:
 *     ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x180138900 (-OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        UAPViewWrapper **a2)
{
  int v3; // edi
  struct IInspectable *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(a2);
      v3 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, UAPViewWrapper **))v5->lpVtbl->QueryInterface)(
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v5);
  return (unsigned int)v3;
}
