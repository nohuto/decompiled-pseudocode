/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@EEAAXXZ @ 0x1800C1330
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
    if ( v4 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    v2[7] = 0LL;
  }
}
