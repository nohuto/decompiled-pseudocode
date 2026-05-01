/*
 * XREFs of ?GetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentStateFlags@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180034560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentStateFlags@2345@@Z @ 0x18002FBC0 (-GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Interna.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetComponentStateFlagsForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *); // rax
  int ComponentStateFlagsForComponent; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *))*((_QWORD *)v3->Ptr + 14);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentStateFlagsForComponent )
    ComponentStateFlagsForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentStateFlagsForComponent(
                                        v3,
                                        a2,
                                        a3);
  else
    ComponentStateFlagsForComponent = v4(v3, a2, a3);
  v6 = ComponentStateFlagsForComponent;
  if ( ComponentStateFlagsForComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x559,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)ComponentStateFlagsForComponent,
      v8);
  return v6;
}
