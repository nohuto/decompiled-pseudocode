/*
 * XREFs of ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BD1A8
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@0@AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@0@@Z @ 0x1800BBA98 (--$make_shared@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::MarkAsUnresolved(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = std::make_shared<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>,std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)> &>(
           &v12,
           a2);
    v5 = *v4;
    v6 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    v7 = *(std::_Ref_count_base **)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 24) = v5;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    v10 = *(_QWORD *)(a2 + 56);
    if ( v10 )
    {
      LOBYTE(v11) = v10 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v11);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 2147942414LL;
  }
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 1;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    LOBYTE(v6) = v8 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
