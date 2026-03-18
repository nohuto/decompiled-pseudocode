/*
 * XREFs of ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x1801CDA50
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x18019EB80 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::TransformInput(
        CInteractionContextTransformHelper *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        struct tagPOINTER_INFO *a4)
{
  char v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  float *v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4

  *(_OWORD *)a4 = *(_OWORD *)a2;
  *((_OWORD *)a4 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a4 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a4 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a4 + 5) = *((_OWORD *)a2 + 5);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    v7 = (float *)(v6 + (v4 != 0 ? 144LL : 72LL));
    v8 = (float)v5[11];
    v9 = (float)((float)(v8 * v7[3]) + (float)((float)v5[10] * v7[1])) + v7[5];
    v5[10] = (int)(float)((float)((float)(v8 * v7[2]) + (float)((float)v5[10] * *v7)) + v7[4]);
    v5[11] = (int)v9;
    v10 = (float)v5[15];
    v11 = (float)v5[14];
    v12 = (float)((float)(v10 * v7[2]) + (float)(v11 * *v7)) + v7[4];
    v13 = (float)((float)(v10 * v7[3]) + (float)(v11 * v7[1])) + v7[5];
    v5[14] = (int)v12;
    v5[15] = (int)v13;
  }
  return 0LL;
}
