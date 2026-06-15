/*
 * XREFs of _CMonitorManager::CreateMonitor_::_1_::dtor$3 @ 0x1800DE771
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CMonitorManager::CreateMonitor_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 152), (const struct std::nothrow_t *)&std::nothrow);
}
