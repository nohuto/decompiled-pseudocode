/*
 * XREFs of EtwpFreePlaceholderList @ 0x14001B798
 * Callers:
 *     EtwpFreeCompression @ 0x14001B67C (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x140257FA8 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1032);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1032) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
