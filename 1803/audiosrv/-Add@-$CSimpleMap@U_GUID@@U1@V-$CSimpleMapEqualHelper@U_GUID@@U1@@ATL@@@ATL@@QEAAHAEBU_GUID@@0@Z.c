/*
 * XREFs of ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800E9990
 * Callers:
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051CEC (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     _lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator() @ 0x180064978 (_lambda_7f4a656a268d6d0b9fd67fb138151b91_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  GUID *v12; // r8
  _OWORD *v13; // rdx

  v5 = _o__recalloc(*a1, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v5 )
    return 0LL;
  v7 = a1[1];
  *a1 = v5;
  v8 = _o__recalloc(v7, *((_DWORD *)a1 + 4) + 1, 16LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *a1;
  v11 = 16LL * *((int *)a1 + 4);
  a1[1] = v8;
  v12 = (GUID *)(v11 + v10);
  if ( v12 )
  {
    *v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v9 = a1[1];
  }
  v13 = (_OWORD *)(v9 + v11);
  if ( v13 )
    *v13 = *a3;
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
