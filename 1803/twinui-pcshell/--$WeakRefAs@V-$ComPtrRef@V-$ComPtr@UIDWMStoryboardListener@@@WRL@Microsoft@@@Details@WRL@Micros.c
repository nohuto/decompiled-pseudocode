/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007D4B4
 * Callers:
 *     ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180075E60 (-v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077850 (-QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        __int64 *a2)
{
  int v3; // edi
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rax
  int Interface; // eax
  struct IInspectable *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v7);
  if ( v3 >= 0 )
  {
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
      QueryInterface = v7->lpVtbl->QueryInterface;
      if ( (char *)QueryInterface == (char *)CStartExperienceManager::QueryInterface )
        Interface = CStartExperienceManager::QueryInterface(
                      (CStartExperienceManager *)v7,
                      &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e,
                      (void **)a2);
      else
        Interface = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
                      v7,
                      &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e,
                      a2);
      v3 = Interface;
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v7);
  return (unsigned int)v3;
}
