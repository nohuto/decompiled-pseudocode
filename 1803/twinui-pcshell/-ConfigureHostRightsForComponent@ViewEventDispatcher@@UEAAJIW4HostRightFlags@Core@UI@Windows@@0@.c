/*
 * XREFs of ?ConfigureHostRightsForComponent@ViewEventDispatcher@@UEAAJIW4HostRightFlags@Core@UI@Windows@@0@Z @ 0x180034170
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4HostRightFlags@Core@UI@5@0@Z @ 0x180030460 (-ConfigureHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::ConfigureHostRightsForComponent(__int64 a1, int a2, int a3, int a4)
{
  RTL_SRWLOCK *v4; // rcx
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(RTL_SRWLOCK **)(a1 + 328);
  v5 = (__int64 (*)(void))*((_QWORD *)v4->Ptr + 21);
  if ( (char *)v5 == (char *)Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ConfigureHostRightsForComponent )
    v6 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ConfigureHostRightsForComponent(
           v4,
           a2,
           a3,
           a4);
  else
    v6 = v5();
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6,
      v9);
  return v7;
}
