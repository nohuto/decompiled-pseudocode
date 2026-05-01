/*
 * XREFs of ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180066170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CTaskWindow::IsPresentationReady(CTaskWindow *this)
{
  bool v1; // zf
  __int64 v2; // rcx
  bool v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 6) == 0LL;
  v1 = !v4;
  if ( !v4 )
  {
    v5 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
      *((_QWORD *)this + 6),
      &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
      &v5);
    (*(void (__fastcall **)(__int64, bool *))(*(_QWORD *)v5 + 72LL))(v5, &v4);
    v2 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v1 = !v4;
  }
  return !v1;
}
