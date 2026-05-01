/*
 * XREFs of Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_3745dd06eae282890ba4e64038ebf520___ @ 0x180305D00
 * Callers:
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180306520 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c8d4362bec1eb1c88240d8b1e321cf76___ @ 0x180305C64 (Windows--Internal--ComTaskPool--QueueTask__lambda_c8d4362bec1eb1c88240d8b1e321cf76___.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_3745dd06eae282890ba4e64038ebf520___(
        APTTYPE a1,
        int a2,
        void **a3,
        __int64 a4)
{
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  APTTYPE pAptType; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  CoGetApartmentType(&pAptType, &pAptQualifier);
  v13 = 0;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v15);
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v13;
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_c8d4362bec1eb1c88240d8b1e321cf76___(v7, v6, v8, (__int64)v11);
  if ( v9 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
      v9 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v15, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a3);
  }
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(&v15);
  return (unsigned int)v9;
}
