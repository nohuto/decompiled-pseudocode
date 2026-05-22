/*
 * XREFs of ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000995C
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180009588 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x180009900 (-OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::OnKeyChange(RegistryWatcher *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  (*((void (__fastcall **)(_QWORD, _QWORD))this + 6))(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
  if ( RegNotifyChangeKeyValue(*((HKEY *)this + 3), 0, 0x10000004u, *((HANDLE *)this + 4), 1) )
  {
    v2 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 208, 255);
  }
  return v2;
}
