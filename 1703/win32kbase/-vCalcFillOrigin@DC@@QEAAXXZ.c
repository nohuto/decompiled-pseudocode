/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0039E3C
 * Callers:
 *     GreSetDCOrg @ 0x1C0028AD0 (GreSetDCOrg.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vCalcFillOrigin(DC *this)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
    v3 = *((_DWORD *)this + 360);
  else
    v3 = *((_DWORD *)this + 358);
  *((_DWORD *)this + 398) = *((_DWORD *)this + 34) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 361);
  else
    v4 = *((_DWORD *)this + 359);
  *((_DWORD *)this + 399) = *((_DWORD *)this + 35) + v4;
}
