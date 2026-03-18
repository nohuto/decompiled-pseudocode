/*
 * XREFs of DebugService2 @ 0x140188F40
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1400F96A8 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x1400F9770 (DbgLoadImageSymbols.c)
 *     DbgLoadUserImageSymbols @ 0x14015B3A0 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     DbgCommandString @ 0x140250880 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x1402509BC (DbgUnLoadImageSymbols.c)
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
