/*
 * XREFs of _lambda_a7d6de2484dea847792845a02e267be3_::operator() @ 0x18002F608
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_a7d6de2484dea847792845a02e267be3___ @ 0x18003AC20 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_a7d6de2484dea847792845a02e267be3___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18002BE58 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A45F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_a7d6de2484dea847792845a02e267be3_::operator()(__int64 a1, unsigned int a2)
{
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  CreativeFramework::CreativeEventStore *v6; // rax
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  _QWORD v14[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  v5 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v6 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v7 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v6,
         v5,
         (const unsigned __int16 *)a2,
         (__int64)StringRawBuffer);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1DD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_19;
  }
  v8 = &unk_18017A280;
  while ( *(_DWORD *)v8 != **(_DWORD **)(a1 + 24) )
  {
    v8 += 5;
    if ( v8 == (_QWORD *)&unk_18017A2F8 )
    {
      v14[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v14[1] = ContentManagement::NormalEventNotificationHandler;
      v9 = v14;
      v15 = v14;
      goto LABEL_12;
    }
  }
  v15 = 0LL;
  v9 = (_QWORD *)v8[4];
  if ( v9 )
  {
    if ( v9 == v8 + 1 )
      v10 = v14;
    else
      v10 = 0LL;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v9)(v9, v10);
    v9 = v15;
  }
  else
  {
    v15 = 0LL;
  }
LABEL_12:
  if ( !v9 )
LABEL_19:
    std::_Xbad_function_call();
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
  if ( v15 )
  {
    v12 = v14;
    LOBYTE(v12) = v15 != v14;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v15 + 32LL))(v15, v12);
  }
  return 0LL;
}
