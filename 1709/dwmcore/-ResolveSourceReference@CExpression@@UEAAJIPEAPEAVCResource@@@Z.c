/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x1800A8170
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  unsigned int v3; // ebx
  CMILCOMBase *v4; // rcx
  void (*v5)(void); // rax

  v3 = 0;
  if ( a2 < *((_DWORD *)this + 92) && *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * a2) )
  {
    _mm_lfence();
    *a3 = *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 45) + 8LL * a2) + 8LL);
  }
  else
  {
    *a3 = 0LL;
  }
  v4 = *a3;
  if ( *a3 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(v4);
    else
      v5();
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x80004005, 0x196u);
  }
  return v3;
}
