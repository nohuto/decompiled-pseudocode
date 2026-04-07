/*
 * XREFs of ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x1800130B0
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18001316C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Release@CAccentTransitionAnimatedVisual@@UEAAKXZ @ 0x180036C30 (-Release@CAccentTransitionAnimatedVisual@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisual::~CTransitionVisual(CAccentTransitionAnimatedVisual **this)
{
  _QWORD **v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  CAccentTransitionAnimatedVisual *v6; // rcx
  void (*v7)(void); // rax

  v2 = (_QWORD **)(this + 1);
  v3 = 7LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *v4 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        *v4 = 0LL;
      }
      v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v5 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
      else
        v5(WPF::g_pProcessHeap, v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v6 = *this;
  if ( *this )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 272LL);
    if ( (char *)v7 == (char *)CAccentTransitionAnimatedVisual::Release )
      CAccentTransitionAnimatedVisual::Release(v6);
    else
      v7();
  }
}
