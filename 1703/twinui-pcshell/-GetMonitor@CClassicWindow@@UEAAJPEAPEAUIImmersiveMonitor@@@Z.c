/*
 * XREFs of ?GetMonitor@CClassicWindow@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180033C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::GetMonitor(CClassicWindow *this, struct IImmersiveMonitor **a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  result = 2147943568LL;
  if ( *((_QWORD *)this + 3) )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveMonitor **))this + 3))(
             *((_QWORD *)this + 3),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             a2);
  return result;
}
