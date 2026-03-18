/*
 * XREFs of WheaGetErrorSource @ 0x1402BE5D0
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x1402BED10 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 89) & -(__int64)(ErrorSource != 0);
}
