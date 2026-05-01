/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_::Run @ 0x18007E870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18007ECCC (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180082300 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef______ptr64_::Run(
        __int64 a1)
{
  const unsigned __int16 *v2; // rbx
  EdpHelpers *v3; // rax
  unsigned __int16 **v4; // r8
  int EnterpriseIdForWindow; // eax
  unsigned __int16 *v6; // rcx
  int v7; // eax
  struct HWND__ v8[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  *(_QWORD *)&v8[0].unused = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)EdpGetIsManaged(a1) )
  {
    v3 = (EdpHelpers *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 168LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL));
    v9 = -1LL;
    v10 = -1LL;
    EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v3, v8, v4);
    if ( EnterpriseIdForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x179,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)EnterpriseIdForWindow);
      v6 = *(unsigned __int16 **)&v8[0].unused;
      if ( !*(_QWORD *)&v8[0].unused )
        return;
      goto LABEL_10;
    }
    v2 = *(const unsigned __int16 **)&v8[0].unused;
  }
  v7 = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*(_QWORD *)(a1 + 16) + 16LL), v2);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v7);
  if ( v2 )
  {
    v6 = (unsigned __int16 *)v2;
LABEL_10:
    CoTaskMemFree(v6);
  }
}
