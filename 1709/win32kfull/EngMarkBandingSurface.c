/*
 * XREFs of EngMarkBandingSurface @ 0x1C0121340
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C01212A0 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  char v1; // dl
  __int64 v2; // rax
  BOOL v3; // ebx

  v1 = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(hsurf, v1);
  v3 = 0;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 112) |= 0x2000000u;
    v3 = 1;
    DEC_SHARE_REF_CNT(v2);
  }
  return v3;
}
