/*
 * XREFs of ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180034760
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1800347FC (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::UnregisterComponent(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *Ptr; // rcx
  __int64 (__fastcall *v6)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, unsigned int); // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 12;
  AcquireSRWLockExclusive(this + 12);
  Ptr = (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this[41].Ptr;
  v6 = *(__int64 (__fastcall **)(Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *, unsigned int))(*(_QWORD *)Ptr + 56LL);
  if ( v6 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterComponent )
    v7 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterComponent(Ptr, a2);
  else
    v7 = v6(Ptr, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x520,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      -2);
  }
  else
  {
    ViewEventDispatcher::_UnregisterComponent((ViewEventDispatcher *)&this[-25], a2);
    v8 = 0;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v8;
}
