/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C00BA0AC
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C00B8F30 (FreeNonCachedUserMemWrap.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00BA100 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C00B9710 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0100D30 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  struct _UMPDHEAP *v6; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 49) = 0LL;
  }
  else if ( *((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    v6 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *(struct _UMPDHEAP **)(ThreadWin32Thread + 56) != v6 )
      DestroyUMPDHeap(v6);
    *((_QWORD *)this + 7) = 0LL;
  }
}
