/*
 * XREFs of ?get_EventContext@ViewEventArgsBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180004670
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsBase::get_EventContext(
        ViewEventArgsBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet *v3; // rax
  __int64 v4; // rcx

  v3 = 0LL;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 7);
  }
  *a2 = v3;
  return 0LL;
}
