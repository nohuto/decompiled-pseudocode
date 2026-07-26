/*
 * XREFs of __security_init_cookie @ 0x1C011104C
 * Callers:
 *     GsDriverEntry @ 0x1C0111080 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
}
