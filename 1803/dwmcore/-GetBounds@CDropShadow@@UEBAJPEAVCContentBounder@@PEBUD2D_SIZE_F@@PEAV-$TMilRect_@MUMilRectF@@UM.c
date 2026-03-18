/*
 * XREFs of ?GetBounds@CDropShadow@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180189A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::GetBounds(float *a1, __int64 a2, float *a3, __int64 a4)
{
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  __int64 result; // rax

  if ( !a3 || *a3 <= 0.0 || a3[1] <= 0.0 || (*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)a1 + 192LL))(a1) )
  {
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 4) = 0;
    v7 = *a3;
    *(float *)(a4 + 8) = *a3;
    v8 = a3[1];
    *(float *)(a4 + 12) = v8;
    v9 = v7 + a1[40];
    v10 = v8 + a1[41];
    v11 = a1[40] + 0.0;
    v12 = a1[41] + 0.0;
    *(float *)(a4 + 8) = v9;
    *(float *)(a4 + 12) = v10;
    *(float *)a4 = v11;
    *(float *)(a4 + 4) = v12;
    v13 = a1[38];
    v14 = v10 + v13;
    v15 = v9 + v13;
    v16 = v12 - v13;
    v17 = v11 - v13;
  }
  *(float *)a4 = v17;
  result = 0LL;
  *(float *)(a4 + 4) = v16;
  *(float *)(a4 + 8) = v15;
  *(float *)(a4 + 12) = v14;
  return result;
}
