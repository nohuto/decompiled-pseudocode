/*
 * XREFs of ??_G?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14003C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003C5EC (--1-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CSystemAudioDeviceOffload>::~CComAggObject<CSystemAudioDeviceOffload>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
