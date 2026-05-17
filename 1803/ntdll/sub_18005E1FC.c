/*
 * XREFs of sub_18005E1FC @ 0x18005E1FC
 * Callers:
 *     sub_18005E348 @ 0x18005E348 (sub_18005E348.c)
 *     sub_180061ED0 @ 0x180061ED0 (sub_180061ED0.c)
 * Callees:
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 */

_BOOL8 __fastcall sub_18005E1FC(__int64 a1)
{
  bool v1; // zf
  _BOOL8 result; // rax
  char *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = xmmword_18015A790;
  result = 0;
  if ( v1 )
  {
    v3 = sub_18005DFE4(&v5);
    if ( v4 != *(_QWORD *)v3 )
      return 1;
  }
  return result;
}
