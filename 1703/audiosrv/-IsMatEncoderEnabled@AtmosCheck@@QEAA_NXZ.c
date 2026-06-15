/*
 * XREFs of ?IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CDAC
 * Callers:
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z @ 0x18002620C (-CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z.c)
 *     ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ @ 0x18003D930 (-GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ @ 0x1800C8080 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

bool __fastcall AtmosCheck::IsMatEncoderEnabled(AtmosCheck *this)
{
  char v2; // bl
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v2 = *((_BYTE *)this + 74);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
