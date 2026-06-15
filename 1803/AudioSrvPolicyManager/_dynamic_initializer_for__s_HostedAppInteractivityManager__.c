/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800013A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010160 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_18004F090);
  qword_18004F0B8 = 0LL;
  dword_18004F0E0 = 10;
  xmmword_18004F0C0 = 0LL;
  xmmword_18004F0D0 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
