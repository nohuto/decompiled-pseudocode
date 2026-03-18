/*
 * XREFs of CmpRemoveKeyHashFromTableEntry @ 0x14044A4F0
 * Callers:
 *     CmpRemoveKeyHash @ 0x14044A4A4 (CmpRemoveKeyHash.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRemoveKeyHashFromTableEntry(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax

  v2 = (__int64 *)(a2 + 16);
  if ( v2 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( v3 == a1 )
      {
        *v2 = *(_QWORD *)(v3 + 8);
        return;
      }
      v2 = (__int64 *)(v3 + 8);
    }
    while ( v3 != -8 );
  }
}
