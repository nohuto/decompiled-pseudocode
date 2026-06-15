/*
 * XREFs of ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14003B080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14003AEC0 (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffload *__fastcall CSystemAudioDeviceOffload::`scalar deleting destructor'(
        CSystemAudioDeviceOffload *this,
        char a2)
{
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
