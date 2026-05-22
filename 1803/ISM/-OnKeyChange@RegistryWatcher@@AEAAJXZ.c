/*
 * XREFs of ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x1800096B0
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x1800096A0 (-OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::OnKeyChange(RegistryWatcher *this)
{
  unsigned int v2; // edi

  v2 = 0;
  (*((void (__fastcall **)(_QWORD, _QWORD))this + 6))(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
  if ( RegNotifyChangeKeyValue(*((HKEY *)this + 3), 0, 0x10000004u, *((HANDLE *)this + 4), 1) )
    return (unsigned int)-2147418113;
  return v2;
}
