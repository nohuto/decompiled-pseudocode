/*
 * XREFs of ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ @ 0x180042EA8 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(__int64 *a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // r11

  v2 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a1, a2);
  if ( v2 == -1 )
    return 0LL;
  else
    return ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, v2);
}
