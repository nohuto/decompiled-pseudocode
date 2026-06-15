/*
 * XREFs of ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x1800CE584
 * Callers:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800CDFD4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x1800CDC8C (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800E3C7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct AtmosCheck *CSpatialAudioTech::GetAtmosCheck(void)
{
  unsigned int v0; // eax
  __int64 *v1; // rax
  AtmosCheck *v2; // rcx
  AtmosCheck *v3; // rbx
  AtmosCheck *v5; // [rsp+40h] [rbp+8h] BYREF
  AtmosCheck *v6; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h]

  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v7 = &CSpatialAudioTech::s_atmosLock;
  v0 = CSpatialAudioTech::s_uAtmosRefCount + 1;
  CSpatialAudioTech::s_uAtmosRefCount = v0;
  if ( v0 == 1 )
  {
    v1 = (__int64 *)Microsoft::WRL::Details::Make<AtmosCheck,>(&v6);
    v2 = 0LL;
    if ( &v5 != (AtmosCheck **)v1 )
    {
      v2 = (AtmosCheck *)*v1;
      *v1 = 0LL;
    }
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_spAtmosCheck = v2;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v5);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v6);
    v3 = CSpatialAudioTech::s_spAtmosCheck;
    if ( CSpatialAudioTech::s_spAtmosCheck )
    {
      if ( (int)AtmosCheck::Initialize(CSpatialAudioTech::s_spAtmosCheck) < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&CSpatialAudioTech::s_spAtmosCheck);
        CSpatialAudioTech::s_uAtmosRefCount = 0;
      }
      v3 = CSpatialAudioTech::s_spAtmosCheck;
    }
  }
  else
  {
    v3 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_uAtmosRefCount = CSpatialAudioTech::s_spAtmosCheck != 0LL ? v0 : 0;
  }
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  return v3;
}
