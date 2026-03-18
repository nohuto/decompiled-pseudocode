/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14064FDC4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14064FB20 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140764F48 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_1403CD9C8 )
  {
    if ( (byte_1403CDA6D & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_1403CDA6D = (PopNetCompliantNicCount != 0) | byte_1403CDA6D & 0xFE;
    }
  }
  return result;
}
