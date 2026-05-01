/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18026AFBC
 * Callers:
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x18026B33C (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??0CPPIAllUpViewService@@QEAA@XZ @ 0x18026B0E8 (--0CPPIAllUpViewService@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802B4D6C (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewService,CPPIAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        CPPIAllUpViewService **a1)
{
  unsigned int v1; // ebx
  CPPIAllUpViewService *v3; // rax
  CPPIAllUpViewService *v4; // rdi
  volatile int *v5; // rdx
  CPPIAllUpViewService *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (CPPIAllUpViewService *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CPPIAllUpViewService::CPPIAllUpViewService(v3);
    v7 = v4;
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)v4 + 48);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)v4,
        v5);
    *a1 = v4;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
