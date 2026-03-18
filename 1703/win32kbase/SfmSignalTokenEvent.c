/*
 * XREFs of SfmSignalTokenEvent @ 0x1C008D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SfmSignalTokenEvent()
{
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  ZwSetEvent(*((HANDLE *)gpSfmState + 3), &PreviousState);
  return (unsigned int)PreviousState;
}
