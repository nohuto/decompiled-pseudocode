/*
 * XREFs of WbFreeWarbirdProcess @ 0x140549778
 * Callers:
 *     sub_14045AAB0 @ 0x14045AAB0 (sub_14045AAB0.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x14041FBAC (WbFreeWarbirdEncryptionSegment.c)
 *     sub_14045B504 @ 0x14045B504 (sub_14045B504.c)
 *     sub_14045C21C @ 0x14045C21C (sub_14045C21C.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  __int64 **v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_14045B504((__int64)P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_14045C21C((__int64)(P + 22));
    for ( j = 0; j < P[3]; ++j )
      sub_140548560((__int64)P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_14045C21C((__int64)(P + 2));
    v5 = (__int64 **)(P + 16);
    while ( 1 )
    {
      v6 = *v5;
      v7 = **v5;
      if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( v6 == (__int64 *)v5 )
        break;
      sub_140548560((__int64)P, (__int64)v6);
    }
    for ( k = 0; k < P[35]; ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * P[34] + *((_QWORD *)P + 19)));
    sub_14045C21C((__int64)(P + 34));
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_14045C21C((__int64)(P + 46));
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
