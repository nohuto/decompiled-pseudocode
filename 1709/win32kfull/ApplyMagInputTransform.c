/*
 * XREFs of ApplyMagInputTransform @ 0x1C01AA340
 * Callers:
 *     <none>
 * Callees:
 *     MagInputTransform @ 0x1C00FD404 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x1C00FD424 (AcquireMagInputLock.c)
 *     MagnificationTransformPoint @ 0x1C01DFDC4 (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  AcquireMagInputLock();
  result = MagInputTransform();
  v5 = result;
  if ( result )
  {
    MagnificationTransformPoint(result, a1);
    result = MagnificationTransformPoint(v5, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
