/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x140730CF8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, __int64 a2, unsigned int *a3)
{
  int inited; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
