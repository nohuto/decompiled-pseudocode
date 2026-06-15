/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x14001ABE0
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A604 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  return (ATL::CAtlStringMgr *)((char *)this + 16);
}
