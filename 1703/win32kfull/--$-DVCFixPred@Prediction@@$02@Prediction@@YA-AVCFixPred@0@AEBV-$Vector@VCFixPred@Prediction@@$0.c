/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01A415C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01A4980 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01A48E8 (-FastMul64by64@@YA_J_J0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a3 - (_QWORD)a2;
  v4 = a2;
  v6 = 3LL;
  do
  {
    v7 = *(_QWORD *)a1 + FastMul64by64(*v4, *(__int64 *)((char *)v4 + v3));
    if ( a1 != &v9 )
      *(_QWORD *)a1 = v7;
    ++v4;
    --v6;
  }
  while ( v6 );
  return a1;
}
