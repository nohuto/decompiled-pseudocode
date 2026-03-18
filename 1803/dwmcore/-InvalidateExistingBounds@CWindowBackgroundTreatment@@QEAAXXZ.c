/*
 * XREFs of ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x18000BD14
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::InvalidateExistingBounds(CWindowBackgroundTreatment *this)
{
  __int64 v1; // xmm1_8

  v1 = *((_QWORD *)this + 20);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)this + 9);
  *((_QWORD *)this + 23) = v1;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_WORD *)this + 178) = 256;
  if ( *((_BYTE *)this + 358) )
    CWindowBackgroundTreatment::ClearRenderTargetMaps(this);
}
