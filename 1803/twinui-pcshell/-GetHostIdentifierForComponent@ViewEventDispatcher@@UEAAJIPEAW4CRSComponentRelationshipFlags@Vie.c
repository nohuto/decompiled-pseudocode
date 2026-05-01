/*
 * XREFs of ?GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@ViewEventHandlers@OneCore@Internal@Windows@@PEAUtagHostIdentifier@3456@@Z @ 0x1800345E0
 * Callers:
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x1801D0000 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 * Callees:
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x180030040 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetHostIdentifierForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  RTL_SRWLOCK *v4; // rcx
  __int64 (__fastcall *v5)(RTL_SRWLOCK *, int, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *, struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *); // rax
  int HostIdentifierForComponent; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v5 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *, struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *))*((_QWORD *)v4->Ptr + 9);
  if ( v5 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent )
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                   v4,
                                   a2,
                                   a3,
                                   a4);
  else
    HostIdentifierForComponent = v5(v4, a2, a3, a4);
  v7 = HostIdentifierForComponent;
  if ( HostIdentifierForComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HostIdentifierForComponent,
      v9);
  return v7;
}
