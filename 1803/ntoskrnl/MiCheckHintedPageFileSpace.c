/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x14009D3C8
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x1400D7650 (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  int v9; // ebx

  v6 = *(_QWORD *)(a1 + 112);
  if ( _bittest64(*(const signed __int64 **)(v6 + 32), a2) )
    return 0LL;
  if ( _bittest64(*(const signed __int64 **)(v6 + 16), a2) )
    return 0LL;
  v9 = a4 & 0x40;
  if ( (unsigned int)RtlLengthCurrentClearRunForward(v6 + 24, a2) != a3 && !v9 )
    return 0LL;
  result = RtlLengthCurrentClearRunForward(*(_QWORD *)(a1 + 112) + 8LL, a2);
  if ( (_DWORD)result != a3 && !v9 )
    return 0LL;
  return result;
}
