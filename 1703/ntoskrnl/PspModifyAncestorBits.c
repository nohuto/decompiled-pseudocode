/*
 * XREFs of PspModifyAncestorBits @ 0x1406E1728
 * Callers:
 *     PspRemoveRateControl @ 0x1406E194C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1406E1D28 (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1072); i; i = *(_QWORD *)(i + 1072) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1304), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1304), result);
    }
  }
  return result;
}
