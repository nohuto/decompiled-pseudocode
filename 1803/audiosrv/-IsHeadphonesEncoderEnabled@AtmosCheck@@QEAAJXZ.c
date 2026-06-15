/*
 * XREFs of ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F800
 * Callers:
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180026870 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x18004EA10 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyStereo@@UEBA_NXZ @ 0x1800FF1F0 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyStereo@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::IsHeadphonesEncoderEnabled(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_BYTE *)this + 74) )
    v3 = *((_DWORD *)this + 26);
  else
    v3 = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
