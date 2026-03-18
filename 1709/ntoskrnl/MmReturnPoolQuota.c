/*
 * XREFs of MmReturnPoolQuota @ 0x1400F1540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_1403880D8 -= a2;
  else
    qword_1403880E0 -= a2;
}
