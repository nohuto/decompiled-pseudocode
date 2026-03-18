/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1402821B4
 * Callers:
 *     PoSetProcessorQoS @ 0x140277C7C (PoSetProcessorQoS.c)
 * Callees:
 *     PpmEventVpQosChange @ 0x140281D00 (PpmEventVpQosChange.c)
 */

BOOLEAN __fastcall PpmHvSetVirtualProcessorQos(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 24304);
  v3 = *(_QWORD *)(a1 + 25016);
  *(_DWORD *)(a1 + 24308) = v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = v2;
    *(_DWORD *)(v3 + 16) = 1;
    __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
  }
  return PpmEventVpQosChange(a1);
}
