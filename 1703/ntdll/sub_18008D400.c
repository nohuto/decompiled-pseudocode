/*
 * XREFs of sub_18008D400 @ 0x18008D400
 * Callers:
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     ZwRaiseHardError @ 0x1800A7E30 (ZwRaiseHardError.c)
 */

__int64 __fastcall sub_18008D400(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = sub_180032C0C(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8, &v9);
  v4 = v9;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x200000u;
    return 0LL;
  }
  else if ( *(_WORD *)(qword_18015B278 + 72) <= 3u )
  {
    v6[0] = v1 + 72;
    result = ZwRaiseHardError(1073741838LL, 1LL, 1LL, v6, 2, &v7);
    if ( (int)result >= 0 )
    {
      if ( v7 == 3 )
      {
        if ( dword_18015C018 != 3 )
          ++dword_18015AEC8;
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
