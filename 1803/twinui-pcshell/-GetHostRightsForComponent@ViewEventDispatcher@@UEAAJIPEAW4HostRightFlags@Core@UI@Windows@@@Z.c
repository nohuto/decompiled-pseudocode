/*
 * XREFs of ?GetHostRightsForComponent@ViewEventDispatcher@@UEAAJIPEAW4HostRightFlags@Core@UI@Windows@@@Z @ 0x180034000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4HostRightFlags@Core@UI@5@@Z @ 0x1800308C0 (-GetHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetHostRightsForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        enum Windows::UI::Core::HostRightFlags *a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, enum Windows::UI::Core::HostRightFlags *); // rax
  int HostRightsForComponent; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, enum Windows::UI::Core::HostRightFlags *))*((_QWORD *)v3->Ptr + 22);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostRightsForComponent )
    HostRightsForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostRightsForComponent(
                               v3,
                               a2,
                               a3);
  else
    HostRightsForComponent = v4(v3, a2, a3);
  v6 = HostRightsForComponent;
  if ( HostRightsForComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x595,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HostRightsForComponent,
      v8);
  return v6;
}
