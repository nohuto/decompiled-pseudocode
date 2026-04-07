/*
 * XREFs of ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18002F6EC
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18002DAB4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::OnTick(CAnimationEngine::CTransitionVisualSet *this)
{
  double v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2), &v2) >= 0 )
    *((double *)this + 5) = v2 + *((double *)this + 5);
}
