/*
 * XREFs of TpReleaseWork @ 0x1800589B0
 * Callers:
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 * Callees:
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = sub_180058A10(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
