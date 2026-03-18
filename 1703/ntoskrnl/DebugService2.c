/*
 * XREFs of DebugService2 @ 0x140189440
 * Callers:
 *     DbgLoadImageSymbols @ 0x1400700F0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x140167B48 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     DbgCommandString @ 0x14023AFF0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x14023B110 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DebugService2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return result;
}
