/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x140553B64
 * Callers:
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x140480E10 (EtwpApplyScopeFilters.c)
 */

char __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, char a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v7; // rsi
  char v8; // [rsp+40h] [rbp+18h] BYREF

  result = -(char)a3;
  v7 = (_BYTE)a3 != 0;
  if ( a4 == 1 )
  {
    v8 = a2;
    EtwpApplyScopeFilters(a1, 1, a3, &v8);
    result = *(_BYTE *)(a1 + 98) >> 3;
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      result = v8;
      *(_BYTE *)(a1 + 100) = v8;
    }
    else
    {
      *(_BYTE *)(v7 + a1 + 100) = v8 | *(_BYTE *)(v7 + a1 + 100) & ~a2;
    }
  }
  else if ( !a4 )
  {
    result = ~(*(_BYTE *)(a1 + 98) >> 3);
    if ( (*(_BYTE *)(a1 + 98) & 8) == 0 )
      *(_BYTE *)(v7 + a1 + 100) &= ~a2;
  }
  return result;
}
