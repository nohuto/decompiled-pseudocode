/*
 * XREFs of ?SetEventSink@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElementEvents@@@Z @ 0x18028B600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::SetEventSink(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElementEvents *a2)
{
  struct IMultitaskingViewElementEvents *v4; // rcx

  v4 = (struct IMultitaskingViewElementEvents *)*((_QWORD *)this + 6);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IMultitaskingViewElementEvents *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IMultitaskingViewElementEvents *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IMultitaskingViewElementEvents *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
