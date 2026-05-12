/*
 * XREFs of PortGetDriverParameters @ 0x1C00609A0
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0061E4C (RaidInitializeAdapter.c)
 * Callees:
 *     PortpReadDriverParameterEntry @ 0x1C0060308 (PortpReadDriverParameterEntry.c)
 *     PortOpenDeviceKey @ 0x1C0061D64 (PortOpenDeviceKey.c)
 */

int __fastcall PortGetDriverParameters(__int64 a1, unsigned int a2, PVOID *a3)
{
  void *v6; // rax
  void *v7; // rbx
  void *v8; // rax
  void *v9; // rbx

  v6 = (void *)PortOpenDeviceKey(a1, 0xFFFFFFFFLL);
  v7 = v6;
  if ( v6 )
  {
    PortpReadDriverParameterEntry(v6, a3);
    ZwClose(v7);
  }
  v8 = (void *)PortOpenDeviceKey(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    PortpReadDriverParameterEntry(v8, a3);
    LODWORD(v8) = ZwClose(v9);
  }
  return (int)v8;
}
