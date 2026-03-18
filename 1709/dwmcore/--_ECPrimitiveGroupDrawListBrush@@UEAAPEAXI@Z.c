/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009F110
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x1800701EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2)
{
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  struct CObjectCache *ObjectCache; // rax

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    *((_QWORD *)this + 18) = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v5();
  }
  if ( (a2 & 1) != 0 )
  {
    ObjectCache = CThreadContext::GetObjectCache(v4);
    if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
      ++*((_DWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = this;
    }
  }
  return this;
}
