/*
 * XREFs of ??_ECSpatialAudioDolbyHeadphones@@UEAAPEAXI@Z @ 0x1800C7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioTech@@UEAA@XZ @ 0x1800C7E88 (--1CSpatialAudioTech@@UEAA@XZ.c)
 */

CSpatialAudioDolbyHeadphones *__fastcall CSpatialAudioDolbyHeadphones::`vector deleting destructor'(
        CSpatialAudioDolbyHeadphones *this,
        char a2)
{
  CSpatialAudioTech::~CSpatialAudioTech(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x520);
  return this;
}
