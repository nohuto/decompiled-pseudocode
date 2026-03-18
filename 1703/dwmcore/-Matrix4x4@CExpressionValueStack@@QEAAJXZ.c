/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1800341F0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // r11
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // xmm1_4
  int v9; // edx
  _QWORD *v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // xmm1_4
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-89h]
  __int128 v17; // [rsp+30h] [rbp-79h]
  __int128 v18; // [rsp+30h] [rbp-79h]
  __int128 v19; // [rsp+40h] [rbp-69h]
  __int128 v20; // [rsp+40h] [rbp-69h]
  __int128 v21; // [rsp+50h] [rbp-59h]
  __int128 v22; // [rsp+60h] [rbp-49h]
  __int128 v23; // [rsp+60h] [rbp-49h]
  _QWORD v24[16]; // [rsp+70h] [rbp-39h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v16 = 5903;
LABEL_17:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v16);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 72LL * (v1 - 1);
  v6 = *(_DWORD *)(v5 + 64) == 104;
  v24[0] = v5;
  if ( v6 )
  {
    HIDWORD(v17) = 0;
    HIDWORD(v19) = 0;
    LODWORD(v17) = *(_DWORD *)v5;
    *(_QWORD *)((char *)&v19 + 4) = *(unsigned int *)(v5 + 12);
    *(_QWORD *)((char *)&v17 + 4) = *(unsigned int *)(v5 + 4);
    LODWORD(v22) = *(_DWORD *)(v5 + 16);
    LODWORD(v19) = *(_DWORD *)(v5 + 8);
    v7 = *(_DWORD *)(v5 + 20);
    *((float *)&v22 + 3) = FLOAT_1_0;
    *(_OWORD *)v5 = v17;
    *(_DWORD *)(v5 + 64) = 265;
    *(_QWORD *)((char *)&v22 + 4) = v7;
    *(_OWORD *)(v5 + 16) = v19;
    *(_BYTE *)(v5 + 68) = 1;
    *(_OWORD *)(v5 + 32) = _xmm;
    *(_OWORD *)(v5 + 48) = v22;
    return v2;
  }
  if ( *(_DWORD *)(v5 + 64) != 18 )
  {
    v16 = 5980;
    goto LABEL_17;
  }
  if ( v1 < 0x10 )
  {
    v16 = 5924;
    goto LABEL_17;
  }
  v9 = 0;
  v10 = v24;
  do
  {
    v11 = v4 + 72LL * (v9 + v1 - 16);
    v6 = *(_DWORD *)(v11 + 64) == 18;
    *v10 = v11;
    if ( !v6 )
    {
      v16 = 5939;
      goto LABEL_17;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 16 );
  v12 = v24[0];
  DWORD1(v18) = *(_DWORD *)v24[1];
  LODWORD(v18) = *(_DWORD *)v24[0];
  DWORD2(v18) = *(_DWORD *)v24[2];
  HIDWORD(v18) = *(_DWORD *)v24[3];
  LODWORD(v20) = *(_DWORD *)v24[4];
  DWORD1(v20) = *(_DWORD *)v24[5];
  DWORD2(v20) = *(_DWORD *)v24[6];
  HIDWORD(v20) = *(_DWORD *)v24[7];
  LODWORD(v21) = *(_DWORD *)v24[8];
  DWORD1(v21) = *(_DWORD *)v24[9];
  DWORD2(v21) = *(_DWORD *)v24[10];
  HIDWORD(v21) = *(_DWORD *)v24[11];
  LODWORD(v23) = *(_DWORD *)v24[12];
  DWORD1(v23) = *(_DWORD *)v24[13];
  DWORD2(v23) = *(_DWORD *)v24[14];
  v13 = *(_DWORD *)v24[15];
  *(_OWORD *)v24[0] = v18;
  *(_DWORD *)(v12 + 64) = 265;
  HIDWORD(v23) = v13;
  *(_OWORD *)(v12 + 16) = v20;
  *(_BYTE *)(v12 + 68) = 1;
  *(_OWORD *)(v12 + 32) = v21;
  *(_OWORD *)(v12 + 48) = v23;
  v14 = *((_DWORD *)this + 4);
  v15 = 15LL;
  do
  {
    --v14;
    --v15;
  }
  while ( v15 );
  *((_DWORD *)this + 4) = v14;
  return v2;
}
