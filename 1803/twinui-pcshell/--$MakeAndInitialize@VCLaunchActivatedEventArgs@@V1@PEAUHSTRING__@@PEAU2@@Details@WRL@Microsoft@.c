/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180080070
 * Callers:
 *     _lambda_5d878536394a9e5d6c15e6b3f5940618_::operator() @ 0x18007FFAC (_lambda_5d878536394a9e5d6c15e6b3f5940618_--operator().c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800277D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArg.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180027BF0 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x180027C5C (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@QEAAXPEAVCLaunchActivatedEventArgs@@@Z @ 0x180080124 (-Attach@-$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@QEAAXPEAVCLaunchActivatedEventArgs@.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
        CLaunchActivatedEventArgs **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  CLaunchActivatedEventArgs *v6; // rax
  CLaunchActivatedEventArgs *v7; // rax
  HSTRING v8; // r8
  CLaunchActivatedEventArgs *v9; // rbx
  int v10; // edi
  __int64 (__fastcall *v11)(__int64); // rax
  CLaunchActivatedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CLaunchActivatedEventArgs *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs(v6);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<CLaunchActivatedEventArgs>::Attach(&v13, v7);
    v8 = *a3;
    v9 = v13;
    v10 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v13, *a2, v8);
    if ( v10 >= 0 )
    {
      if ( v9 )
      {
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL);
        if ( v11 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef((__int64)v9);
        else
          v11((__int64)v9);
      }
      *a1 = v9;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
