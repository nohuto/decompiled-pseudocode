/*
 * XREFs of ?ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005FE54
 * Callers:
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005FF1C (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandlerFromKind(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rax
  char *v5; // rax
  char *v6; // rcx
  _QWORD *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v10);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x156,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = &unk_18015C250;
  while ( *v4 != v10 )
  {
    v4 += 10;
    if ( v4 == (_DWORD *)&unk_18015C2C8 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
      a1[3] = a1;
      return a1;
    }
  }
  v5 = (char *)(v4 + 2);
  a1[3] = 0LL;
  v6 = (char *)*((_QWORD *)v5 + 3);
  if ( v6 )
  {
    if ( v6 == v5 )
      v7 = a1;
    else
      v7 = 0LL;
    a1[3] = (**(__int64 (__fastcall ***)(char *, _QWORD *, _QWORD))v6)(v6, v7, 0LL);
  }
  else
  {
    a1[3] = 0LL;
  }
  return a1;
}
