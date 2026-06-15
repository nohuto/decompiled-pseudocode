/*
 * XREFs of _AudioServerInitialize_Internal_::_1_::dtor$1 @ 0x18006A18C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerInitialize_Internal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CWatchdogTimer<1>::~CWatchdogTimer<1>(a2 + 200);
}
