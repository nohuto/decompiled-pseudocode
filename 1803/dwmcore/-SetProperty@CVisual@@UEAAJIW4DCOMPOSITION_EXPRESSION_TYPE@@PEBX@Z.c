/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004BF70
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004CE3C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004D92C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004D9D4 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004DA70 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18013CB74 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18013CC48 (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  CVisual *v5; // rbx
  float v6; // xmm6_4
  float z; // xmm3_4
  float v9; // xmm2_4
  float x; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  float y; // xmm2_4
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F *v27; // rax
  __int64 v28; // r11
  struct D2D_VECTOR_3F v29; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_VECTOR_3F v30; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (CVisual *)a1;
  if ( a3 != 18 )
  {
    if ( a3 == 35 )
    {
      if ( a2 == 29 )
      {
        v16 = a4[1];
        v17 = *a4;
LABEL_26:
        CVisual::SetSize((CVisual *)a1, v17, v16);
        return v4;
      }
      if ( a2 != 31 )
      {
LABEL_37:
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8D1u);
        return v4;
      }
      v14 = a4[1];
      v15 = *a4;
LABEL_17:
      CVisual::SetRelativeSize((CVisual *)a1, v15, v14);
      return v4;
    }
    if ( a3 != 52 )
      goto LABEL_37;
    if ( a2 == 28 )
    {
      v11 = a4[2];
      v12 = a4[1];
      v13 = *a4;
      goto LABEL_31;
    }
    if ( a2 != 30 )
      goto LABEL_37;
    z = a4[2];
    v9 = a4[1];
    x = *a4;
    goto LABEL_43;
  }
  v6 = *a4;
  if ( a2 > 0x1A )
  {
    v21 = a2 - 32;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 1 )
              goto LABEL_37;
            v14 = *a4;
            v15 = **(float **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
            goto LABEL_16;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v29)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v5, &v30);
          CVisual::SetRelativeOffset(v5, RelativeOffsetInternal->x, y, v6);
        }
        v15 = v6;
        v14 = *(float *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v5) + 4LL);
LABEL_16:
        a1 = (float *)v5;
        goto LABEL_17;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v30)->z;
      v9 = v6;
      x = CVisual::GetRelativeOffsetInternal(v5, &v29)->x;
    }
    else
    {
      CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v30);
      v27 = CVisual::GetRelativeOffsetInternal(v5, &v29);
      z = *(float *)(v28 + 8);
      x = v6;
      v9 = v27->y;
    }
    a1 = (float *)v5;
LABEL_43:
    CVisual::SetRelativeOffset((CVisual *)a1, x, v9, z);
    return v4;
  }
  if ( a2 != 26 )
  {
    if ( a2 )
    {
      v18 = a2 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 22;
          if ( !v20 )
          {
            v16 = a1[32];
            v17 = *a4;
            goto LABEL_26;
          }
          if ( v20 == 1 )
          {
            v17 = a1[31];
            v16 = *a4;
            goto LABEL_26;
          }
          goto LABEL_37;
        }
        v12 = a1[27];
        v11 = *a4;
      }
      else
      {
        v11 = a1[28];
        v12 = *a4;
      }
      v13 = a1[26];
    }
    else
    {
      v11 = a1[28];
      v13 = *a4;
      v12 = a1[27];
    }
LABEL_31:
    CVisual::SetOffset((CVisual *)a1, v13, v12, v11);
    return v4;
  }
  CVisual::SetOpacity((CVisual *)a1, *a4);
  return v4;
}
