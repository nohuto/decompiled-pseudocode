/*
 * XREFs of KsepDbFreeDriverShims @ 0x1405FC854
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1405FE3B8 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
