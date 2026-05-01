/*
 * XREFs of ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1800F6340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  __int64 v4; // rbx
  PVOID Ptr; // r8
  void *v6; // rbp
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _BYTE *v11; // r8
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  wil::srwlock::lock_exclusive(this + 28, &SRWLock);
  Ptr = this[34].Ptr;
  v6 = 0LL;
  if ( Ptr )
  {
    v7 = this[33].Ptr;
    v8 = v7;
    while ( *(_QWORD *)(*v8 + 40LL) != a2.value )
    {
      v6 = (char *)v6 + 1;
      ++v8;
      if ( v6 >= Ptr )
        goto LABEL_14;
    }
    if ( v7[(_QWORD)v6] )
    {
      v4 = v7[(_QWORD)v6];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    if ( v6 < this[34].Ptr )
    {
      v9 = this[33].Ptr;
      v10 = v9[(_QWORD)v6];
      if ( v10 )
      {
        v9[(_QWORD)v6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = this[34].Ptr;
      if ( v6 != v11 - 1 )
        memmove(
          (char *)this[33].Ptr + 8 * (_QWORD)v6,
          (char *)this[33].Ptr + 8 * (_QWORD)v6 + 8,
          8 * (v11 - (_BYTE *)v6) - 8);
      --this[34].Ptr;
    }
  }
LABEL_14:
  v12 = v4 == 0 ? 0x80070490 : 0;
  if ( !v4 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x759,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v12);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v12;
}
