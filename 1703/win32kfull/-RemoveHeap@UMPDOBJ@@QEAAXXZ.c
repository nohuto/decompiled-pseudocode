/*
 * XREFs of ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0097FB8
 * Callers:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0097CFC (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C00F3218 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall UMPDOBJ::RemoveHeap(UMPDOBJ *this)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v4; // rcx

  if ( *((_QWORD *)this + 7) )
  {
    v2 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    v4 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *(struct _UMPDHEAP **)(v2 + 56) != v4 )
      DestroyUMPDHeap(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
