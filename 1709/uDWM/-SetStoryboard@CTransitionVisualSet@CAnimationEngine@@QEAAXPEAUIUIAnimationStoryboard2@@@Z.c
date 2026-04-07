/*
 * XREFs of ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18002F5C0
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18002CB84 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::SetStoryboard(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IUIAnimationStoryboard2 *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))a2->lpVtbl->AddRef)(a2);
  *((_BYTE *)this + 32) = 1;
}
