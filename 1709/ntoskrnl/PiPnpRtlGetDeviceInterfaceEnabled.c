/*
 * XREFs of PiPnpRtlGetDeviceInterfaceEnabled @ 0x140528110
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x14017FDE0 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceInterfaceEnabled(__int64 a1, __int128 *a2, _BYTE *a3, unsigned int a4)
{
  NTSTATUS result; // eax
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  Buffer = *a2;
  v7 = a4;
  result = ZwPlugPlayControl(PlugPlayControlGetDeviceInterfaceEnabled, &Buffer, 0x18u);
  *a3 = BYTE4(v7);
  return result;
}
