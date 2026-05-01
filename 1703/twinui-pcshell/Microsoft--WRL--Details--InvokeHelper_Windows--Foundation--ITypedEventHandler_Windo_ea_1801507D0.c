/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_3740d3b01fc7905a4dc3a6d1438f472c__2__1_::Invoke @ 0x1801507D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_3740d3b01fc7905a4dc3a6d1438f472c__2__1_::Invoke(
        __int64 a1)
{
  int v1; // eax
  int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL) + 104LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL));
  v2 = v1;
  if ( v1 >= 0 )
    v2 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x221,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v1);
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return (unsigned int)v2;
}
