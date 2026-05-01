/*
 * XREFs of ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800F9EC0
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017CA20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1800F9F00 (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 */

__int64 __fastcall RoVariant::Accessor::GetBoolean(RoVariant::Accessor *this, unsigned __int8 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8

  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  result = RoVariant::Accessor::VerifyPV(this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 144LL))(*v3, v4);
  return result;
}
