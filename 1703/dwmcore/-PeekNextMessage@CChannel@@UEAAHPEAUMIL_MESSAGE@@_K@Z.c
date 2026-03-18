/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAAHPEAUMIL_MESSAGE@@_K@Z @ 0x18007F900
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2, size_t a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // esi
  __int64 **v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (__int64 **)((char *)this + 64);
  if ( *v8 == (__int64 *)v8 )
  {
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memset_0(a2, 0, a3);
  }
  else
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( a3 >= 0x1C )
      a3 = 28LL;
    memcpy_0(a2, v9 + 2, a3);
    WPF::ProcessHeapImpl::Free(v9);
    v7 = 1;
  }
  LeaveCriticalSection(v3);
  return v7;
}
