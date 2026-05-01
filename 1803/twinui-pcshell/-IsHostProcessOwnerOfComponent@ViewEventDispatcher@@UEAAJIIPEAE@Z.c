/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ViewEventDispatcher@@UEAAJIIPEAE@Z @ 0x180034220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIIPEAE@Z @ 0x18002FC50 (-IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::IsHostProcessOwnerOfComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  RTL_SRWLOCK *v4; // rcx
  __int64 (__fastcall *v5)(RTL_SRWLOCK *, int, int, unsigned __int8 *); // rax
  int IsHostProcessOwnerOfComponent; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v5 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, int, unsigned __int8 *))*((_QWORD *)v4->Ptr + 16);
  if ( v5 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsHostProcessOwnerOfComponent )
    IsHostProcessOwnerOfComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsHostProcessOwnerOfComponent(
                                      v4,
                                      a2,
                                      a3,
                                      a4);
  else
    IsHostProcessOwnerOfComponent = v5(v4, a2, a3, a4);
  v7 = IsHostProcessOwnerOfComponent;
  if ( IsHostProcessOwnerOfComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x565,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)IsHostProcessOwnerOfComponent,
      v9);
  return v7;
}
