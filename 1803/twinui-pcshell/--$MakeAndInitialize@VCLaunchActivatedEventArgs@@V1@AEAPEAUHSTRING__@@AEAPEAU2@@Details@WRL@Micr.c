/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@AEAPEAUHSTRING__@@1@Z @ 0x180305B10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___::Run @ 0x1803064A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___--Run.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800277D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArg.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180027BF0 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x180027C5C (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@QEAAXPEAVCLaunchActivatedEventArgs@@@Z @ 0x180080124 (-Attach@-$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@QEAAXPEAVCLaunchActivatedEventArgs@.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ * &,HSTRING__ * &>(
        CLaunchActivatedEventArgs **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  CLaunchActivatedEventArgs *v6; // rax
  int v7; // edi
  CLaunchActivatedEventArgs *v8; // rax
  HSTRING v9; // r8
  CLaunchActivatedEventArgs *v10; // rbx
  __int64 (__fastcall *v11)(__int64); // rax
  CLaunchActivatedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CLaunchActivatedEventArgs *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs(v6);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<CLaunchActivatedEventArgs>::Attach((__int64 *)&v13, (__int64)v8);
    v9 = *a3;
    v10 = v13;
    v7 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v13, *a2, v9);
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
        if ( v11 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef((__int64)v10);
        else
          v11((__int64)v10);
      }
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
