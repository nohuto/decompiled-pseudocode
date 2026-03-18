/*
 * XREFs of ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x1801C435C
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C4524 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceToWorldMapping(
        CViewportAlignedIntermediateRealizer *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        struct CMILMatrix *a5)
{
  __int128 v5; // xmm0
  __m128 v7[4]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v5 = *(_OWORD *)a2;
  v8 = 0;
  *(_OWORD *)a5 = v5;
  *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a5 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a5 + 16) = *((_DWORD *)a2 + 16);
  CMILMatrix::SetToInverse(v7, a4);
  CMILMatrix::Multiply(a5, (const struct CMILMatrix *)v7);
  if ( a3 )
    CMILMatrix::Multiply(a5, a3);
}
