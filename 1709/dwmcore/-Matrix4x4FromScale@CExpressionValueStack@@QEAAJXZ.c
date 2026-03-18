/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ @ 0x180185944
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-60h]
  __int128 v7; // [rsp+50h] [rbp-30h]
  __int128 v8; // [rsp+60h] [rbp-20h]
  __int128 v9; // [rsp+70h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 72 * v4 + 64) == 52 )
    {
      DWORD2(v9) = 0;
      *(_QWORD *)&v9 = 0LL;
      *(_QWORD *)&v8 = 0LL;
      HIDWORD(v7) = 0;
      LODWORD(v7) = 0;
      *(_QWORD *)((char *)&v7 + 4) = (unsigned int)HIDWORD(*(_QWORD *)(v3 + 72 * v4));
      *((float *)&v9 + 3) = FLOAT_1_0;
      *((_QWORD *)&v8 + 1) = *(unsigned int *)(v3 + 72 * v4 + 8);
      *(_OWORD *)(v3 + 72 * v4) = (unsigned int)*(_QWORD *)(v3 + 72 * v4);
      *(_DWORD *)(v3 + 72 * v4 + 64) = 265;
      *(_OWORD *)(v3 + 72 * v4 + 16) = v7;
      *(_BYTE *)(v3 + 72 * v4 + 68) = 1;
      *(_OWORD *)(v3 + 72 * v4 + 32) = v8;
      *(_OWORD *)(v3 + 72 * v4 + 48) = v9;
      return v2;
    }
    v6 = 6214;
  }
  else
  {
    v6 = 6201;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v6);
  return v2;
}
