/*
 * XREFs of ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800059A0
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002550 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800056D4 (--0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180006320 (atexit.c)
 */

void **__fastcall DwmInitAsimov::CDwmInitEventManager::GetManager(
        const struct _TlgProvider_t *a1,
        const struct _TlgProvider_t *a2)
{
  if ( (dword_18000EFC0 & 1) == 0 )
  {
    dword_18000EFC0 |= 1u;
    DwmInitAsimov::CDwmInitEventManager::CDwmInitEventManager(a1, a2);
    atexit(DwmInitAsimov::CDwmInitEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  return &qword_18000EFC8;
}
