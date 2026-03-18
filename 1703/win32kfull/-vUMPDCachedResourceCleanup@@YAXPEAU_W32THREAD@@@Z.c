/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F31CC
 * Callers:
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F3100 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     UMPDCachedResourceCleanupWrap @ 0x1C00F31C0 (UMPDCachedResourceCleanupWrap.c)
 * Callees:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C00390C4 (-Close@PROXYPORT@@QEAAXXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C00F3218 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _W32THREAD *a1)
{
  struct _UMPDHEAP *v2; // rcx
  void **v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 7);
  if ( v2 )
  {
    DestroyUMPDHeap(v2);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    v3 = (void **)*((_QWORD *)a1 + 8);
    PROXYPORT::Close(&v3);
    *((_QWORD *)a1 + 8) = 0LL;
  }
}
