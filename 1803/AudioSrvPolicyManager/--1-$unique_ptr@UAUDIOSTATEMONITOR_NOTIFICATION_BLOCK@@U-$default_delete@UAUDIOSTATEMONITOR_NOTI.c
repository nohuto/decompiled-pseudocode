/*
 * XREFs of ??1?$unique_ptr@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18002F378
 * Callers:
 *     _AudioStateMonitorManager::RecalculateVolume_::_1_::dtor$21 @ 0x180037DEA (_AudioStateMonitorManager--RecalculateVolume_--_1_--dtor$21.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>::~unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x20);
}
