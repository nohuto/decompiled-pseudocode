/*
 * XREFs of ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1800FEED0
 * Callers:
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x1800FEDCC (--1CSpatialAudioTech@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F278 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void CSpatialAudioTech::FreeAtmosCheck(void)
{
  unsigned int v0; // eax

  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v0 = CSpatialAudioTech::s_uAtmosRefCount;
  if ( !CSpatialAudioTech::s_uAtmosRefCount || !CSpatialAudioTech::s_spAtmosCheck )
  {
    CSpatialAudioTech::s_uAtmosRefCount = 0;
LABEL_6:
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&CSpatialAudioTech::s_spAtmosCheck);
    goto LABEL_7;
  }
  --CSpatialAudioTech::s_uAtmosRefCount;
  if ( v0 == 1 )
    goto LABEL_6;
LABEL_7:
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
}
