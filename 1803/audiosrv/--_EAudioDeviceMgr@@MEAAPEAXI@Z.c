/*
 * XREFs of ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x1801166A0
 * Callers:
 *     ??_EAudioDeviceMgr@@OBA@EAAPEAXI@Z @ 0x1800667F0 (--_EAudioDeviceMgr@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x180116590 (--1AudioDeviceMgr@@MEAA@XZ.c)
 */

AudioDeviceMgr *__fastcall AudioDeviceMgr::`vector deleting destructor'(AudioDeviceMgr *this, char a2)
{
  AudioDeviceMgr::~AudioDeviceMgr(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
