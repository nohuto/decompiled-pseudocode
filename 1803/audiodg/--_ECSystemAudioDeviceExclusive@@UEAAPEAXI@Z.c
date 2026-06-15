/*
 * XREFs of ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140037E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140037C98 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 */

CSystemAudioDeviceExclusive *__fastcall CSystemAudioDeviceExclusive::`vector deleting destructor'(
        CSystemAudioDeviceExclusive *this,
        char a2)
{
  CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
