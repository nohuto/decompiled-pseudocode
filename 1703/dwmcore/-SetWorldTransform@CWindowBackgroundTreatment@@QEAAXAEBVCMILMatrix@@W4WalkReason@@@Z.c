/*
 * XREFs of ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x180010518
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowBackgroundTreatment::SetWorldTransform(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 188) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 184);
    v4 = *(_OWORD *)(a1 + 136);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a1 + 120);
    v5 = *(_OWORD *)(a1 + 152);
    *(_OWORD *)(a1 + 208) = v4;
    v6 = *(_OWORD *)(a1 + 168);
    *(_OWORD *)(a1 + 224) = v5;
    *(_OWORD *)(a1 + 240) = v6;
    *(_DWORD *)(a1 + 256) = v3;
  }
  *(_OWORD *)(a1 + 120) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a1 + 184) = result;
  *(_DWORD *)(a1 + 188) = a3;
  return result;
}
