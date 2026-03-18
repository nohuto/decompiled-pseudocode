/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1405EAF04
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1405EAC60 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140389BC8 )
  {
    if ( (byte_140389C6D & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140389C6D = (PopNetCompliantNicCount != 0) | byte_140389C6D & 0xFE;
    }
  }
  return result;
}
