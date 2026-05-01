/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18012F940
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UISplashScreen@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012D5FC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18012D5FC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::QueryService(
        CImmersiveApp *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r9
  int Service; // ebx
  RTL_SRWLOCK *v15; // rsi
  __int64 (__fastcall *v16)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF

  punk[1] = (IUnknown *)-2LL;
  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data4;
  if ( v7 )
  {
    v15 = (RTL_SRWLOCK *)((char *)this - 192);
    punk[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
    v16 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v15->Ptr + 4);
    if ( v16 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v15, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
    else
      v16(v15, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
    Service = IUnknown_QueryService(punk[0], a2, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
  }
  else
  {
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v10 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      return 0;
    }
    if ( InlineIsEqualGUID(v11, &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24) )
    {
      *v13 = v12;
      Service = 0;
LABEL_9:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
      return (unsigned int)Service;
    }
    Service = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISplashScreen,Microsoft::WRL::FtmBase>::CanCastTo(
                v12 + 8,
                a3);
    if ( Service >= 0 )
      goto LABEL_9;
  }
  return (unsigned int)Service;
}
