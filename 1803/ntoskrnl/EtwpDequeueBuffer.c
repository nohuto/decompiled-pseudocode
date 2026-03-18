/*
 * XREFs of EtwpDequeueBuffer @ 0x1400D43F8
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400D42C8 (EtwpDequeueFreeBuffer.c)
 *     EtwpFreeTraceBufferPool @ 0x140493744 (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD **v3; // r10
  _QWORD *v4; // r8

  v2 = 0LL;
  v3 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    *v3 = (_QWORD *)*v4;
    if ( *v4 )
      *v4 = 0LL;
    else
      *a2 = v3;
    v2 = v4 - 4;
    if ( *((_DWORD *)v4 + 3) != 6 )
      break;
    *v4 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)(a1 + 1200) = v4;
  }
  return v2;
}
