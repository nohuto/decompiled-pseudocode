/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C005E5BC
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x1C0013480 (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C0013EE4 (RaidUnitGetInitialTimestamp.c)
 *     RaidAdapterHack @ 0x1C0019CA0 (RaidAdapterHack.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0032200 (StorAdapterDeviceRegistryKeyProxy.c)
 *     ShimGetMsftId @ 0x1C0046920 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C005F66C (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C0065D74 (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
