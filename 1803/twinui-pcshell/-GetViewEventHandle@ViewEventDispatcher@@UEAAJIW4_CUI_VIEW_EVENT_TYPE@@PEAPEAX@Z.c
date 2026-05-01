/*
 * XREFs of ?GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180034050
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F8D0 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU.c)
 *     ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180030A40 (-GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::GetViewEventHandle(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v7; // rcx
  __int64 (__fastcall *v8)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(RTL_SRWLOCK *, int, int, _QWORD *); // rax
  int ViewEventHandle; // eax
  RTL_SRWLOCK *v13; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v7 = *(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore **)(a1 + 320);
  v8 = **(__int64 (__fastcall ***)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, struct _GUID *, void **))v7;
  if ( v8 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::QueryInterface )
    Interface = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::QueryInterface(
                  v7,
                  &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92,
                  (void **)&v18);
  else
    Interface = v8(v7, &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92, (void **)&v18);
  v10 = Interface;
  if ( Interface < 0 )
  {
    v15 = 1444LL;
  }
  else
  {
    v11 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, int, _QWORD *))*((_QWORD *)v18->Ptr + 3);
    if ( v11 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle )
      ViewEventHandle = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle(
                          v18,
                          a2,
                          a3,
                          a4);
    else
      ViewEventHandle = v11(v18, a2, a3, a4);
    v10 = ViewEventHandle;
    if ( ViewEventHandle >= 0 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v15 = 1445LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v10,
    v16);
LABEL_8:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 2))(v13);
  }
  return v10;
}
