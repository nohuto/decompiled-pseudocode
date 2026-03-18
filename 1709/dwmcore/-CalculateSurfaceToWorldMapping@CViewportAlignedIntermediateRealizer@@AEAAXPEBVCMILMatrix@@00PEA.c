/*
 * XREFs of ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x18018C55C
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018C6E4 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceToWorldMapping(
        CViewportAlignedIntermediateRealizer *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        struct CMILMatrix *a5)
{
  __int128 v5; // xmm0
  CMILMatrix *v7; // r10
  CMILMatrix *v8; // r10
  __m128 v9[4]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  v5 = *(_OWORD *)a2;
  v10 = 0;
  *(_OWORD *)a5 = v5;
  *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a5 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a5 + 16) = *((_DWORD *)a2 + 16);
  CMILMatrix::SetToInverse(v9, a4);
  CMILMatrix::Multiply(v7, (const struct CMILMatrix *)v9);
  if ( a3 )
    CMILMatrix::Multiply(v8, a3);
}
