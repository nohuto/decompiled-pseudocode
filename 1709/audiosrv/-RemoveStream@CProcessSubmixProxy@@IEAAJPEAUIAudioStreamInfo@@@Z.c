/*
 * XREFs of ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180011FE4
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800121F0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::RemoveStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v5; // rax
  struct IAudioStreamInfo **i; // r8
  struct IAudioStreamInfo **v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v5 = *((_QWORD *)this + 23);
  for ( i = (struct IAudioStreamInfo **)*((_QWORD *)this + 22); i != (struct IAudioStreamInfo **)v5 && *i != a2; ++i )
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
