/*
 * XREFs of ?ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z @ 0x180017AFC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyInverseTransformToPoint(struct tagINPUT_TRANSFORM *a1, struct tagPOINT a2, struct tagPOINT *a3)
{
  unsigned int v3; // r9d
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  struct tagPOINT v13; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = (float)(*((float *)a1 + 3) * (float)a2.x) - *(float *)a1;
  v5 = (float)((float)a2.x * *((float *)a1 + 7)) - *((float *)a1 + 4);
  v6 = (float)(*((float *)a1 + 7) * (float)a2.y) - *((float *)a1 + 5);
  v7 = (float)(*((float *)a1 + 3) * (float)a2.y) - *((float *)a1 + 1);
  if ( (float)(v4 * v6) == (float)(v5 * v7) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    v8 = (float)(v4 * v6) - (float)(v5 * v7);
    v9 = *((float *)a1 + 15);
    v10 = (float)(v9 * (float)a2.x) - *((float *)a1 + 12);
    v11 = (float)(v9 * (float)a2.y) - *((float *)a1 + 13);
    v13.y = (int)(float)((float)((float)(v10 * v7) - (float)(v11 * v4)) / v8);
    v13.x = (int)(float)((float)((float)(v11 * v5) - (float)(v10 * v6)) / v8);
    *a3 = v13;
  }
  return v3;
}
