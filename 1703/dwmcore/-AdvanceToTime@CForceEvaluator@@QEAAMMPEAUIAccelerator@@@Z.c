/*
 * XREFs of ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180188D20
 * Callers:
 *     ?Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188B10 (-Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188CC0 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Integrate@CForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180188EB0 (-Integrate@CForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

float __fastcall CForceEvaluator::AdvanceToTime(CForceEvaluator *this, float a2, struct IAccelerator *a3)
{
  float v7; // xmm1_4
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 == *(float *)this )
    return *((float *)this + 7);
  v7 = fmaxf(0.0, fminf(a2 - *(float *)this, 0.25)) + *((float *)this + 1);
  *((float *)this + 1) = v7;
  if ( v7 >= 0.0099999998 )
  {
    v8 = (char *)this + 12;
    do
    {
      v9 = *((_DWORD *)v8 + 2);
      *((_QWORD *)this + 3) = *(_QWORD *)v8;
      v17 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) = v9;
      v10 = CForceEvaluator::Integrate(this, v18, v8, a3, v17, LODWORD(FLOAT_0_0099999998));
      v11 = *((float *)this + 1) - 0.0099999998;
      *(_QWORD *)v8 = *(_QWORD *)v10;
      *((_DWORD *)v8 + 2) = *(_DWORD *)(v10 + 8);
      v12 = *((float *)this + 2) + 0.0099999998;
      *((float *)this + 1) = v11;
      *((float *)this + 2) = v12;
    }
    while ( v11 >= 0.0099999998 );
  }
  v13 = *((float *)this + 1) / 0.0099999998;
  v14 = 1.0 - v13;
  v15 = v13 * *((float *)this + 4);
  v16 = v14 * *((float *)this + 7);
  *(float *)this = a2;
  return v16 + v15;
}
