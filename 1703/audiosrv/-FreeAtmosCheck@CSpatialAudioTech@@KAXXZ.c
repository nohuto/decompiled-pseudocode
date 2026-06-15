/*
 * XREFs of ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1800C7F9C
 * Callers:
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x1800C7E88 (--1CSpatialAudioTech@@UEAA@XZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004604C (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void CSpatialAudioTech::FreeAtmosCheck(void)
{
  unsigned int v0; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CSpatialAudioTech::s_atmosLock, (__int64)&lpCriticalSection);
  v0 = CSpatialAudioTech::s_uAtmosRefCount;
  if ( CSpatialAudioTech::s_uAtmosRefCount && CSpatialAudioTech::s_spAtmosCheck )
  {
    --CSpatialAudioTech::s_uAtmosRefCount;
    if ( v0 != 1 )
      goto LABEL_7;
  }
  else
  {
    CSpatialAudioTech::s_uAtmosRefCount = 0;
  }
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((volatile signed __int32 **)&CSpatialAudioTech::s_spAtmosCheck);
LABEL_7:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
