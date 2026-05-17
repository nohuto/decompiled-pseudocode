/*
 * XREFs of TpStartAsyncIoOperation @ 0x180025840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax

  result = sub_180025900(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    sub_180055584(a1 + 56, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 144) + 424LL) != MEMORY[0x7FFE03C0] )
      return sub_180108210();
  }
  return result;
}
