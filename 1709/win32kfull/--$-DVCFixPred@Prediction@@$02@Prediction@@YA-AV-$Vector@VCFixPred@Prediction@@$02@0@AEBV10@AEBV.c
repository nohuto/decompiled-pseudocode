/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C7730
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C7D0C (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  char *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = *(_QWORD *)&v7[v6];
    v10 = *a3;
    v11 = (*a3 ^ v9) >> 63;
    if ( v9 < 0 )
      v9 = -v9;
    if ( v10 < 0 )
      v10 = -v10;
    v12 = (unsigned int)v9;
    v13 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v9;
    v14 = HIDWORD(v9);
    v15 = HIDWORD(v13) + (unsigned int)v10 * HIDWORD(v9);
    v16 = v11 ^ ((unsigned int)(v15 + v12 * HIDWORD(v10)) | ((unsigned __int64)(unsigned int)(HIDWORD(v15)
                                                                                            + HIDWORD(v10) * v14
                                                                                            + ((unsigned __int64)((unsigned int)v15 + v12 * HIDWORD(v10)) >> 32)) << 32));
    v17 = v16 - v11;
    if ( (_DWORD)v13 )
      v17 = v16;
    if ( v7 != &v19 )
      *(_QWORD *)v7 = v17;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  return a1;
}
