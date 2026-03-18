/*
 * XREFs of PopWriteSecurePagesCallback @ 0x140278C18
 * Callers:
 *     HvlIterateSecurePagesForHibernation @ 0x14022BDBC (HvlIterateSecurePagesForHibernation.c)
 * Callees:
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePagesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PopWriteHiberPages(
             a1,
             a2,
             1LL,
             *(_DWORD *)(a1 + 248)
           + (unsigned int)((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
           + *(_DWORD *)(a1 + 252)
           + 2);
  ++*(_DWORD *)(a1 + 252);
  return result;
}
