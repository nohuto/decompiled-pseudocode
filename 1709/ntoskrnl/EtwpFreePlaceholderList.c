/*
 * XREFs of EtwpFreePlaceholderList @ 0x1401296F8
 * Callers:
 *     EtwpFreeCompression @ 0x1401292C0 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x140281A08 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 2344);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 2344) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
