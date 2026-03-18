/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x1407709D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierKeRegisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeRegisterNmiCallback)();
}
