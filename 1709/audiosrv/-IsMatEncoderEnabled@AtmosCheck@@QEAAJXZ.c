/*
 * XREFs of ?IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x1800CE998
 * Callers:
 *     ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ @ 0x1800CE810 (-GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ @ 0x1800CEB50 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::IsMatEncoderEnabled(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = *((_DWORD *)this + 20);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
