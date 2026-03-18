/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x1801BB874
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x180206DE8 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  unsigned int v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v10 = 3929;
LABEL_9:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v10);
    return v7;
  }
  v3 = *((_QWORD *)this + 3) + 80LL * (v1 - 3);
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  v6 = *(_DWORD *)(v3 + 72);
  if ( *(_DWORD *)(v5 + 72) != 18 || (v7 = 0, v6 != *(_DWORD *)(v4 + 72)) )
  {
    v10 = 3954;
    goto LABEL_9;
  }
  if ( v6 != 71 )
  {
    v10 = 3986;
    goto LABEL_9;
  }
  D3DXQuaternionSlerp(
    (struct D2DQuaternion *)&v11,
    (const struct D2DQuaternion *)v3,
    (const struct D2DQuaternion *)v4,
    *(float *)v5);
  v8 = v11;
  *(_DWORD *)(v3 + 72) = 71;
  *(_BYTE *)(v3 + 76) = 1;
  *(_OWORD *)v3 = v8;
  *((_DWORD *)this + 4) -= 2;
  return v7;
}
