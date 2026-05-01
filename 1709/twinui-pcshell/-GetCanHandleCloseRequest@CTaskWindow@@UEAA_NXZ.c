/*
 * XREFs of ?GetCanHandleCloseRequest@CTaskWindow@@UEAA_NXZ @ 0x1800657D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CTaskWindow::GetCanHandleCloseRequest(CTaskWindow *this)
{
  __int64 v1; // rcx
  char v2; // al
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 416LL))(v1, &v4);
    v2 = v4;
  }
  return v2 != 0;
}
