/*
 * XREFs of ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14024C708
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  const signed __int64 *v4; // r8
  char v5; // bl
  unsigned int v6; // ecx
  volatile signed __int32 *v7; // r10
  int v8; // edx
  unsigned __int64 v9; // rax

  if ( a3 )
  {
    v4 = *(const signed __int64 **)(a1 + 848);
    v5 = a2;
    if ( _bittest64(v4, a2) )
    {
      LOBYTE(v6) = 1;
      v7 = (volatile signed __int32 *)v4 + ((unsigned __int64)a2 >> 5);
      if ( (unsigned __int64)(a2 & 0x1F) + 1 > 0x20 )
      {
        v8 = a2 & 0x1F;
        if ( !v8 )
          goto LABEL_10;
        _InterlockedAnd(v7++, ~(((1 << (32 - v8)) - 1) << (v5 & 0x1F)));
        v6 = 1 - (32 - v8);
        if ( v6 >= 0x20 )
        {
          v9 = (unsigned __int64)v6 >> 5;
          do
          {
            *v7 = 0;
            v6 -= 32;
            ++v7;
            --v9;
          }
          while ( v9 );
        }
        if ( v6 )
LABEL_10:
          _InterlockedAnd(v7, ~((1 << v6) - 1));
      }
      else
      {
        _InterlockedAnd(v7, ~(1 << (a2 & 0x1F)));
      }
      ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 864);
    }
  }
  else
  {
    _bittestandset(*(signed __int32 **)(a1 + 848), a2);
  }
}
