/*
 * XREFs of WbFreeWarbirdProcess @ 0x1405399A8
 * Callers:
 *     sub_14050F2F4 @ 0x14050F2F4 (sub_14050F2F4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x14048B8D4 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_14050F0D8 @ 0x14050F0D8 (sub_14050F0D8.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 *     sub_140539B14 @ 0x140539B14 (sub_140539B14.c)
 *     WbFreeMemoryBlock @ 0x14053A648 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_14050F0D8((__int64)P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_140539B14(P + 22);
    for ( j = 0; j < P[3]; ++j )
      sub_14050F8B4((__int64)P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_140539B14(P + 2);
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (char *)v6 == v5 )
        break;
      sub_14050F8B4((__int64)P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * P[34] + *((_QWORD *)P + 19)));
    sub_140539B14(P + 34);
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_140539B14(P + 46);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
