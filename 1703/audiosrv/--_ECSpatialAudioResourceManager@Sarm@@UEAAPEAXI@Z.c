/*
 * XREFs of ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x1800C2100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800C1D6C (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 */

Sarm::CSpatialAudioResourceManager *__fastcall Sarm::CSpatialAudioResourceManager::`vector deleting destructor'(
        Sarm::CSpatialAudioResourceManager *this,
        char a2)
{
  Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C0);
  return this;
}
