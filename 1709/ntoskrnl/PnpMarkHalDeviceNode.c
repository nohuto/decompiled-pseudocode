/*
 * XREFs of PnpMarkHalDeviceNode @ 0x1408559A4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 */

char PnpMarkHalDeviceNode()
{
  unsigned int v0; // eax
  __int64 i; // rcx

  LOBYTE(v0) = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)i )
  {
    v0 = *(_DWORD *)(i + 300) - 775;
    if ( v0 <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      LOBYTE(v0) = PipSetDevNodeFlags(i, 4);
      return v0;
    }
  }
  return v0;
}
