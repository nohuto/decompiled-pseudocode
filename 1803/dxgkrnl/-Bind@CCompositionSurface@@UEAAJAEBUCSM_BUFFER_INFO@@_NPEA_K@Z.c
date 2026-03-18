/*
 * XREFs of ?Bind@CCompositionSurface@@UEAAJAEBUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C004C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        unsigned __int64 *a4)
{
  unsigned __int64 *v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = 1;
  return CCompositionSurface::Bind((CCompositionSurface *)((char *)this - 8), a2, a3, (__int64)a4, v5);
}
