/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x180015AD8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180030318 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18003ABB0 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x18009B074 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData *this)
{
  char *v1; // rdx
  void *v3; // rdx
  void *v4; // rdx
  void (*v5)(void); // rax
  void (*v6)(void); // rax
  void (*v7)(void); // rax

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 != (char *)this + 686 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v7 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v7();
  }
  v3 = (void *)*((_QWORD *)this + 69);
  if ( v3 != *((void **)this + 70) )
  {
    v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      v5();
    *((_QWORD *)this + 69) = 0LL;
  }
  if ( *((_QWORD *)this + 64) != *((_QWORD *)this + 65) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 64) = 0LL;
  }
  if ( *((_QWORD *)this + 60) != *((_QWORD *)this + 61) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 60) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 55);
  if ( v4 != *((void **)this + 56) )
  {
    v6 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v6 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v6();
    *((_QWORD *)this + 55) = 0LL;
  }
}
