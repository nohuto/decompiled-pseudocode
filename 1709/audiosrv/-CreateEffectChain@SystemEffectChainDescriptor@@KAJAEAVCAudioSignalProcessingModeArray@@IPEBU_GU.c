/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800BBDB4
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x1800BD6D0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x18005AF6C (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800B14EC (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj@VSystemEffectChainDescriptor@@@std@@QEAA@XZ @ 0x1800BB9E0 (--$-0$$V@-$_Ref_count_obj@VSystemEffectChainDescriptor@@@std@@QEAA@XZ.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x1800BD424 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        struct _GUID *a5,
        __int64 *a6)
{
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rbx
  SystemEffectChainDescriptor *v12; // rsi
  int v13; // edi
  __int64 v14; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  CAudioSignalProcessingModeArray *v19; // [rsp+30h] [rbp-48h]
  CAudioSignalProcessingModeArray *v20[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v10 = (__int64)operator new(0x58uLL);
    if ( v10 )
      v10 = std::_Ref_count_obj<SystemEffectChainDescriptor>::_Ref_count_obj<SystemEffectChainDescriptor>(v10);
    *(_OWORD *)v20 = 0LL;
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(v20, v10 + 16, v10);
    v11 = v20[1];
    v19 = v20[1];
    v21[1] = (__int64)v20[1];
    v12 = v20[0];
    v21[0] = (__int64)v20[0];
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    return 2147942414LL;
  }
  v13 = CAudioSignalProcessingModeArray::AddMultiple(v20[0], *(_DWORD *)(a1 + 8), *(const struct _GUID **)a1);
  if ( v13 < 0 )
  {
    v14 = 49LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return (unsigned int)v13;
  }
  v13 = SystemEffectChainDescriptor::ReplaceEffectChain(v12, a2, a3, a4, a5);
  if ( v13 < 0 )
  {
    v14 = 50LL;
    goto LABEL_7;
  }
  v16 = std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(v20, v21);
  v17 = v16[1];
  v16[1] = a6[1];
  a6[1] = v17;
  v18 = *v16;
  *v16 = *a6;
  *a6 = v18;
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0LL;
}
