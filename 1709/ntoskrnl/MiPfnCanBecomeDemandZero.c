/*
 * XREFs of MiPfnCanBecomeDemandZero @ 0x14011E440
 * Callers:
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiPfnCanBecomeDemandZero(__int64 a1, __int64 a2)
{
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(a2 + 8) >= 0 )
      return 0LL;
    return (*(_DWORD *)(a2 + 16) & 0x400LL) == 0;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 192) & 7u) >= 2 )
      return 0LL;
    return (MiGetPagePrivilege(a2, 0, 0LL) & 0xFFFFFFFD) == 0;
  }
}
