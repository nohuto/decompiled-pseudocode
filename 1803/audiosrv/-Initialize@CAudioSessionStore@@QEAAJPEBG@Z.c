/*
 * XREFs of ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x1800426C8
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180042990 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180041F60 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Initialize(CAudioSessionStore *this, char *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  char *v7; // rax
  int PropertyStore; // ebx
  signed int LastError; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a2[2 * v4] );
  v5 = v4 + 1;
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 2) = v7;
  if ( v7 )
    PropertyStore = StringCchCopyW(v7, v5, a2);
  else
    PropertyStore = -2147024882;
  if ( PropertyStore < 0 )
    goto LABEL_15;
  if ( !InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((char *)this + 48), 0xFA0u) )
  {
    LastError = GetLastError();
    PropertyStore = LastError;
    if ( LastError > 0 )
      PropertyStore = (unsigned __int16)LastError | 0x80070000;
  }
  if ( PropertyStore < 0 || (PropertyStore = CAudioSessionStore::LoadPropertyStore(this), PropertyStore < 0) )
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::Initialize", 0x134Eu, PropertyStore);
  return (unsigned int)PropertyStore;
}
