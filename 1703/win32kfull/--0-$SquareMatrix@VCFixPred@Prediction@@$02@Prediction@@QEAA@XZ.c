/*
 * XREFs of ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01A43C4
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01A3F10 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01A3FDC (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01A3FDC.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01A41CC (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01A42AC (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01A4334 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01A4980 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0128D3C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

char *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(char *a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  `vector constructor iterator'(a1, 8LL, 9LL, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  v2 = a1;
  v3 = 3LL;
  do
  {
    v4 = 3LL;
    do
    {
      if ( v2 != &v6 )
        *(_QWORD *)v2 = 0LL;
      v2 += 8;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  return a1;
}
