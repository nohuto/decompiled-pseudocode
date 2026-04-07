/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180016790
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800183B0 (--1CVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(volatile signed __int32 **this, char a2)
{
  volatile signed __int32 *v4; // rcx
  void *(__fastcall *v5)(CResource *__hidden, unsigned int); // rax
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *this = (volatile signed __int32 *)&CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v4 = this[30];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v4;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1u);
      else
        v5((CResource *)v4, 1u);
    }
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return (CCanvasVisual *)this;
}
