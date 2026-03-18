/*
 * XREFs of ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B1B84
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::InvalidateExistingBounds(CWindowBackgroundTreatment *this)
{
  __int64 v1; // xmm1_8

  v1 = *((_QWORD *)this + 11);
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)this + 72);
  *((_QWORD *)this + 14) = v1;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 284) = 0;
  *((_BYTE *)this + 286) = 1;
  if ( *((_BYTE *)this + 287) )
    *((_BYTE *)this + 285) = 0;
}
