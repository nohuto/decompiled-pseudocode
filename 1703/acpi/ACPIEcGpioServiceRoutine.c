/*
 * XREFs of ACPIEcGpioServiceRoutine @ 0x1C004C440
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcMaskInterrupt @ 0x1C004C6C8 (ACPIEcMaskInterrupt.c)
 */

char __fastcall ACPIEcGpioServiceRoutine(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 882) & 1) == 0 )
    ACPIEcMaskInterrupt(a2);
  KeInsertQueueDpc((PRKDPC)(a2 + 816), 0LL, 0LL);
  return 0;
}
