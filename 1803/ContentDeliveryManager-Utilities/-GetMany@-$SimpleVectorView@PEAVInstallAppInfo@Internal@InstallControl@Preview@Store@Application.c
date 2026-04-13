/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18001E190
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  __int64 i; // rbx
  __int64 v13; // rcx

  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD **)(a1 + 40);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 52) != v10[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *a5; i = (unsigned int)(i + 1) )
        {
          v13 = *((_QWORD *)a4 + i);
          if ( v13 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            *((_QWORD *)a4 + i) = 0LL;
          }
          *((_QWORD *)a4 + i) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
