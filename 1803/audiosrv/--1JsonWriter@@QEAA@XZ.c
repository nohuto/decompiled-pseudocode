/*
 * XREFs of ??1JsonWriter@@QEAA@XZ @ 0x1800DB27C
 * Callers:
 *     __lambda_d712340aea87d10847fb2ae459792740_::operator()_::_1_::dtor$1 @ 0x1800DB666 (__lambda_d712340aea87d10847fb2ae459792740_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JsonWriter::~JsonWriter(JsonWriter *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
