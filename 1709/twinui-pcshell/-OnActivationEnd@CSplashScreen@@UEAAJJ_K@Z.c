/*
 * XREFs of ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x180072610
 * Callers:
 *     <none>
 * Callees:
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180072C34 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSplashScreen::OnActivationEnd(CSplashScreen *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_DWORD *)this + 36) == 1 )
  {
    *((_DWORD *)this + 36) = 2;
    v6 = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
                (char *)this + 152,
                &v6) >= 0 )
    {
      v5 = 0LL;
      (**v6)(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
      v2 = v5;
      if ( v5 )
      {
        v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      }
    }
    v3 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
