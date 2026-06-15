/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ @ 0x180042EA8 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180043044 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180043230 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move @ 0x180045BE0 (std--_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std--allocator_int__long__ea_180045BE0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  _OWORD *v9; // rax
  void *v10; // rdi
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  int OverridingChain; // eax
  unsigned int v13; // esi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 (__fastcall *v17)(_QWORD, _BYTE *); // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  int v23; // [rsp+28h] [rbp-51h]
  int v24; // [rsp+28h] [rbp-51h]
  _OWORD *v25; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+64h] [rbp-15h]
  _BYTE v28[56]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+47h]

  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v9 = (_OWORD *)_o__recalloc(0LL, 1LL, 16LL);
  v10 = v9;
  if ( v9 )
  {
    v27 = 1;
    v25 = v9;
    *v9 = *a2;
    v26 = 1;
    v29 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a7[7];
    if ( v11 )
    {
      v17 = **v11;
      if ( (char *)v17 == (char *)std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move )
        v18 = std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move(
                v11,
                v28);
      else
        v18 = v17(v11, v28);
      v29 = v18;
    }
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        a1,
                        (struct CAudioSignalProcessingModeArray *)&v25,
                        a5,
                        a6,
                        (__int64)v28);
    v13 = OverridingChain;
    if ( OverridingChain < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x132,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)OverridingChain,
        v24);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v25);
      v20 = (_QWORD *)a7[7];
      if ( v20 )
      {
        LOBYTE(v19) = v20 != a7;
        if ( *(void (__fastcall **)(_QWORD *, char))(*v20 + 32LL) == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
          std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
            v20,
            v19);
        else
          (*(void (__fastcall **)(_QWORD *, __int64))(*v20 + 32LL))(v20, v19);
        a7[7] = 0LL;
      }
      return v13;
    }
    else
    {
      free(v10);
      v15 = (_QWORD *)a7[7];
      if ( v15 )
      {
        LOBYTE(v14) = v15 != a7;
        if ( *(void (__fastcall **)(_QWORD *, char))(*v15 + 32LL) == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
          std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
            v15,
            v14);
        else
          (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 32LL))(v15, v14);
        a7[7] = 0LL;
      }
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v23);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v25);
    v22 = (_QWORD *)a7[7];
    if ( v22 )
    {
      LOBYTE(v21) = v22 != a7;
      if ( *(void (__fastcall **)(_QWORD *, char))(*v22 + 32LL) == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
        std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
          v22,
          v21);
      else
        (*(void (__fastcall **)(_QWORD *, __int64))(*v22 + 32LL))(v22, v21);
      a7[7] = 0LL;
    }
    return 2147942414LL;
  }
}
