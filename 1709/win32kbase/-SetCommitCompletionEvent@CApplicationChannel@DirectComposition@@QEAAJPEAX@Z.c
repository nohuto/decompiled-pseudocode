/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C0032B80
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0094820 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C00812EC (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2)
{
  struct _ERESOURCE *v4; // rax
  int v5; // edx
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rdx
  NTSTATUS v8; // edi
  __int64 v9; // r8
  struct DirectComposition::CEvent *v10; // rax
  DirectComposition::CEvent *v11; // rsi
  struct DirectComposition::CEvent *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( *((_QWORD *)this + 45) || (*((_BYTE *)this + 240) & 8) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v4 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v6 = v4;
    if ( v4 )
      memset(v4, 0, sizeof(struct _ERESOURCE));
    else
      v6 = 0LL;
    if ( v6 )
    {
      v8 = DirectComposition::CEvent::Create(a2, v5, &v13);
      if ( v8 < 0 || (v8 = ExInitializeResourceLite(v6), v8 < 0) )
      {
        v11 = v13;
      }
      else
      {
        v10 = v13;
        *((_QWORD *)this + 46) = v6;
        *((_QWORD *)this + 45) = v10;
        v11 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
        Win32FreePool(v6, v7, v9);
      if ( v11 )
        DirectComposition::CEvent::`scalar deleting destructor'(v11, v7);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
