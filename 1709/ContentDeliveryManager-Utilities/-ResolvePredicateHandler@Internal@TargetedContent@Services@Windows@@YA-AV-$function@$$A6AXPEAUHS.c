/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005FF1C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060150 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005FE54 (-ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _DWORD *v5; // rax
  char *v6; // rax
  char *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  int v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+24h] [rbp-44h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  _QWORD *v20; // [rsp+30h] [rbp-38h]
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v19 = -2LL;
  v20 = a1;
  v18 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = &unk_18015C2D0;
  while ( *v5 != v17 )
  {
    v5 += 10;
    if ( v5 == (_DWORD *)&unk_18015C370 )
    {
      a1[3] = 0LL;
      goto LABEL_13;
    }
  }
  v6 = (char *)(v5 + 2);
  a1[3] = 0LL;
  v7 = (char *)*((_QWORD *)v6 + 3);
  if ( v7 )
  {
    if ( v7 == v6 )
      v8 = a1;
    else
      v8 = 0LL;
    a1[3] = (**(__int64 (__fastcall ***)(char *, _QWORD *))v7)(v7, v8);
  }
  else
  {
    a1[3] = 0LL;
  }
LABEL_13:
  v18 = 3;
  if ( !a1[3] )
  {
    v10 = Windows::Services::TargetedContent::Internal::ResolvePredicateHandlerFromKind(v21, a2);
    if ( a1 == v10 )
      goto LABEL_24;
    v11 = (_QWORD *)a1[3];
    if ( v11 )
    {
      LOBYTE(v9) = v11 != a1;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 32LL))(v11, v9);
      a1[3] = 0LL;
    }
    v12 = (_QWORD *)v10[3];
    if ( !v12 )
    {
      a1[3] = 0LL;
      goto LABEL_24;
    }
    if ( v12 == v10 )
    {
      a1[3] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 8LL))(v12, a1);
      v14 = (_QWORD *)v10[3];
      if ( !v14 )
        goto LABEL_24;
      LOBYTE(v13) = v14 != v10;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v14 + 32LL))(v14, v13);
    }
    else
    {
      a1[3] = v12;
    }
    v10[3] = 0LL;
LABEL_24:
    if ( v22 )
    {
      v15 = v21;
      LOBYTE(v15) = v22 != v21;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(v22, v15);
    }
  }
  return a1;
}
