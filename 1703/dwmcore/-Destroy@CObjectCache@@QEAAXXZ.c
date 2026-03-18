/*
 * XREFs of ?Destroy@CObjectCache@@QEAAXXZ @ 0x180186054
 * Callers:
 *     ??_GCThreadContext@@AEAAPEAXI@Z @ 0x180185FDC (--_GCThreadContext@@AEAAPEAXI@Z.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018608C (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CObjectCache::Destroy(CObjectCache *this)
{
  _QWORD *v1; // rdi
  void *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    WPF::ProcessHeapImpl::Free(v3);
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
}
