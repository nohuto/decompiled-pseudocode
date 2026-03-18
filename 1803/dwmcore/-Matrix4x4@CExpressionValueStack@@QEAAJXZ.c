/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1800527B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // r11
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // xmm1_4
  int v8; // r8d
  _QWORD *i; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // xmm1_4
  unsigned int v13; // [rsp+20h] [rbp-89h]
  __int128 v14; // [rsp+30h] [rbp-79h]
  __int128 v15; // [rsp+30h] [rbp-79h]
  __int128 v16; // [rsp+40h] [rbp-69h]
  __int128 v17; // [rsp+40h] [rbp-69h]
  __int128 v18; // [rsp+50h] [rbp-59h]
  __int128 v19; // [rsp+60h] [rbp-49h]
  __int128 v20; // [rsp+60h] [rbp-49h]
  _QWORD v21[16]; // [rsp+70h] [rbp-39h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v13 = 5628;
LABEL_15:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13);
    return v4;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v5 = v3 + 80LL * (v1 - 1);
  v21[0] = v5;
  if ( *(_DWORD *)(v5 + 72) != 104 )
  {
    if ( *(_DWORD *)(v5 + 72) == 18 )
    {
      if ( v1 >= 0x10 )
      {
        v8 = 0;
        for ( i = v21; ; ++i )
        {
          v10 = v3 + 80LL * (v8 + v1 - 16);
          *i = v10;
          if ( *(_DWORD *)(v10 + 72) != 18 )
            break;
          if ( ++v8 >= 16 )
          {
            v11 = v21[0];
            DWORD1(v15) = *(_DWORD *)v21[1];
            LODWORD(v15) = *(_DWORD *)v21[0];
            DWORD2(v15) = *(_DWORD *)v21[2];
            HIDWORD(v15) = *(_DWORD *)v21[3];
            LODWORD(v17) = *(_DWORD *)v21[4];
            DWORD1(v17) = *(_DWORD *)v21[5];
            DWORD2(v17) = *(_DWORD *)v21[6];
            HIDWORD(v17) = *(_DWORD *)v21[7];
            LODWORD(v18) = *(_DWORD *)v21[8];
            DWORD1(v18) = *(_DWORD *)v21[9];
            DWORD2(v18) = *(_DWORD *)v21[10];
            HIDWORD(v18) = *(_DWORD *)v21[11];
            LODWORD(v20) = *(_DWORD *)v21[12];
            DWORD1(v20) = *(_DWORD *)v21[13];
            DWORD2(v20) = *(_DWORD *)v21[14];
            v12 = *(_DWORD *)v21[15];
            *(_OWORD *)v21[0] = v15;
            *(_DWORD *)(v11 + 72) = 265;
            HIDWORD(v20) = v12;
            *(_OWORD *)(v11 + 16) = v17;
            *(_BYTE *)(v11 + 76) = 1;
            *(_OWORD *)(v11 + 32) = v18;
            *(_OWORD *)(v11 + 48) = v20;
            *((_DWORD *)this + 4) -= 15;
            return v4;
          }
        }
        v13 = 5656;
      }
      else
      {
        v13 = 5642;
      }
    }
    else
    {
      v13 = 5694;
    }
    goto LABEL_15;
  }
  HIDWORD(v14) = 0;
  HIDWORD(v16) = 0;
  LODWORD(v14) = *(_DWORD *)v5;
  *(_QWORD *)((char *)&v16 + 4) = *(unsigned int *)(v5 + 12);
  *(_QWORD *)((char *)&v14 + 4) = *(unsigned int *)(v5 + 4);
  LODWORD(v19) = *(_DWORD *)(v5 + 16);
  LODWORD(v16) = *(_DWORD *)(v5 + 8);
  v6 = *(_DWORD *)(v5 + 20);
  *(_DWORD *)(v5 + 72) = 265;
  *((float *)&v19 + 3) = FLOAT_1_0;
  *(_OWORD *)v5 = v14;
  *(_BYTE *)(v5 + 76) = 1;
  *(_QWORD *)((char *)&v19 + 4) = v6;
  *(_OWORD *)(v5 + 16) = v16;
  *(_OWORD *)(v5 + 32) = _xmm;
  *(_OWORD *)(v5 + 48) = v19;
  return v4;
}
