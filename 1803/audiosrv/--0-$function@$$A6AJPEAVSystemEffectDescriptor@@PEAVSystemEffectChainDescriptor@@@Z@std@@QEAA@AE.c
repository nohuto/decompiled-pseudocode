/*
 * XREFs of ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18004FE48
 * Callers:
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800505A0 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800533D0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move @ 0x18004FEA0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FEA0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 (__fastcall *v4)(_QWORD, __int64); // rax
  __int64 v5; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
  {
    v4 = **v3;
    if ( v4 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move )
      v5 = std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move(
             v3,
             a1);
    else
      v5 = v4(v3, a1);
    *(_QWORD *)(a1 + 56) = v5;
  }
  return a1;
}
