/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800ECFDC
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800516AC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051CEC (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800530E8 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18005399C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_541a0aba8a0dd1ccbfde03220634244f_::operator() @ 0x180064580 (_lambda_541a0aba8a0dd1ccbfde03220634244f_--operator().c)
 *     _lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator() @ 0x180064978 (_lambda_7f4a656a268d6d0b9fd67fb138151b91_--operator().c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(unsigned int *)(a1 + 8);
  if ( a2 >= (int)v4 )
    return 0LL;
  if ( a2 != (_DWORD)v4 - 1 )
  {
    v5 = (unsigned int)(v4 - a2);
    v6 = *(_QWORD *)a1 + 16 * v2;
    v7 = 16LL * (int)v5;
    v8 = 16LL * ((int)v5 - 1);
    if ( v8 )
    {
      if ( !v6 || v6 == -16 )
      {
        *(_DWORD *)_o__errno(v6, v5, v4, v7) = 22;
        goto LABEL_10;
      }
      if ( v7 < v8 )
      {
        *(_DWORD *)_o__errno(v6, v5, v4, v7) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove((void *)v6, (const void *)(v6 + 16), 16LL * ((int)v5 - 1));
      LODWORD(v4) = *(_DWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 8) = v4 - 1;
  return 1LL;
}
