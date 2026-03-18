/*
 * XREFs of ?GetBounds@CDropShadow@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801601C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::GetBounds(float *a1, __int64 a2, float *a3, float *a4)
{
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4

  if ( !a3 || *a3 <= 0.0 || a3[1] <= 0.0 || (*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)a1 + 192LL))(a1) )
  {
    a4[3] = 0.0;
    a4[2] = 0.0;
    a4[1] = 0.0;
    *a4 = 0.0;
  }
  else
  {
    *a4 = 0.0;
    a4[1] = 0.0;
    a4[2] = *a3;
    a4[3] = a3[1];
    v7 = a1[43];
    v8 = v7 + a4[3];
    v9 = a1[42];
    v10 = v7 + 0.0;
    v11 = v9 + a4[2];
    v12 = v9 + 0.0;
    a4[3] = v8;
    a4[1] = v10;
    a4[2] = v11;
    *a4 = v12;
    v13 = a1[40];
    *a4 = v12 - v13;
    a4[1] = v10 - v13;
    a4[2] = v11 + v13;
    a4[3] = v8 + v13;
  }
  return 0LL;
}
