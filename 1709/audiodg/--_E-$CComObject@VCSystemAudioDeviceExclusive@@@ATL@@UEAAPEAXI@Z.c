/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x140039180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140038FA4 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceExclusive *__fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::`vector deleting destructor'(
        CSystemAudioDeviceExclusive *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceExclusive>::~CComObject<CSystemAudioDeviceExclusive>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
