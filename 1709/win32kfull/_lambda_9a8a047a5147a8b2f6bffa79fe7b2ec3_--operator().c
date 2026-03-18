/*
 * XREFs of _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C024BE44
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C0099740 (GreOnCURSINFODestroy.c)
 * Callees:
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(__int64 a1, __int64 a2, struct _CURSINFO *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  GreAcquireSemaphore(a2);
  if ( gCachedSetPointerState == a3 )
    GreSetPointer(0LL, 0, 0, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
