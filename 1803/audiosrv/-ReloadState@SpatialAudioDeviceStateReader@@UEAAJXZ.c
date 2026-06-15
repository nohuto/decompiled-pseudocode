/*
 * XREFs of ?ReloadState@SpatialAudioDeviceStateReader@@UEAAJXZ @ 0x18004D410
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18004CBD0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::ReloadState(SpatialAudioDeviceStateReader *this)
{
  SpatialAudioStateIO *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (SpatialAudioDeviceStateReader *)((char *)this - 568);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 8LL);
  if ( (char *)v2 == (char *)SpatialAudioStateIO::Load )
    return SpatialAudioStateIO::Load(v1);
  else
    return v2();
}
