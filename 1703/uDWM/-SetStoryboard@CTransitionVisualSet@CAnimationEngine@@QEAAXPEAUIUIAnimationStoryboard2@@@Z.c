/*
 * XREFs of ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180012BB4
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180010DF4 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
