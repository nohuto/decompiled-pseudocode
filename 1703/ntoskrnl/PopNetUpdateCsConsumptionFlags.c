/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1405D0EF0
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1405D0C70 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1406CB6E8 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_14036E148 )
  {
    if ( (byte_14036E1ED & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_14036E1ED = (PopNetCompliantNicCount != 0) | byte_14036E1ED & 0xFE;
    }
  }
  return result;
}
