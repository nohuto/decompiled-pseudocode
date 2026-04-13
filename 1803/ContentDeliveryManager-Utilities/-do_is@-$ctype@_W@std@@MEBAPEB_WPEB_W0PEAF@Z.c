/*
 * XREFs of ?do_is@?$ctype@_W@std@@MEBAPEB_WPEB_W0PEAF@Z @ 0x180029DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall std::ctype<wchar_t>::do_is(__int64 a1, const wchar_t *a2, const wchar_t *a3, __int16 *a4)
{
  return Getwctypes(a2, a3, a4, (const _Ctypevec *)(a1 + 16));
}
