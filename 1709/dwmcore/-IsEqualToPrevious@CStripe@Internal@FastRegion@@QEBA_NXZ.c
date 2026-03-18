/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800B2FD0
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FAA0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800302B0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // rdx
  char *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (int)((v1 - v2) >> 2);
  if ( v3 == (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
  {
    v4 = 0LL;
    if ( v3 <= 0 )
      return 1;
    v5 = v2 - v1;
    while ( *(_DWORD *)v1 == *(_DWORD *)&v1[v5] )
    {
      ++v4;
      v1 += 4;
      if ( v4 >= v3 )
        return 1;
    }
  }
  return 0;
}
