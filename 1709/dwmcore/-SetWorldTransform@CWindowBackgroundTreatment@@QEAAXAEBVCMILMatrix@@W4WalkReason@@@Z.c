/*
 * XREFs of ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800B20A4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
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

  if ( *(_DWORD *)(a1 + 212) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 208);
    v4 = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a1 + 216) = *(_OWORD *)(a1 + 144);
    v5 = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a1 + 232) = v4;
    v6 = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a1 + 248) = v5;
    *(_OWORD *)(a1 + 264) = v6;
    *(_DWORD *)(a1 + 280) = v3;
  }
  *(_OWORD *)(a1 + 144) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a1 + 208) = result;
  *(_DWORD *)(a1 + 212) = a3;
  return result;
}
