/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x180185E9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18009EEC0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800BA844 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x1801CA1EC (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801CA4B8 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 72LL * (unsigned int)(v1 - 1);
    v4 = *(_DWORD *)(v3 + 64);
    if ( v4 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v9, (const struct D2DVector2 *)v3);
      *(_QWORD *)v3 = v9;
      *(_DWORD *)(v3 + 64) = 35;
    }
    else if ( v4 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v8, (const struct D2DVector3 *)v3);
      v5 = DWORD2(v8);
      *(_QWORD *)v3 = v8;
      *(_DWORD *)(v3 + 8) = v5;
      *(_DWORD *)(v3 + 64) = 52;
    }
    else
    {
      if ( v4 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v8, (const struct D2DVector4 *)v3);
        *(_DWORD *)(v3 + 64) = 69;
      }
      else
      {
        if ( v4 != 71 )
        {
          v7 = 4070;
          goto LABEL_3;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v8, (const struct D2DQuaternion *)v3);
        *(_DWORD *)(v3 + 64) = 71;
      }
      *(_OWORD *)v3 = v8;
    }
    *(_BYTE *)(v3 + 68) = 1;
    return v2;
  }
  v7 = 4012;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v7);
  return v2;
}
