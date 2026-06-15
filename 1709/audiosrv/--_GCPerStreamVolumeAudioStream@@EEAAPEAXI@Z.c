/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18002D920
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z @ 0x180036E20 (--_ECPerStreamVolumeAudioStream@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerStreamVolumeAudioStream@@EEAA@XZ @ 0x18002D804 (--1CPerStreamVolumeAudioStream@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        char a2)
{
  CPerStreamVolumeAudioStream::~CPerStreamVolumeAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
