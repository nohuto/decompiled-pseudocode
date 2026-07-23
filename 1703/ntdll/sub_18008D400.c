/*
 * XREFs of sub_18008D400 @ 0x18008D400
 * Callers:
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     ZwRaiseHardError @ 0x1800A7E30 (ZwRaiseHardError.c)
 */

NTSTATUS __fastcall sub_18008D400(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  NTSTATUS result; // eax
  unsigned __int64 Parameters[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG Response; // [rsp+60h] [rbp+8h] BYREF
  DWORD v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = sub_180032C0C(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8, (char **)&v9);
  v4 = v9;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x200000u;
    return 0;
  }
  else if ( *(_WORD *)(qword_18015B278 + 72) <= 3u )
  {
    Parameters[0] = v1 + 72;
    result = ZwRaiseHardError(1073741838, 1u, 1u, Parameters, 2u, &Response);
    if ( result >= 0 )
    {
      if ( Response == 3 )
      {
        if ( dword_18015C018 != 3 )
          ++dword_18015AEC8;
        return -1073741701;
      }
      else
      {
        *(_DWORD *)(v1 + 104) &= ~4u;
      }
    }
  }
  else
  {
    return 1073741838;
  }
  return result;
}
