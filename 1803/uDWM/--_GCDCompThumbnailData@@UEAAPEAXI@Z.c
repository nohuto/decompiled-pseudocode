/*
 * XREFs of ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x1800366D0
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002C2E0 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CDCompThumbnailData *__fastcall CDCompThumbnailData::`scalar deleting destructor'(CDCompThumbnailData *this, char a2)
{
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  if ( (a2 & 1) != 0 )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v3(WPF::g_pProcessHeap, this);
  }
  return this;
}
