/*
 * XREFs of PortMapBuildLunEntry @ 0x1C0016C4C
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001689C (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     PortRegistrySetValueKey @ 0x1C0016D48 (PortRegistrySetValueKey.c)
 *     PortRegistryCreateKeyEx @ 0x1C0016F18 (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildLunEntry(
        __int64 a1,
        int a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        ULONG a6,
        __int64 a7,
        int a8,
        HANDLE Handle)
{
  __int64 result; // rax

  result = PortRegistryCreateKeyEx(a1, 1LL, &Handle, L"Logical Unit Id %d", a2);
  if ( (int)result >= 0 )
  {
    PortRegistrySetValueKey(Handle, 0x24u);
    if ( a4 && *a4 )
      PortRegistrySetValueKey(Handle, (unsigned __int16)*a4);
    PortRegistrySetValueKey(Handle, 0x1Cu);
    if ( a7 )
      PortRegistrySetValueKey(Handle, 2 * a8 + 2);
    if ( a5 )
      PortRegistrySetValueKey(Handle, a6);
    ZwClose(Handle);
    return 0LL;
  }
  return result;
}
