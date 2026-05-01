/*
 * XREFs of ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180121B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180126078 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v3; // rsi
  int PendingActivation; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 35;
  AcquireSRWLockShared(this + 35);
  PendingActivation = ViewEventDispatcher::_FindPendingActivation(&this[-2], a2, &v14);
  v8 = PendingActivation;
  if ( PendingActivation >= 0 )
  {
    v9 = v14;
    v10 = *(_QWORD *)(v14 + 32);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(struct Windows::Foundation::Collections::IPropertySet **)(v9 + 32);
    v8 = 0;
    *a3 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x811,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PendingActivation);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v8;
}
