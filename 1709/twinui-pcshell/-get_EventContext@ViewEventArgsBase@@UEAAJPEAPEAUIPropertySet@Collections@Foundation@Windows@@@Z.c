/*
 * XREFs of ?get_EventContext@ViewEventArgsBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011B0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsBase::get_EventContext(
        ViewEventArgsBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v4; // rcx

  if ( *((_QWORD *)this + 8) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 8);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
