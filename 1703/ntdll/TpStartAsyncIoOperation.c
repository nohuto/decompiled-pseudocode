/*
 * XREFs of TpStartAsyncIoOperation @ 0x180017660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_1800176B8(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    sub_18007358C(a1 + 56, 1LL, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v3 = *(_QWORD *)(a1 + 144);
    result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v3 + 424) != MEMORY[0x7FFE03C0] )
      return sub_180105430(v3);
  }
  return result;
}
