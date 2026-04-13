/*
 * XREFs of ?do_tolower@?$ctype@D@std@@MEBADD@Z @ 0x1800AB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall std::ctype<char>::do_tolower(__int64 a1, unsigned __int8 a2)
{
  return Tolower(a2, (const _Ctypevec *)(a1 + 16));
}
