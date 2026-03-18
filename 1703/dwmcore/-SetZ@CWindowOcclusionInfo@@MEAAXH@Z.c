/*
 * XREFs of ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x1800C21C0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::SetZ(CWindowOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 7) = a2;
  *((_DWORD *)this + 6) = a2;
}
