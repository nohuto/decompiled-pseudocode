/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x14007E4D0
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x1400AC6E8 (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 112);
  if ( _bittest64(*(const signed __int64 **)(v6 + 32), a2)
    || _bittest64(*(const signed __int64 **)(v6 + 16), a2)
    || (unsigned int)RtlLengthCurrentClearRunForward(v6 + 24, a2) != a3 && (a4 & 0x40) == 0 )
  {
    return 0LL;
  }
  result = RtlLengthCurrentClearRunForward(*(_QWORD *)(a1 + 112) + 8LL, a2);
  if ( (_DWORD)result != a3 && (a4 & 0x40) == 0 )
    return 0LL;
  return result;
}
