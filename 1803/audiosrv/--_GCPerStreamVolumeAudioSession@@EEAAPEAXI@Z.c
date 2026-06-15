/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x180041DF8
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x180065830 (--_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180041E2C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::`scalar deleting destructor'(
        CPerStreamVolumeAudioSession *this,
        char a2)
{
  CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x448);
  return this;
}
