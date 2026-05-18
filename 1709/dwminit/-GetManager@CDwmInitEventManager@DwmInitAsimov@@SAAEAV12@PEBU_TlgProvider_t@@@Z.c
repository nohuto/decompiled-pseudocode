/*
 * XREFs of ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800079F0
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002610 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800027F4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AC0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180007724 (--0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800083A0 (atexit.c)
 *     _Init_thread_footer @ 0x180009238 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180009298 (_Init_thread_header.c)
 */

void **__fastcall DwmInitAsimov::CDwmInitEventManager::GetManager(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v2; // rdx
  DwmInitAsimov::CDwmInitEventManager *v3; // rcx

  if ( dword_1800129A0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800129A0);
    if ( dword_1800129A0 == -1 )
    {
      DwmInitAsimov::CDwmInitEventManager::CDwmInitEventManager(v3, v2);
      atexit(DwmInitAsimov::CDwmInitEventManager::~CDwmInitEventManager);
      Init_thread_footer(&dword_1800129A0);
    }
  }
  return &qword_1800129A8;
}
