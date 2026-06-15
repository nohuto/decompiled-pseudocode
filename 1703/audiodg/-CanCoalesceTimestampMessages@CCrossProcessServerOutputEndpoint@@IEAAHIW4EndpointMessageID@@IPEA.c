/*
 * XREFs of ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x14002FAC4
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14001BEA0 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rdx
  __int64 v10; // r10
  unsigned int v11; // ecx

  v6 = a2;
  v7 = 1;
  v8 = *(_QWORD *)(a1 + 112);
  v10 = v6 << 6;
  if ( *(_DWORD *)(v10 + v8) != 1 )
    return 0;
  if ( a3 != 1 )
    return 0;
  if ( *(_DWORD *)(a1 + 144) )
    return 0;
  if ( a6 != 1 )
    return 0;
  if ( *(_DWORD *)(a5 + 36) != 2 )
    return 0;
  if ( *(_DWORD *)(v10 + v8 + 8) != 1 )
    return 0;
  if ( (*(_DWORD *)(v10 + v8 + 52) & 0xFFFFFFFC) != 0 )
    return 0;
  if ( *(float *)(v10 + v8 + 48) != *(float *)(a5 + 32) )
    return 0;
  v11 = *(_DWORD *)(v10 + v8 + 56);
  if ( v11 >= *(_DWORD *)(a1 + 88)
    || *(_DWORD *)(v10 + v8 + 4) + v11 * *(_DWORD *)(a1 + 80) != a4
    || v11 + *(_QWORD *)(v10 + v8 + 16) != *(_QWORD *)a5
    || v11 + *(_QWORD *)(v10 + v8 + 24) != *(_QWORD *)(a5 + 8) )
  {
    return 0;
  }
  return v7;
}
