/*
 * XREFs of ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1801516D0
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180158D04 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x1801516A4 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDebugFrameCounter::GetFrameRate(CDebugFrameCounter *this, __int64 a2, double a3)
{
  int FrameCountInternal; // ebx
  int *v4; // r10
  unsigned int v5; // r9d
  unsigned int v6; // r11d
  float v7; // xmm1_4
  __int64 result; // rax
  float v9; // xmm1_4
  float v10; // [rsp+30h] [rbp+8h]
  float v11; // [rsp+30h] [rbp+8h]

  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  v5 = v4[1040];
  v6 = v4[1041] - v5;
  if ( v5 > v4[1041] )
    v6 += 60;
  v7 = (float)v4[1038] / (float)v4[1039];
  if ( COERCE_UNSIGNED_INT(fabs(v7)) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v7 - v7;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    result = (unsigned int)((int)v7 - LODWORD(a3));
  }
  else
  {
    v10 = v7 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v10) << 10) >> 11);
  }
  if ( v6 )
  {
    v9 = (float)(FrameCountInternal * result) / (float)(int)(v6 + FrameCountInternal);
    if ( COERCE_UNSIGNED_INT(fabs(v9)) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v9 - v9;
      return (int)v9 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v11 = v9 + 6291456.25;
      return (unsigned int)((int)(LODWORD(v11) << 10) >> 11);
    }
  }
  return result;
}
