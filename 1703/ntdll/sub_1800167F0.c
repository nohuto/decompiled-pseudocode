/*
 * XREFs of sub_1800167F0 @ 0x1800167F0
 * Callers:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800167F0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (***)(void))(a1 + 8))();
  return result;
}
