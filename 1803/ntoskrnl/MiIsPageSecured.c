/*
 * XREFs of MiIsPageSecured @ 0x14015B694
 * Callers:
 *     MiCopySinglePage @ 0x14015B52C (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x140255324 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x140256D30 (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x140256F18 (MiAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  _BOOL8 result; // rax
  unsigned __int64 v2; // rcx

  result = 0;
  if ( (MiFlags & 0x8000) != 0
    && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3
    && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( !v2 || v2 <= 0xFFFFF6BFFFFFFF78uLL && v2 >= 0xFFFFF68000000000uLL )
      return 1;
  }
  return result;
}
