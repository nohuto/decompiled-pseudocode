/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000B37C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_18003ADF0);
  qword_18003AE18 = 0LL;
  dword_18003AE40 = 10;
  xmmword_18003AE20 = 0LL;
  xmmword_18003AE30 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
