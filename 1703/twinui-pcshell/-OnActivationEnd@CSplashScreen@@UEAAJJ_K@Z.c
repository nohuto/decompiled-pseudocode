/*
 * XREFs of ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x18006F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006FF40 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSplashScreen::OnActivationEnd(CSplashScreen *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v6; // [rsp+40h] [rbp+10h] BYREF
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_DWORD *)this + 32) == 1 )
  {
    *((_DWORD *)this + 32) = 2;
    v7 = 0LL;
    v2 = *((_QWORD *)this + 17);
    v6 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(&v6, &v7) >= 0 )
    {
      v6 = 0LL;
      (**v7)(v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
      v3 = v6;
      if ( v6 )
      {
        v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
    v4 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
