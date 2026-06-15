/*
 * XREFs of ??1?$_Func_class@JPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@std@@QEAA@XZ @ 0x18007B730
 * Callers:
 *     _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$14 @ 0x180059774 (_CEndpointCharacteristics--AugmentOEMSpeechProcessingSupport_--_1_--dtor$14.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x180059810 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$13 @ 0x180059828 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$13.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x180059840 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$80 @ 0x180059894 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$80.c)
 *     _std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)__::_1_::dtor$0 @ 0x18005C4EF (_std--function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x18005C4FB (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _std::_Ref_count_obj_std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___::_Ref_count_obj_std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)____std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)__&___ptr64__::_1_::dtor$3 @ 0x18005C587 (_std--_Ref_count_obj_std--function_long___cdecl(SystemEffectDescriptor_____ptr64_Sy_ea_18005C587.c)
 * Callees:
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<long,SystemEffectDescriptor *,SystemEffectChainDescriptor *>::~_Func_class<long,SystemEffectDescriptor *,SystemEffectChainDescriptor *>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  void (__fastcall *v4)(_QWORD *, char); // rax

  v3 = (_QWORD *)a1[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(_QWORD *, char))(*v3 + 32LL);
    if ( v4 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    a1[7] = 0LL;
  }
}
