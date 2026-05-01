/*
 * XREFs of ?GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z @ 0x180033E10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F8D0 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU.c)
 *     ?GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIKPEAPEAX@Z @ 0x180030200 (-GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::GetComponentEventHandles(
        ViewEventDispatcher *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v7; // rcx
  __int64 (__fastcall *v8)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(RTL_SRWLOCK *, int, int, void **); // rax
  int ComponentEventHandles; // eax
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v13; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v7 = (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)*((_QWORD *)this + 40);
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
    v15 = 1471LL;
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, int, int, void **))(*(_QWORD *)v18 + 40LL);
    if ( v11 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentEventHandles )
      ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentEventHandles(
                                (RTL_SRWLOCK *)v18,
                                a2,
                                a3,
                                a4);
    else
      ComponentEventHandles = v11((RTL_SRWLOCK *)v18, a2, a3, a4);
    v10 = ComponentEventHandles;
    if ( ComponentEventHandles >= 0 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v15 = 1472LL;
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
    (*(void (__fastcall **)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v10;
}
