/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800756BC
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180025D44 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800747B0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180074A10 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // r8
  char *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2;
  if ( (int)v3 == (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
  {
    v4 = 0LL;
    if ( (int)v3 <= 0 )
      return 1;
    v5 = v2 - v1;
    while ( *(_DWORD *)v1 == *(_DWORD *)&v1[v5] )
    {
      ++v4;
      v1 += 4;
      if ( v4 >= (int)v3 )
        return 1;
    }
  }
  return 0;
}
