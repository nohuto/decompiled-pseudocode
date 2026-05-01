/*
 * XREFs of ?SetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIW4CRSComponentStateFlags@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180034270
 * Callers:
 *     <none>
 * Callees:
 *     ?SetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4CRSComponentStateFlags@2345@@Z @ 0x18002FB40 (-SetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Interna.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::SetComponentStateFlagsForComponent(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(RTL_SRWLOCK **)(a1 + 328);
  v4 = (__int64 (*)(void))*((_QWORD *)v3->Ptr + 15);
  if ( (char *)v4 == (char *)Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetComponentStateFlagsForComponent )
    v5 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetComponentStateFlagsForComponent(
           v3,
           a2,
           a3);
  else
    v5 = v4();
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v8);
  return v6;
}
