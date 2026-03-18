/*
 * XREFs of MmReturnPoolQuota @ 0x14002C670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_14036BDD8 -= a2;
  else
    qword_14036BDE0 -= a2;
}
