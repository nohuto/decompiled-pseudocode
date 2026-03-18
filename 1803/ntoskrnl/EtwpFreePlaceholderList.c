/*
 * XREFs of EtwpFreePlaceholderList @ 0x14000611C
 * Callers:
 *     EtwpFreeCompression @ 0x140005FF4 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1402B3C9C (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1200);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1200) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
