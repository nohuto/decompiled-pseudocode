/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000A618
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0013AA0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000136C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v6; // rax
  int v7; // edi
  DirectComposition::CEvent *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (unsigned int)-1073741790;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
  {
    if ( !a3 )
      goto LABEL_7;
    return (unsigned int)-1073741790;
  }
  if ( a3 )
  {
    v6 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
    v3 = v6;
    if ( v6 )
      memset(v6, 0, sizeof(struct _ERESOURCE));
    else
      v3 = 0LL;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
LABEL_7:
  v7 = DirectComposition::CEvent::Create(a2, (__int64)a2, &v9);
  if ( v7 < 0 )
    goto LABEL_17;
  if ( v3 )
    v7 = ExInitializeResourceLite(v3);
  if ( v7 < 0 )
  {
LABEL_17:
    if ( v3 )
      Win32FreePool(v3);
    if ( v9 )
      DirectComposition::CEvent::`scalar deleting destructor'(v9);
  }
  else
  {
    *((_QWORD *)this + 45) = v9;
    *((_QWORD *)this + 46) = v3;
  }
  return (unsigned int)v7;
}
