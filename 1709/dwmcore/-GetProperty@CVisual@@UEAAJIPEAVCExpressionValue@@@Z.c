/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180053A70
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004E8C4 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004ED00 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004ED60 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // r11
  float OpacityInternal; // xmm0_4
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edx
  FLOAT v12; // eax
  struct D2D_VECTOR_3F v13; // [rsp+30h] [rbp-20h] BYREF
  FLOAT z; // [rsp+48h] [rbp-8h]
  unsigned int v15; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+7Ch] [rbp+2Ch]

  v3 = 0;
  v4 = a2 - 23;
  if ( v4 )
  {
    v8 = v4 - 2;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            v3 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1533u);
            return v3;
          }
          CVisual::GetRelativeLayoutSizeInternal(this, (__int64)&v15);
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)v15, (__m128)v16).m128_u64[0];
          *(_DWORD *)(v5 + 64) = 35;
        }
        else
        {
          CVisual::GetRelativeOffsetInternal(this, &v13);
          z = v13.z;
          v12 = v13.z;
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)LODWORD(v13.x), (__m128)LODWORD(v13.y)).m128_u64[0];
          *(FLOAT *)(v5 + 8) = v12;
          *(_DWORD *)(v5 + 64) = 52;
        }
        goto LABEL_3;
      }
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 31), (__m128)*((unsigned int *)this + 32)).m128_u64[0];
      *((_DWORD *)a3 + 16) = 35;
    }
    else
    {
      v9 = *((_DWORD *)this + 28);
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 26), (__m128)*((unsigned int *)this + 27)).m128_u64[0];
      *((_DWORD *)a3 + 2) = v9;
      *((_DWORD *)a3 + 16) = 52;
    }
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  OpacityInternal = CVisual::GetOpacityInternal(this);
  *(float *)v5 = OpacityInternal;
  *(_DWORD *)(v5 + 64) = 18;
LABEL_3:
  *(_BYTE *)(v5 + 68) = 1;
  return v3;
}
