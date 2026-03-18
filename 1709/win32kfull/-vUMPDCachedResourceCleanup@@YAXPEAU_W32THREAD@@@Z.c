/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0100CE4
 * Callers:
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0100C10 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     UMPDCachedResourceCleanupWrap @ 0x1C0100CD0 (UMPDCachedResourceCleanupWrap.c)
 * Callees:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C00BAE60 (-Close@PROXYPORT@@QEAAXXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0100D30 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _W32THREAD *a1, __int64 a2, __int64 a3)
{
  struct _UMPDHEAP *v4; // rcx
  void **v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 7);
  if ( v4 )
  {
    DestroyUMPDHeap(v4);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    v5 = (void **)*((_QWORD *)a1 + 8);
    PROXYPORT::Close(&v5, a2, a3);
    *((_QWORD *)a1 + 8) = 0LL;
  }
}
