/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003BF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14001B340 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
