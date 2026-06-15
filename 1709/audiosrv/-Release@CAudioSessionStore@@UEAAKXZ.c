/*
 * XREFs of ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180086A90
 * Callers:
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F5A0 (--1CPolicyConfig@@UEAA@XZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180083FA0 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180086AC8 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x18007F480 (--1CAudioSessionStore@@AEAA@XZ.c)
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
