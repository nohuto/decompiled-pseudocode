/*
 * XREFs of ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180190950
 * Callers:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B3B14 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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

  if ( *((_DWORD *)this + 124) )
  {
    v2 = (char *)this + 480;
    do
    {
      v3 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      v4 = *(char **)v2;
      v5 = **(_QWORD **)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(char **)(v5 + 8) != v4 )
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
    while ( *((_DWORD *)this + 124) );
  }
  v6 = 0;
  if ( *((int *)this + 138) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(unsigned int **)(v7 + *((_QWORD *)this + 68));
      if ( *((_BYTE *)v8 + 4) )
        NtDCompositionUpdatePointerCapture(0LL, *v8);
      WPF::ProcessHeapImpl::Free(*(void **)(v7 + *((_QWORD *)this + 68)));
      ++v6;
      *(_QWORD *)(v7 + *((_QWORD *)this + 68)) = 0LL;
      v7 += 8LL;
    }
    while ( v6 < *((_DWORD *)this + 138) );
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((__int64)this + 544);
}
