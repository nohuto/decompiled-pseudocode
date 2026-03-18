/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAAHPEAUMIL_MESSAGE@@_K@Z @ 0x18000BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2, size_t a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // esi
  char *v8; // rbx
  char *v9; // rsi
  __int64 v10; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (char *)this + 64;
  if ( *(char **)v8 == v8 )
  {
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memset_0(a2, 0, a3);
  }
  else
  {
    v9 = *(char **)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD *)v9, *(char **)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memcpy_0(a2, v9 + 16, a3);
    WPF::ProcessHeapImpl::Free(v9);
    v7 = 1;
  }
  LeaveCriticalSection(v3);
  return v7;
}
