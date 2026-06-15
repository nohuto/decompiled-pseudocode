/*
 * XREFs of ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x14003A800
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005700 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceSharedBase *__fastcall CSystemAudioDeviceSharedBase::`scalar deleting destructor'(
        CSystemAudioDeviceSharedBase *this,
        char a2)
{
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
