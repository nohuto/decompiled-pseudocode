/*
 * XREFs of ??_GCBackdropRegion@@UEAAPEAXI@Z @ 0x180030B50
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

CBackdropRegion *__fastcall CBackdropRegion::`scalar deleting destructor'(CBackdropRegion *this, char a2)
{
  char *v2; // rdi

  v2 = (char *)this + 16;
  *(_QWORD *)this = &CBackdropRegion::`vftable';
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 24LL);
  if ( *(_QWORD *)v2 != *((_QWORD *)v2 + 1) )
  {
    WPF::ProcessHeapImpl::Free(*(void **)v2);
    *(_QWORD *)v2 = 0LL;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
