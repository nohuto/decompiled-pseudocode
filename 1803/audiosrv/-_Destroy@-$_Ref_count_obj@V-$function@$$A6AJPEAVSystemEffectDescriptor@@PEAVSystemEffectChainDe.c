/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@EEAAXXZ @ 0x1800F0E60
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  void (__fastcall *v4)(_QWORD *, char); // rax

  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    v4 = *(void (__fastcall **)(_QWORD *, char))(*v3 + 32LL);
    if ( v4 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    v2[7] = 0LL;
  }
}
