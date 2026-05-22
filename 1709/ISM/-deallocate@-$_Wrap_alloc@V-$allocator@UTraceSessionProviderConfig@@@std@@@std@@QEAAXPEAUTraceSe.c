/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXPEAUTraceSessionProviderConfig@@_K@Z @ 0x180097F50
 * Callers:
 *     _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$134 @ 0x1800D10BA (_std--vector_TraceSessionProviderConfig_std--allocator_TraceSessionProviderConfig___--emplace_ba.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<TraceSessionProviderConfig>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x666666666666666LL )
    goto LABEL_8;
  if ( 40 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x180097FA3LL);
  }
LABEL_7:
  operator delete(a2);
}
