/*
 * XREFs of sub_180028870 @ 0x180028870
 * Callers:
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180028870(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (***)(void))(a1 + 8))();
  return result;
}
