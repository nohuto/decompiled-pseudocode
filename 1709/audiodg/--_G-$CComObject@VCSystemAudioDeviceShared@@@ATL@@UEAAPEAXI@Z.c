/*
 * XREFs of ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140015D50
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E40 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x140015D84 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceShared>::~CComObject<CSystemAudioDeviceShared>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
