/*
 * XREFs of ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180172CF0
 * Callers:
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180145F18 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801731BC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

void __fastcall CNaturalAnimation::ClearState(CNaturalAnimation *this)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int128 v4; // xmm3
  __int64 v5; // r9
  struct _D3DMATRIX *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // r9
  struct _D3DMATRIX v12; // [rsp+20h] [rbp-48h] BYREF

  *((_BYTE *)this + 524) &= ~1u;
  *((_BYTE *)this + 524) |= 0x44u;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v12);
  v2 = *(_OWORD *)&D3DMatrix->_21;
  v3 = *(_OWORD *)&D3DMatrix->_31;
  v4 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)(v5 + 460) = *(_OWORD *)&D3DMatrix->_11;
  *(_OWORD *)(v5 + 476) = v2;
  *(_OWORD *)(v5 + 492) = v3;
  *(_OWORD *)(v5 + 508) = v4;
  v6 = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v12);
  v7 = *(_OWORD *)&v6->_11;
  v8 = *(_OWORD *)&v6->_21;
  v9 = *(_OWORD *)&v6->_31;
  v10 = *(_OWORD *)&v6->_41;
  *(_QWORD *)(v11 + 360) = 0LL;
  *(_BYTE *)(v11 + 524) &= ~2u;
  *(_OWORD *)(v11 + 396) = v7;
  *(_OWORD *)(v11 + 412) = v8;
  *(_OWORD *)(v11 + 428) = v9;
  *(_OWORD *)(v11 + 444) = v10;
}
