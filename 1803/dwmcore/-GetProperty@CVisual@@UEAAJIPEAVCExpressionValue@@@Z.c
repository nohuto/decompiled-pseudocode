/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18004BEF0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004CE3C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004F6C0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  __int64 v15; // [rsp+78h] [rbp+28h]

  v3 = 0;
  v4 = a2 - 26;
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
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1722u);
            return v3;
          }
          CVisual::GetRelativeLayoutSizeInternal(this);
          *(_QWORD *)v5 = v15;
          *(_DWORD *)(v5 + 72) = 35;
        }
        else
        {
          CVisual::GetRelativeOffsetInternal(this, &v13);
          z = v13.z;
          v12 = v13.z;
          *(_QWORD *)v5 = *(_QWORD *)&v13.x;
          *(FLOAT *)(v5 + 8) = v12;
          *(_DWORD *)(v5 + 72) = 52;
        }
        goto LABEL_3;
      }
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 31), (__m128)*((unsigned int *)this + 32)).m128_u64[0];
      *((_DWORD *)a3 + 18) = 35;
    }
    else
    {
      v9 = *((_DWORD *)this + 28);
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 26), (__m128)*((unsigned int *)this + 27)).m128_u64[0];
      *((_DWORD *)a3 + 2) = v9;
      *((_DWORD *)a3 + 18) = 52;
    }
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  OpacityInternal = CVisual::GetOpacityInternal(this);
  *(float *)v5 = OpacityInternal;
  *(_DWORD *)(v5 + 72) = 18;
LABEL_3:
  *(_BYTE *)(v5 + 76) = 1;
  return v3;
}
