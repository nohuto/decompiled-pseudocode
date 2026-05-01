/*
 * XREFs of ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18002FC40
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000C090 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ModernResourceEnforcer::ModernResourceEnforcerWorkItem *__fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  void *v2; // r8
  void *v3; // r8
  char *v4; // rcx

  if ( *((_DWORD *)this + 32) > 1u )
  {
    v2 = (void *)*((_QWORD *)this + 14);
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v3 = (void *)*((_QWORD *)this + 15);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  v4 = (char *)*((_QWORD *)this + 1);
  if ( v4 != (char *)this + 24 )
    operator delete(v4);
  operator delete(this);
  return this;
}
