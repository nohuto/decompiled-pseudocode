/*
 * XREFs of ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CD78
 * Callers:
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z @ 0x18002620C (-CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x18003DB80 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyStereo@@UEBA_NXZ @ 0x1800C80B0 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyStereo@@UEBA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

bool __fastcall AtmosCheck::IsHeadphonesEncoderEnabled(AtmosCheck *this)
{
  char v2; // bl
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v2 = *((_BYTE *)this + 75);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
