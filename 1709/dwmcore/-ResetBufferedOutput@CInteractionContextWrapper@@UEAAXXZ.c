/*
 * XREFs of ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18019F060
 * Callers:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B7BE4 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CInteractionContextWrapper::ResetBufferedOutput(CInteractionContextWrapper *this)
{
  char *v2; // rdi
  void *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rdi
  unsigned int *v8; // rcx

  if ( *((_DWORD *)this + 138) )
  {
    v2 = (char *)this + 536;
    do
    {
      v3 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      v4 = *(char **)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v2 = v5;
      *(_QWORD *)(v5 + 8) = v2;
      if ( v4 != v2 )
      {
        v3 = (void *)*((_QWORD *)v4 + 2);
        WPF::ProcessHeapImpl::Free(v4);
        --*((_DWORD *)v2 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      WPF::ProcessHeapImpl::Free(v3);
    }
    while ( *((_DWORD *)this + 138) );
  }
  v6 = 0;
  if ( *((int *)this + 152) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(unsigned int **)(v7 + *((_QWORD *)this + 75));
      if ( *((_BYTE *)v8 + 4) )
        NtDCompositionUpdatePointerCapture(0LL, *v8);
      WPF::ProcessHeapImpl::Free(*(void **)(v7 + *((_QWORD *)this + 75)));
      ++v6;
      *(_QWORD *)(v7 + *((_QWORD *)this + 75)) = 0LL;
      v7 += 8LL;
    }
    while ( v6 < *((_DWORD *)this + 152) );
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((__int64)this + 600);
}
