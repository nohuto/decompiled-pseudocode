/*
 * XREFs of ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x1801C2230
 * Callers:
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1801C230C (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1800F9F00 (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 */

__int64 __fastcall RoVariant::Accessor::GetRect(RoVariant::Accessor *this, struct Windows::Foundation::Rect *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8

  if ( !a2 )
    return 2147500035LL;
  *(_OWORD *)a2 = 0uLL;
  result = RoVariant::Accessor::VerifyPV(this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 200LL))(*v3, v4);
  return result;
}
