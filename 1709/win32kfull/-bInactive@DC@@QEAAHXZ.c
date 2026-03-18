/*
 * XREFs of ?bInactive@DC@@QEAAHXZ @ 0x1C012CC8C
 * Callers:
 *     NtGdiFillPath @ 0x1C012BA20 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C012C070 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C0288FE0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C0289090 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02892D0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02893F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C0289550 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C0289680 (NtGdiWidenPath.c)
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
