/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004BF0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800077F0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@XZ @ 0x180008640 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$all.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>()
{
  char *v0; // rbx
  __int64 *v1; // rdi
  void *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  HANDLE Event; // r14
  void *v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  HANDLE v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  const char *v12; // r9
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = (char *)operator new(0x50uLL);
  *(_QWORD *)v0 = 0LL;
  v1 = (__int64 *)(v0 + 8);
  *((_QWORD *)v0 + 1) = 0LL;
  *((_QWORD *)v0 + 2) = 1LL;
  *((_QWORD *)v0 + 3) = 0LL;
  *((_QWORD *)v0 + 4) = 0LL;
  *((_QWORD *)v0 + 5) = 0LL;
  *((_QWORD *)v0 + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
  *((_QWORD *)v0 + 6) = 0LL;
  *((_QWORD *)v0 + 7) = 0LL;
  *((_QWORD *)v0 + 6) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
  *((_QWORD *)v0 + 8) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    goto LABEL_13;
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)v0 + 8,
    Event);
  *((_QWORD *)v0 + 9) = 0LL;
  v9 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !v9 )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v6, v7, v8);
LABEL_13:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v2, v3, v4);
    return 0LL;
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)v0 + 9,
    v9);
  v10 = *v1;
  if ( *v1 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = CoreUICreate(v1);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  if ( !*v1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v12);
  MPC3DStateHelper::s_instance = (struct MPC3DStateHelper *)v0;
  if ( !SetEvent(MPC3DStateHelper::s_isInstanceCreatedEvent) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v13);
  return 1LL;
}
