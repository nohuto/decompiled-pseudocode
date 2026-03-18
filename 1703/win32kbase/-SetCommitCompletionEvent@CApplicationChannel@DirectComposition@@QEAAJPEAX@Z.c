/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001D57C
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C008D510 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C0081EC8 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2)
{
  struct _ERESOURCE *v4; // rax
  int v5; // edx
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  NTSTATUS v8; // edi
  struct DirectComposition::CEvent *v9; // rax
  DirectComposition::CEvent *v10; // rsi
  struct DirectComposition::CEvent *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( *((_QWORD *)this + 47) || (*((_BYTE *)this + 256) & 8) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v4 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
    v6 = v4;
    if ( v4 )
      memset(v4, 0, sizeof(struct _ERESOURCE));
    else
      v6 = 0LL;
    if ( v6 )
    {
      v8 = DirectComposition::CEvent::Create(a2, v5, &v12);
      if ( v8 < 0 || (v8 = ExInitializeResourceLite(v6), v8 < 0) )
      {
        v10 = v12;
      }
      else
      {
        v9 = v12;
        *((_QWORD *)this + 48) = v6;
        *((_QWORD *)this + 47) = v9;
        v10 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
        Win32FreePool(v6);
      if ( v10 )
        DirectComposition::CEvent::`scalar deleting destructor'(v10, v7);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
