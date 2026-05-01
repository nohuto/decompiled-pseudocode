/*
 * XREFs of ?GetMonitor@CClassicWindow@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180035300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::GetMonitor(CClassicWindow *this, struct IImmersiveMonitor **a2)
{
  __int64 result; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IImmersiveMonitor **); // rcx

  *a2 = 0LL;
  result = 2147943568LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveMonitor **))*((_QWORD *)this + 3);
  if ( v3 )
    return (**v3)(v3, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, a2);
  return result;
}
