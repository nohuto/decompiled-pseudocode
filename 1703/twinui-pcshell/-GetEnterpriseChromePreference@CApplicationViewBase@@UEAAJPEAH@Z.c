/*
 * XREFs of ?GetEnterpriseChromePreference@CApplicationViewBase@@UEAAJPEAH@Z @ 0x180082230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetEnterpriseChromePreference(CApplicationViewBase *this, int *a2)
{
  int ShouldShowEnterpriseIndicator; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *((_QWORD *)this + 6) != 0LL;
  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  ShouldShowEnterpriseIndicator = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(*(_QWORD *)this + 392LL))(
                                    this,
                                    &v7);
  if ( ShouldShowEnterpriseIndicator < 0 )
  {
    v4 = 202LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)ShouldShowEnterpriseIndicator);
    return (unsigned int)ShouldShowEnterpriseIndicator;
  }
  ShouldShowEnterpriseIndicator = EdpShouldShowEnterpriseIndicator(v7, a2);
  result = 2147943568LL;
  if ( ShouldShowEnterpriseIndicator != -2147023728 )
  {
    if ( ShouldShowEnterpriseIndicator < 0 )
    {
      v4 = 210LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  return result;
}
