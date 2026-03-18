/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C74BC
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C7CB0 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 *v7; // rbp
  unsigned __int64 *v8; // r12
  __int64 *v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  int v15; // r11d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  int v18; // r11d
  char *v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  char v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v5 = a3;
  v6 = a1 - (_QWORD)a2 - (_QWORD)a3;
  v24 = 3LL;
  do
  {
    v7 = v5;
    v23 = 3LL;
    do
    {
      v8 = a2;
      v28 = 3LL;
      v9 = v7;
      do
      {
        v10 = *v8;
        v11 = *v9;
        v12 = (__int64)(*v9 ^ *v8) >> 63;
        if ( (*v8 & 0x8000000000000000uLL) != 0LL )
          v10 = -(__int64)v10;
        if ( v11 < 0 )
          v11 = -v11;
        v13 = (unsigned int)v11 * (unsigned __int64)(unsigned int)v10;
        v14 = (unsigned int)v10 * HIDWORD(v11);
        v15 = HIDWORD(v10) * HIDWORD(v11);
        v16 = HIDWORD(v13) + (unsigned int)v11 * HIDWORD(v10);
        v17 = (unsigned int)v16 + v14;
        v18 = HIDWORD(v16) + v15;
        v19 = (char *)v7 + (_QWORD)a2 + v6;
        v20 = (v12 ^ ((unsigned int)v17 | ((unsigned __int64)(unsigned int)(v18 + HIDWORD(v17)) << 32))) - v12;
        if ( (_DWORD)v13 )
          v20 = v12 ^ ((unsigned int)v17 | ((unsigned __int64)(unsigned int)(v18 + HIDWORD(v17)) << 32));
        v21 = *(_QWORD *)v19 + v20;
        if ( v19 != &v25 )
          *(_QWORD *)v19 = v21;
        ++v8;
        v9 += 3;
        --v28;
      }
      while ( v28 );
      ++v7;
      --v23;
    }
    while ( v23 );
    v5 = a3;
    a2 += 3;
    --v24;
  }
  while ( v24 );
  return a1;
}
