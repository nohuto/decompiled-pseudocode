/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14003B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003AE2C (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffload *__fastcall ATL::CComObject<CSystemAudioDeviceOffload>::`vector deleting destructor'(
        CSystemAudioDeviceOffload *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceOffload>::~CComObject<CSystemAudioDeviceOffload>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
