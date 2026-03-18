/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x1C001ACE8
 * Callers:
 *     ESM_StoppingEndpoint @ 0x1C003F350 (ESM_StoppingEndpoint.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 */

__int64 __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // r9d
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v1 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 160), 0, 0x60uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_OnCancelStopCompletion;
  v5 = v4 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v6;
  v9 = *(_WORD *)(v1 + 38) & 0x1F;
  v8 = v6;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 80),
    4u,
    0xDu,
    0x72u,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    v8,
    v9);
  return Command_SendCommand(v3, v1);
}
