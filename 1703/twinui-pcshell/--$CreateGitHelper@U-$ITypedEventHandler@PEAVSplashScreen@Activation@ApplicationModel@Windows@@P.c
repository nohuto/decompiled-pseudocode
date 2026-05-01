/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x1800701DC
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18006FA30 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x180070714 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  signed int v7; // edi
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (_QWORD *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>>(&v9);
  v5 = 0LL;
  if ( &v10 != v4 )
  {
    v5 = (_DWORD *)*v4;
    *v4 = 0LL;
  }
  v10 = v5;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v7 = 0;
    if ( v5[12] )
    {
      v7 = v5[13];
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_180244F80 + 32LL))(qword_180244F80);
    }
    v5[12] = 0;
    if ( v7 >= 0 )
    {
      if ( a1 )
      {
        v7 = v5[13];
        if ( v7 < 0 )
          goto LABEL_15;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_180244F80 + 24LL))(
               qword_180244F80,
               a1,
               &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               v5 + 12);
      }
      if ( v7 >= 0 )
        v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v5)(
               v5,
               &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               a2);
    }
  }
LABEL_15:
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v7;
}
