/*
 * XREFs of ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000529C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 */

void __fastcall CStoryboard::SetParentStoryboard(CStoryboard *this, struct CStoryboard *a2)
{
  CStoryboard *v4; // rcx

  v4 = (CStoryboard *)*((_QWORD *)this + 10);
  if ( v4 )
    CStoryboard::Release(v4);
  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
