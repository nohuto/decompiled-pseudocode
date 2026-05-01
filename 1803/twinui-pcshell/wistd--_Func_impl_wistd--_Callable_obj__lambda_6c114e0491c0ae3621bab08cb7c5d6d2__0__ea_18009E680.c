/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18009E680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B0C4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180154CC8 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::Details::WeakReferenceImpl **)(a1 + 16),
    &GUID_df65db57_d504_456e_8bd7_004ce308d8d9,
    &v6);
  v3 = CActionCenterExperienceManager::PostTargetedMessage(*(_QWORD *)(a1 + 8), 0LL, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      641LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
