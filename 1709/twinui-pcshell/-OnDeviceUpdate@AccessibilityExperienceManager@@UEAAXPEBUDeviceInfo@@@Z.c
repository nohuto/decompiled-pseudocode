/*
 * XREFs of ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B24F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceUpdate(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = 0LL;
  if ( a2 )
  {
    v4 = *((_QWORD *)this + 29);
    if ( v4 )
    {
      LOBYTE(v3) = *((_BYTE *)a2 + 960) != 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, v3);
    }
  }
}
