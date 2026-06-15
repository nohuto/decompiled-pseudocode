/*
 * XREFs of ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800B1194
 * Callers:
 *     _lambda_a89b631c09f285a4d3ef916a35e3beda_::operator() @ 0x1800B04EC (_lambda_a89b631c09f285a4d3ef916a35e3beda_--operator().c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B12F4 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
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
  __int64 v10; // rdx
  GUID *v11; // rcx
  _OWORD *v12; // r8

  v5 = _o__recalloc(*a1, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v5 )
    return 0LL;
  v7 = a1[1];
  *a1 = v5;
  v8 = _o__recalloc(v7, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v8 )
    return 0LL;
  v9 = *a1;
  v10 = 16LL * *((int *)a1 + 4);
  a1[1] = v8;
  v11 = (GUID *)(v10 + v9);
  if ( v11 )
    *v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v12 = (_OWORD *)(v10 + a1[1]);
  if ( v12 )
    *v12 = *a3;
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
