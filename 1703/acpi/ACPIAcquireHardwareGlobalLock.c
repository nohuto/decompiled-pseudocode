/*
 * XREFs of ACPIAcquireHardwareGlobalLock @ 0x1C0017294
 * Callers:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C00174C8 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0017710 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BD70 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIAcquireHardwareGlobalLock(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  bool v2; // zf
  signed __int32 v3; // eax

  if ( *((_BYTE *)AcpiInformation + 84) )
    return 1;
  v1 = *a1;
  do
  {
    v3 = _InterlockedCompareExchange(a1, ((v1 & 2 | 4u) >> 1) | v1, v1);
    v2 = v1 == v3;
    v1 = v3;
  }
  while ( !v2 );
  return (v3 & 2) == 0;
}
