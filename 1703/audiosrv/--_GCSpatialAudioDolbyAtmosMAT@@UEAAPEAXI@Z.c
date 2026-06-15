/*
 * XREFs of ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x1800C7F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x1800C7E88 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDolbyAtmosMAT *__fastcall CSpatialAudioDolbyAtmosMAT::`scalar deleting destructor'(
        CSpatialAudioDolbyAtmosMAT *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x320);
  return this;
}
