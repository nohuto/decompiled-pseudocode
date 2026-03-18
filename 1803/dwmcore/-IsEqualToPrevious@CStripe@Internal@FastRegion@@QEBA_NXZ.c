/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007F920
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E414 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007EF50 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // rdx
  char *v2; // r8
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (int)((v1 - v2) >> 2);
  if ( v3 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  v5 = 0LL;
  if ( v3 > 0 )
  {
    v6 = v2 - v1;
    while ( *(_DWORD *)v1 == *(_DWORD *)&v1[v6] )
    {
      ++v5;
      v1 += 4;
      if ( v5 >= v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
