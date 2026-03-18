/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x18017F7F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1801AF828 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v11 = 4081;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 72LL * (v1 - 3);
  v6 = v4 + 72LL * (v1 - 2);
  v7 = 9LL * (v1 - 1);
  v8 = *(_DWORD *)(v5 + 64);
  if ( *(_DWORD *)(v4 + 8 * v7 + 64) != 18 || v8 != *(_DWORD *)(v6 + 64) )
  {
    v11 = 4107;
    goto LABEL_9;
  }
  if ( v8 != 71 )
  {
    v11 = 4139;
    goto LABEL_9;
  }
  D3DXQuaternionSlerp(
    (struct D2DQuaternion *)&v12,
    (const struct D2DQuaternion *)v5,
    (const struct D2DQuaternion *)v6,
    *(float *)(v4 + 8 * v7));
  v9 = v12;
  *(_DWORD *)(v5 + 64) = 71;
  *(_BYTE *)(v5 + 68) = 1;
  *(_OWORD *)v5 = v9;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
