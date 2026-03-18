/*
 * XREFs of EtwpDequeueBuffer @ 0x1400E0748
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14002441C (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpFreeTraceBufferPool @ 0x14058E374 (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r9
  _QWORD *i; // r8
  _QWORD *v4; // r8

  v2 = (_QWORD **)(a2 + 1);
  for ( i = 0LL; *v2; *(_QWORD *)(a1 + 2344) = i + 4 )
  {
    v4 = *v2;
    *v2 = (_QWORD *)**v2;
    if ( *v4 )
      *v4 = 0LL;
    else
      *a2 = v2;
    i = v4 - 4;
    if ( *((_DWORD *)i + 11) != 6 )
      break;
    i[4] = *(_QWORD *)(a1 + 2344);
  }
  return i;
}
