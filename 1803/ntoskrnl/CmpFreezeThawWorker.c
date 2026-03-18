/*
 * XREFs of CmpFreezeThawWorker @ 0x1406F6CF0
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
