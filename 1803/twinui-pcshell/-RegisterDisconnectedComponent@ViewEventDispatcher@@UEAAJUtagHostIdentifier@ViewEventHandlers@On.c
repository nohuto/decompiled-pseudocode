/*
 * XREFs of ?RegisterDisconnectedComponent@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IPEAUIInspectable@@@Z @ 0x180033FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x180030570 (-RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::RegisterDisconnectedComponent(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // xmm0_8
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, int, __int64); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 328);
  v12 = *((_DWORD *)a2 + 2);
  v11 = v4;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, int, __int64))(*(_QWORD *)v5 + 184LL);
  if ( v6 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent )
    v7 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent(
           v5,
           (__int64)&v11,
           a3,
           a4);
  else
    v7 = ((__int64 (__fastcall *)(__int64, __int64 *))v6)(v5, &v11);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59C,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return v8;
}
