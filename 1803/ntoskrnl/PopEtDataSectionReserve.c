/*
 * XREFs of PopEtDataSectionReserve @ 0x14051E710
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14051D9F0 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopEtDataSectionReserve(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // edx
  unsigned __int64 result; // rax

  v3 = a2 * (unsigned __int64)a1[3];
  if ( *a3 >= 0x7FFFFFFFu
    || v3 >= 0x7FFFFFFF
    || (v4 = ~(a1[4] - 1) & (a1[4] + *a3 - 1), result = v3 + v4, result >= 0x7FFFFFFF) )
  {
    result = 0x7FFFFFFFLL;
  }
  else
  {
    *a1 = v4;
    a1[1] = v3;
    a1[2] = result;
  }
  *a3 = result;
  return result;
}
