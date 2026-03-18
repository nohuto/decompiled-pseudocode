/*
 * XREFs of WdipSemQueryEnabledInstanceTable @ 0x1405AB858
 * Callers:
 *     WdipSemMarkInstanceForDeletion @ 0x1405AB7E0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14073F128 (WdipSemReserveInstanceTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WdipSemQueryEnabledInstanceTable(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx
  __int64 v5; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    for ( i = (__int64 *)WdipSemEnabledInstanceTable; &WdipSemEnabledInstanceTable != i; i = (__int64 *)*i )
    {
      v5 = *a1 - i[2];
      if ( *a1 == i[2] )
        v5 = a1[1] - i[3];
      if ( !v5 )
        return i;
    }
  }
  return (__int64 *)v1;
}
