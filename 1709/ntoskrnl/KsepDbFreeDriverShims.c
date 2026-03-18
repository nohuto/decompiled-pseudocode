/*
 * XREFs of KsepDbFreeDriverShims @ 0x140546CFC
 * Callers:
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v5; // rdi

  if ( a1 )
  {
    v2 = 0LL;
    if ( a2 )
    {
      v5 = a1 + 3;
      do
      {
        if ( v5[2] )
          KsepStringFree(&a1[10 * v2 + 4]);
        if ( *v5 )
          KsepStringFree(&a1[10 * v2 + 2]);
        if ( v5[4] )
          KsepStringFree(&a1[10 * v2 + 6]);
        v2 = (unsigned int)(v2 + 1);
        v5 += 10;
      }
      while ( (unsigned int)v2 < a2 );
    }
    KsepPoolFreePaged(a1);
  }
}
