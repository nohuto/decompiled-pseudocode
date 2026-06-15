/*
 * XREFs of ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180045DB4
 * Callers:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180040860 (--0CSpatialAudioTech@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ??$Make@VAtmosCheck@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180045F24 (--$Make@VAtmosCheck@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004604C (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
struct AtmosCheck *CSpatialAudioTech::GetAtmosCheck(void)
{
  unsigned int v0; // edx
  AtmosCheck *v1; // rbx
  AtmosCheck **v3; // rax
  AtmosCheck *v4; // rcx
  __int64 v5; // rdx
  struct _FILETIME v6; // r8
  AtmosCheck *v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CSpatialAudioTech::s_atmosLock, (__int64)&lpCriticalSection);
  v0 = CSpatialAudioTech::s_uAtmosRefCount + 1;
  CSpatialAudioTech::s_uAtmosRefCount = v0;
  if ( v0 == 1 )
  {
    v3 = (AtmosCheck **)Microsoft::WRL::Details::Make<AtmosCheck>(&v8);
    v4 = 0LL;
    if ( &v7 != v3 )
    {
      v4 = *v3;
      *v3 = 0LL;
    }
    v7 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_spAtmosCheck = v4;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v8);
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    if ( CSpatialAudioTech::s_spAtmosCheck )
    {
      if ( (int)AtmosCheck::Initialize((__int64)CSpatialAudioTech::s_spAtmosCheck, v5, v6) < 0 )
      {
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
        CSpatialAudioTech::s_uAtmosRefCount = 0;
      }
      v1 = CSpatialAudioTech::s_spAtmosCheck;
    }
  }
  else
  {
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_uAtmosRefCount = CSpatialAudioTech::s_spAtmosCheck != 0LL ? v0 : 0;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v1;
}
