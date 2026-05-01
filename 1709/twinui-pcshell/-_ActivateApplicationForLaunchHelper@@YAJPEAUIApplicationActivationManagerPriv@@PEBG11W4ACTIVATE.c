/*
 * XREFs of ?_ActivateApplicationForLaunchHelper@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1801CE080
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::Run @ 0x1800E5A70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___--Run.c)
 * Callees:
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1801CDE24 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x1801CE554 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelper(
        IUnknown *a1,
        const WCHAR *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  char *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v11 = (char *)Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&v19);
  v13 = 0LL;
  if ( &a6 != v11 )
  {
    v13 = *(_QWORD *)v11;
    *(_QWORD *)v11 = 0LL;
  }
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v13 == 0 ? 0x8007000E : 0;
  if ( v13 )
  {
    v15 = _ActivateApplicationForLaunchHelperWithWindowFactory(a1, a2, v12, a4, v17, v18, v13, a8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v15;
}
