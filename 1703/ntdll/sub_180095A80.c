/*
 * XREFs of sub_180095A80 @ 0x180095A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005640 @ 0x180005640 (sub_180005640.c)
 */

__int64 __fastcall sub_180095A80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v5 = (*(_QWORD *)(a1 + 72) << 12) + (*(_QWORD *)a1 << 12);
    v6 = *(_QWORD *)(a1 + 8) << 12;
    v4 = (*(_QWORD *)(a1 + 80) << 12) + v6;
    result = 0LL;
  }
  else
  {
    result = sub_180005640(a1, &v5, &v6);
    if ( (int)result < 0 )
      return result;
    v4 = v6;
  }
  *(_QWORD *)(a2 + 8) += v4;
  *(_QWORD *)a2 += v5;
  ++*(_DWORD *)(a2 + 16);
  return result;
}
