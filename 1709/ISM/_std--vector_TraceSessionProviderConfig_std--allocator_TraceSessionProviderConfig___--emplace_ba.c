/*
 * XREFs of _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$134 @ 0x1800D10BA
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXPEAUTraceSessionProviderConfig@@_K@Z @ 0x180097F50 (-deallocate@-$_Wrap_alloc@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXPEAUTraceSe.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const______ptr64__39__int_int_int__::_1_::catch_134(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<TraceSessionProviderConfig>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 48),
    *(_QWORD *)(a2 + 112));
  throw;
}
