/*
 * XREFs of ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0
 * Callers:
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@XZ @ 0x1800356D0 (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     _lambda_a8192ba8e11c189ab16d0f21d8e90bb9_::_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_ @ 0x180035730 (_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_--_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_.c)
 *     std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Copy @ 0x180035800 (std--_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std--allocator_int__void_--_Copy.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x18005AF6C (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x1800986F8 (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x18009D55C (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 *     ??$make_shared@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@0@AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@0@@Z @ 0x1800BBA98 (--$make_shared@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800BBDB4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x1800BD508 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??$_Resetp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@@Z @ 0x1800BEE30 (--$_Resetp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWork.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF820 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C32A8 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800C3E7C (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
