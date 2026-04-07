/*
 * XREFs of ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180006B34
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800068C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800069B8 (-EndTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBackgroundGeometry(CAccent *this)
{
  unsigned int v1; // ebx
  int v2; // edx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  __m128i v7; // xmm0
  int v8; // eax
  float v9; // xmm0_4
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int updated; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  float v16; // [rsp+38h] [rbp-20h]
  float v17; // [rsp+3Ch] [rbp-1Ch]

  v1 = 0;
  v2 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
  v4 = *((_DWORD *)this + 148);
  v5 = 0;
  v15 = 0LL;
  v6 = v4 - *((_DWORD *)this + 146);
  if ( v6 >= 0 )
    v5 = v6;
  v7 = _mm_cvtsi32_si128(v5);
  v8 = 0;
  LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( v2 >= 0 )
    v8 = v2;
  v10 = *((_QWORD *)this + 40);
  v16 = v9 + 0.0;
  v17 = (float)v8 + 0.0;
  if ( v10
    && (v11 = CAccent::_UpdateSolidFill(this, v10, *((unsigned int *)this + 72), &v15, LODWORD(FLOAT_1_0)),
        v1 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2A9u);
  }
  else
  {
    v12 = *((_QWORD *)this + 41);
    if ( v12 )
    {
      updated = CAccent::_UpdateSolidFill(this, v12, *((unsigned int *)this + 76), &v15, *((_DWORD *)this + 90));
      v1 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2AEu);
    }
  }
  return v1;
}
