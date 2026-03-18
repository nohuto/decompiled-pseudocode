/*
 * XREFs of TR_GetDequeuePointer @ 0x1C0020AF8
 * Callers:
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TR_GetDequeuePointer(__int64 a1)
{
  unsigned __int64 result; // rax

  result = ((unsigned __int8)*(_DWORD *)(a1 + 200) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL)) & 1 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192));
  if ( *(_DWORD *)(a1 + 64) )
    return result & 0xFFFFFFFFFFFFFFF1uLL | 2;
  return result;
}
