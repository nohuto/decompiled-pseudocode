/*
 * XREFs of ??_GCText@@EEAAPEAXI@Z @ 0x180013FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x18001438C (-ReleaseResources@CText@@AEAAXXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180014FF4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CText *__fastcall CText::`scalar deleting destructor'(CText *this, char a2)
{
  void *v3; // rdx
  void (*v5)(void); // rax
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v3 = (void *)*((_QWORD *)this + 36);
  *(_QWORD *)this = &CText::`vftable';
  if ( v3 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      v5();
    *((_QWORD *)this + 36) = 0LL;
  }
  CText::ReleaseResources(this);
  CRenderDataVisual::~CRenderDataVisual(this);
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
