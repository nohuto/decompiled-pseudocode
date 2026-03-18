/*
 * XREFs of EditionGetMouseWheelRoutingMode @ 0x1C01BAC60
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01B98E0 (-RawInputMouseRequestedByForeground@@YAHXZ.c)
 */

__int64 EditionGetMouseWheelRoutingMode()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *(_DWORD *)UPDWORDPointer(8220LL);
  if ( v2 == 1 )
    return (unsigned int)RawInputMouseRequestedByForeground(v1, v0, v3, v4) == 0;
  return v2;
}
