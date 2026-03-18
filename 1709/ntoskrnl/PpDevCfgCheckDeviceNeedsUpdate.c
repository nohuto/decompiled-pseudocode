/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x1406C9CD8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, __int64 a2, int *a3)
{
  int inited; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 0x40uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
