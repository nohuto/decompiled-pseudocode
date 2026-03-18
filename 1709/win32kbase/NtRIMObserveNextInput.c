/*
 * XREFs of NtRIMObserveNextInput @ 0x1C01000B0
 * Callers:
 *     <none>
 * Callees:
 *     rimObsObserveNextInput @ 0x1C01146D0 (rimObsObserveNextInput.c)
 */

__int64 __fastcall NtRIMObserveNextInput(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return rimObsObserveNextInput(a1, a2);
}
