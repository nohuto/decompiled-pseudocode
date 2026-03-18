/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C793C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 *v4; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // r11d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  int v15; // r11d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v19; // [rsp+20h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a3 - (_QWORD)a2;
  v4 = a2;
  v6 = 3LL;
  do
  {
    v7 = *v4;
    v8 = *(unsigned __int64 *)((char *)v4 + v3);
    v9 = (__int64)(v8 ^ *v4) >> 63;
    if ( (*v4 & 0x8000000000000000uLL) != 0LL )
      v7 = -(__int64)v7;
    if ( v8 < 0 )
      v8 = -v8;
    v10 = (unsigned int)v8 * (unsigned __int64)(unsigned int)v7;
    v11 = (unsigned int)v7 * HIDWORD(v8);
    v12 = HIDWORD(v7) * HIDWORD(v8);
    v13 = HIDWORD(v10) + (unsigned int)v8 * HIDWORD(v7);
    v14 = (unsigned int)v13 + v11;
    v15 = HIDWORD(v13) + v12;
    v16 = (v9 ^ ((unsigned int)v14 | ((unsigned __int64)(unsigned int)(v15 + HIDWORD(v14)) << 32))) - v9;
    if ( (_DWORD)v10 )
      v16 = v9 ^ ((unsigned int)v14 | ((unsigned __int64)(unsigned int)(v15 + HIDWORD(v14)) << 32));
    v17 = *(_QWORD *)a1 + v16;
    if ( a1 != &v19 )
      *(_QWORD *)a1 = v17;
    ++v4;
    --v6;
  }
  while ( v6 );
  return a1;
}
