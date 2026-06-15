/*
 * XREFs of ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x1800CE8E0
 * Callers:
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x1800CEB80 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::IsHeadphonesEncoderEnabled(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = *((_DWORD *)this + 21);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
