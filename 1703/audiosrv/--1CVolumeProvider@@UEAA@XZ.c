/*
 * XREFs of ??1CVolumeProvider@@UEAA@XZ @ 0x1800888D4
 * Callers:
 *     ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x180088910 (--_ECVolumeProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x18007BAA8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180088944 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 */

void __fastcall CVolumeProvider::~CVolumeProvider(CVolumeProvider *this)
{
  *(_QWORD *)this = &CVolumeProvider::`vftable';
  CVolumeProvider::Cleanup(this);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
