/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x14011AC2C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x1400C0BFC (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v10; // eax

  v6 = *(_QWORD *)(a1 + 112);
  if ( _bittest64(*(const signed __int64 **)(v6 + 32), a2) )
    return 0LL;
  if ( _bittest64(*(const signed __int64 **)(v6 + 16), a2) )
    return 0LL;
  v10 = RtlLengthCurrentClearRunForward((int *)(v6 + 24), a2, a3);
  if ( v10 != a3 && (a4 & 0x40) == 0 )
    return 0LL;
  result = RtlLengthCurrentClearRunForward((int *)(*(_QWORD *)(a1 + 112) + 8LL), a2, v10);
  if ( (_DWORD)result != a3 && (a4 & 0x40) == 0 )
    return 0LL;
  return result;
}
