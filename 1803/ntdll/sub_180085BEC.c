/*
 * XREFs of sub_180085BEC @ 0x180085BEC
 * Callers:
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     ZwRaiseHardError @ 0x18009D690 (ZwRaiseHardError.c)
 */

__int64 __fastcall sub_180085BEC(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = sub_18001014C(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8, &v9);
  v4 = v9;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0LL;
  }
  else if ( *(_WORD *)(qword_18015C2A8 + 72) <= 3u )
  {
    v6[0] = v1 + 72;
    result = ZwRaiseHardError(1073741838LL, 1LL, 1LL, v6, 2, &v7);
    if ( (int)result >= 0 )
    {
      if ( v7 == 3 )
      {
        if ( dword_18015CFB8 != 3 )
          ++dword_18015BEE8;
        return 3221225595LL;
      }
      else
      {
        *(_DWORD *)(v1 + 104) &= ~4u;
      }
    }
  }
  else
  {
    return 1073741838LL;
  }
  return result;
}
