/*
 * XREFs of ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@_NPEAU2@@Z @ 0x1801CE144
 * Callers:
 *     ?GetGlobalOutput@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x18019E540 (-GetGlobalOutput@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     TransformTranslateDelta @ 0x1801CE0C4 (TransformTranslateDelta.c)
 */

void __fastcall CInteractionContextTransformHelper::UnTransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        __int64 a3,
        struct InteractionOutput *a4)
{
  __int64 v4; // rdx
  __m128 *v5; // r8
  __int64 v6; // r9
  float *v7; // rdx
  __m128 *v8; // r8
  float v9; // xmm2_4
  float *v10; // r10

  *(_OWORD *)a4 = *(_OWORD *)a2;
  *((_OWORD *)a4 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)a4 + 6) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a4 + 14) = *((_DWORD *)a2 + 14);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    TransformTranslateDelta(*(float *)(v4 + 8), *(float *)(v4 + 12), v5, (float *)(v6 + 8), (float *)(v6 + 12));
    v9 = (float)((float)(v7[10] * v8->m128_f32[1]) + (float)(v7[11] * v8->m128_f32[3])) + v8[1].m128_f32[1];
    v10[10] = (float)((float)(v7[11] * v8->m128_f32[2]) + (float)(v7[10] * v8->m128_f32[0])) + v8[1].m128_f32[0];
    v10[11] = v9;
    TransformTranslateDelta(v7[6], v7[7], v8, v10 + 7, v10 + 7);
  }
}
