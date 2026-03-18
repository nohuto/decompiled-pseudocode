/*
 * XREFs of ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4
 * Callers:
 *     NtGdiFillPath @ 0x1C01220F0 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0122C80 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C028C4D0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C028C570 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C028C7B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C028C8E0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C028CA20 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C028CB30 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 21) )
    return 0;
  v1 = *((_DWORD *)this + 44);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
