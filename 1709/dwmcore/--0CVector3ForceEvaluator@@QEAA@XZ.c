/*
 * XREFs of ??0CVector3ForceEvaluator@@QEAA@XZ @ 0x18017271C
 * Callers:
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18017268C (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

CVector3ForceEvaluator *__fastcall CVector3ForceEvaluator::CVector3ForceEvaluator(CVector3ForceEvaluator *this)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int64 v6; // r8
  CVector3ForceEvaluator *result; // rax
  struct _D3DMATRIX v8; // [rsp+20h] [rbp-48h] BYREF

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v8);
  v2 = *(_OWORD *)&D3DMatrix->_11;
  v3 = *(_OWORD *)&D3DMatrix->_21;
  v4 = *(_OWORD *)&D3DMatrix->_31;
  v5 = *(_OWORD *)&D3DMatrix->_41;
  result = (CVector3ForceEvaluator *)v6;
  *(_OWORD *)(v6 + 204) = v2;
  *(_OWORD *)(v6 + 220) = v3;
  *(_OWORD *)(v6 + 236) = v4;
  *(_OWORD *)(v6 + 252) = v5;
  return result;
}
