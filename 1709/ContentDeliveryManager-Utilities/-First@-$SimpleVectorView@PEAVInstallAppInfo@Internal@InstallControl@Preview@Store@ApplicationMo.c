/*
 * XREFs of ?First@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@345@@Z @ 0x18001B240
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_78896116a8d1e9842f67254d37e2c5b6_::operator() @ 0x18001B2EC (_lambda_78896116a8d1e9842f67254d37e2c5b6_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v2 = a1 - 16;
  v3 = *(_DWORD *)(a1 - 16 + 48);
  v4 = *(_QWORD *)(a1 - 16 + 40);
  v8[0] = a1 - 16;
  v8[1] = &v9;
  if ( v3 >= 0 )
  {
    v5 = lambda_78896116a8d1e9842f67254d37e2c5b6_::operator()(v8);
    v3 = v5;
    if ( *(_DWORD *)(v2 + 52) != *(_DWORD *)(v4 + 88) )
    {
      *(_DWORD *)(v2 + 48) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = *v9;
        *v9 = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
