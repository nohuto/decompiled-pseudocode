/*
 * XREFs of KsepRegistryQueryDriverShims @ 0x1404B47CC
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KsepRegistryOpenKey @ 0x1404B49C4 (KsepRegistryOpenKey.c)
 *     KsepRegistryQuerySZ @ 0x14059BFD4 (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryDriverShims(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int SZ; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  SZ = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver",
         a1,
         &Handle);
  if ( SZ >= 0 )
    SZ = KsepRegistryQuerySZ(Handle, L"Shims", 2048LL, a4);
  if ( SZ == -1073741772 )
    SZ = -1073741275;
  if ( Handle )
  {
    ZwClose(Handle);
    _InterlockedIncrement(dword_14034F7FC);
  }
  return (unsigned int)SZ;
}
