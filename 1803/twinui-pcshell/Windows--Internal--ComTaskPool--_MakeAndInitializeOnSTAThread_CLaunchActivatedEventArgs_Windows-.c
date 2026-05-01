/*
 * XREFs of Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___ @ 0x18007FE10
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5d878536394a9e5d6c15e6b3f5940618___ @ 0x18007FEC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_5d878536394a9e5d6c15e6b3f5940618___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___(
        APTTYPE a1,
        int a2,
        void **a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // al
  int v9; // ebx
  _QWORD v11[3]; // [rsp+28h] [rbp-18h] BYREF
  APTTYPE pAptType; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  v8 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA);
  v13 = 0;
  v15 = 0LL;
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v13;
  v9 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, __int64))Windows::Internal::ComTaskPool::QueueTask__lambda_5d878536394a9e5d6c15e6b3f5940618___)(
         v6,
         (32 * (v8 + 1)) | 1u,
         v7,
         v11,
         -2LL);
  if ( v9 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
      v9 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v15, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
  return (unsigned int)v9;
}
