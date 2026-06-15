/*
 * XREFs of ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180045A40
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     ??$make_shared@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@0@AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@0@@Z @ 0x180045AE4 (--$make_shared@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::MarkAsUnresolved(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = (__int64 *)std::make_shared<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>,std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)> &>(&v13);
    v5 = *v4;
    v6 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    v7 = *(std::_Ref_count_base **)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 24) = v5;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v12);
    v10 = (_QWORD *)a2[7];
    if ( v10 )
    {
      LOBYTE(v11) = v10 != a2;
      if ( *(void (__fastcall **)(_QWORD *, char))(*v10 + 32LL) == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
        std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
          v10,
          v11);
      else
        (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 32LL))(v10, v11);
      a2[7] = 0LL;
    }
    return 2147942414LL;
  }
  *(_BYTE *)(a1 + 16) = 1;
  v8 = (_QWORD *)a2[7];
  if ( v8 )
  {
    LOBYTE(v6) = v8 != a2;
    if ( *(void (__fastcall **)(_QWORD *, char))(*v8 + 32LL) == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v8,
        v6);
    else
      (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 32LL))(v8, v6);
    a2[7] = 0LL;
  }
  return 0LL;
}
