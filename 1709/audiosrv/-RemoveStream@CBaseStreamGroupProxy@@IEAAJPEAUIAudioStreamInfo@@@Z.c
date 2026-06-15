/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180094AC8
 * Callers:
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800931B0 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180093290 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v5; // rax
  struct IAudioStreamInfo **i; // r8
  struct IAudioStreamInfo **v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v5 = *((_QWORD *)this + 25);
  for ( i = (struct IAudioStreamInfo **)*((_QWORD *)this + 24); i != (struct IAudioStreamInfo **)v5 && *i != a2; ++i )
    ;
  if ( i != (struct IAudioStreamInfo **)v5 )
  {
    v7 = i + 1;
    v8 = 0LL;
    v9 = (v5 - (unsigned __int64)(i + 1) + 7) >> 3;
    if ( (unsigned __int64)(i + 1) > v5 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *i++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
