/*
 * XREFs of NdisCurrentGroupAndProcessor @ 0x1C0051FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PROCESSOR_NUMBER NdisCurrentGroupAndProcessor(void)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  KeGetCurrentProcessorNumberEx(&ProcNumber);
  return ProcNumber;
}
