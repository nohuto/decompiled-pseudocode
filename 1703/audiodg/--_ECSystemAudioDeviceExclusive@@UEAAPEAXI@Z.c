/*
 * XREFs of ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140039B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14003991C (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
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
