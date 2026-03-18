/*
 * XREFs of MmReturnPoolQuota @ 0x14007FFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_1403CB238 -= a2;
  else
    qword_1403CB240 -= a2;
}
