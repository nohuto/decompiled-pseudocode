/*
 * XREFs of MiPageMightBeZero @ 0x140025F10
 * Callers:
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiPageMightBeZero(__int64 a1, ULONG_PTR a2)
{
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(a2 + 8) >= 0 || (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      return 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 || (MiGetPagePrivilege(a2) & 0xFFFFFFFD) != 0 )
  {
    return 0LL;
  }
  return *(_WORD *)(a2 + 32) == 1 && (*(_BYTE *)(a2 + 34) & 0xC0) == 0x40 && (*(_BYTE *)(a2 + 35) & 0x40) == 0;
}
