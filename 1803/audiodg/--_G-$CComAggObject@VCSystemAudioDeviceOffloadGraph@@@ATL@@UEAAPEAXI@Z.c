/*
 * XREFs of ??_G?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14003C950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14003C71C (--1-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::~CComAggObject<CSystemAudioDeviceOffloadGraph>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
