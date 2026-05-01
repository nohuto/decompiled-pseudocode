/*
 * XREFs of ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180065610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::EnsurePositionOffset(CTaskWindow *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
    *((_QWORD *)this + 6),
    &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
    &v4);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
