/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180018560
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180014180 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180026260 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CCanvasVisual *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  CResource *(__fastcall *v5)(CResource *, char); // rax
  volatile signed __int32 *v6; // rcx
  CResource *(__fastcall *v7)(CResource *, char); // rax
  CBaseObject *v8; // rcx
  void (__fastcall *v9)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions(this);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = **(CResource *(__fastcall ***)(CResource *, char))v4;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1);
      else
        v5((CResource *)v4, 1);
    }
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( *((_QWORD *)this + 31) != *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 31) = 0LL;
  }
  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CCanvasVisual *)((char *)this + 32));
  CVisual::SetContent(this, 0LL);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(CResource *(__fastcall ***)(CResource *, char))v6;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v6, 1);
      else
        v7((CResource *)v6, 1);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v9 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v9(WPF::g_pProcessHeap, this);
  }
  return this;
}
