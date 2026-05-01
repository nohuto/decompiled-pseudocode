/*
 * XREFs of ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x180052DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetPresentationLayer(CImmersiveApp *this, struct IApplicationPresentationLayer **a2)
{
  struct IApplicationPresentationLayer *v2; // rbx

  v2 = (struct IApplicationPresentationLayer *)*((_QWORD *)this + 34);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 34));
  *a2 = v2;
  return 0LL;
}
