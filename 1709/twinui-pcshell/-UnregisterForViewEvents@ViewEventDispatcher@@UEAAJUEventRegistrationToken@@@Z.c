/*
 * XREFs of ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180121520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v5; // rbx
  PVOID Ptr; // r8
  void *v7; // rbp
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // r8
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 37;
  v5 = 0LL;
  AcquireSRWLockExclusive(this + 37);
  Ptr = this[43].Ptr;
  v7 = 0LL;
  if ( Ptr )
  {
    v8 = this[42].Ptr;
    v9 = v8;
    while ( *(_QWORD *)(*v9 + 40LL) != a2.value )
    {
      v7 = (char *)v7 + 1;
      ++v9;
      if ( v7 >= Ptr )
        goto LABEL_14;
    }
    if ( v8[(_QWORD)v7] )
    {
      v5 = v8[(_QWORD)v7];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    if ( v7 < this[43].Ptr )
    {
      v10 = this[42].Ptr;
      v11 = v10[(_QWORD)v7];
      if ( v11 )
      {
        v10[(_QWORD)v7] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = this[43].Ptr;
      if ( v7 != v12 - 1 )
        memmove(
          (char *)this[42].Ptr + 8 * (_QWORD)v7,
          (char *)this[42].Ptr + 8 * (_QWORD)v7 + 8,
          8 * (v12 - (_BYTE *)v7) - 8);
      --this[43].Ptr;
    }
  }
LABEL_14:
  v13 = v5 == 0 ? 0x80070490 : 0;
  if ( !v5 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x795,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v13);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v13;
}
