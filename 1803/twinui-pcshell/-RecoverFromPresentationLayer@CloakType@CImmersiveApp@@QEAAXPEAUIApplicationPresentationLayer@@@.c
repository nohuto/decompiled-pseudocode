/*
 * XREFs of ?RecoverFromPresentationLayer@CloakType@CImmersiveApp@@QEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18012FD2C
 * Callers:
 *     ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x18012E770 (-HandleCrashRecovery@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CloakType::RecoverFromPresentationLayer(
        LPCWSTR *this,
        struct IApplicationPresentationLayer *a2)
{
  unsigned int PropW; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)a2 + 96LL))(a2) )
  {
    *(_DWORD *)this = 0;
  }
  else
  {
    *(_DWORD *)this = 1;
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(struct IApplicationPresentationLayer *, __int64 *))(*(_QWORD *)a2 + 128LL))(a2, &v5) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v5 + 24LL))(v5, &hWnd) >= 0 )
    {
      PropW = (unsigned int)GetPropW(hWnd, this[1]);
      if ( PropW )
        *(_DWORD *)this = PropW;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
