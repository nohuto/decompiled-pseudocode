/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002FE88 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::`vector deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
