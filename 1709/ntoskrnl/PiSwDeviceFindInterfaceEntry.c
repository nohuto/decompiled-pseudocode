/*
 * XREFs of PiSwDeviceFindInterfaceEntry @ 0x14059F178
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1406CDE70 (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 */

__int64 *__fastcall PiSwDeviceFindInterfaceEntry(__int64 a1, const wchar_t *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  while ( v4 != v2 )
  {
    if ( !wcsicmp(a2, (const wchar_t *)v4[2]) )
      return v4;
    v4 = (__int64 *)*v4;
  }
  return (__int64 *)v5;
}
