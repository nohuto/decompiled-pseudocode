/*
 * XREFs of ?Release@CAudioSessionStore@@UEAAKXZ @ 0x1800318C0
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031018 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180031BD4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180031CCC (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180098850 (--1CPolicyConfig@@UEAA@XZ.c)
 * Callees:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x180031930 (--1CAudioSessionStore@@AEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Release(CAudioSessionStore *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !(_DWORD)result )
  {
    if ( this )
    {
      CAudioSessionStore::~CAudioSessionStore(this);
      operator delete(this, (const struct std::nothrow_t *)0x58);
    }
    return 0LL;
  }
  return result;
}
