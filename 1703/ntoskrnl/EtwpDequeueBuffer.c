/*
 * XREFs of EtwpDequeueBuffer @ 0x140087C00
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x140435B54 (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r9
  _QWORD *i; // r8
  _QWORD *v4; // r8

  v2 = (_QWORD **)(a2 + 1);
  for ( i = 0LL; *v2; *(_QWORD *)(a1 + 1032) = i + 4 )
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
    i[4] = *(_QWORD *)(a1 + 1032);
  }
  return i;
}
