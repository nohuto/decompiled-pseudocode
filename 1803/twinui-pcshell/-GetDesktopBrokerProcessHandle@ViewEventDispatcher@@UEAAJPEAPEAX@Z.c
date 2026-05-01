/*
 * XREFs of ?GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z @ 0x180033EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F8D0 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU.c)
 *     ?GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAPEAX@Z @ 0x1800303C0 (-GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::GetDesktopBrokerProcessHandle(ViewEventDispatcher *this, void **a2)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v3; // rcx
  __int64 (__fastcall *v4)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, void **); // rax
  int DesktopBrokerProcessHandle; // eax
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v9; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)*((_QWORD *)this + 40);
  v4 = **(__int64 (__fastcall ***)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, struct _GUID *, void **))v3;
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::QueryInterface )
    Interface = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::QueryInterface(
                  v3,
                  &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92,
                  (void **)&v13);
  else
    Interface = v4(v3, &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92, (void **)&v13);
  v6 = Interface;
  if ( Interface < 0 )
  {
    v11 = 1462LL;
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, void **))(*(_QWORD *)v13 + 32LL);
    if ( v7 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetDesktopBrokerProcessHandle )
      DesktopBrokerProcessHandle = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetDesktopBrokerProcessHandle(
                                     v13,
                                     a2);
    else
      DesktopBrokerProcessHandle = v7(v13, a2);
    v6 = DesktopBrokerProcessHandle;
    if ( DesktopBrokerProcessHandle >= 0 )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v11 = 1463LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v6,
    -2);
LABEL_8:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
