/*
 * XREFs of ?get_Tab@ApplicationViewOperation@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180089710
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::get_Tab(ApplicationViewOperation *this, struct IInspectable **a2)
{
  struct IInspectable *v3; // rcx

  *a2 = 0LL;
  v3 = (struct IInspectable *)*((_QWORD *)this + 27);
  if ( v3 )
  {
    ((void (__fastcall *)(struct IInspectable *))v3->lpVtbl->AddRef)(v3);
    v3 = (struct IInspectable *)*((_QWORD *)this + 27);
  }
  *a2 = v3;
  return 0LL;
}
