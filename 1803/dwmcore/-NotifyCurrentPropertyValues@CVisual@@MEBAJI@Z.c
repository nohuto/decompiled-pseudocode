/*
 * XREFs of ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18002AF20 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18002B158 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004CE3C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004F6C0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::NotifyCurrentPropertyValues(CVisual *this, int a2)
{
  unsigned int v2; // ebx
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm0_4
  unsigned __int64 v7; // rcx
  FLOAT v8; // xmm1_4
  int v10; // eax
  int v11; // eax
  float OpacityInternal; // xmm0_4
  int v13; // eax
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  struct D2D_VECTOR_3F v17; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_3F v18; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (a2 & 0x10000000) == 0 )
    goto LABEL_29;
  v5 = *((float *)this + 27);
  v18.x = *((FLOAT *)this + 26);
  v6 = *((float *)this + 28);
  v18.y = v5;
  v7 = *(_QWORD *)&v18.x - CVisual::sc_defaultOffset;
  v18.z = v6;
  if ( *(_QWORD *)&v18.x == CVisual::sc_defaultOffset )
    v7 = LODWORD(v18.z) - (unsigned __int64)(unsigned int)dword_1802D9DB8;
  if ( v7
    && (v11 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 28LL, (const struct D2DVector3 *)&v18),
        v2 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x186Au);
  }
  else
  {
LABEL_29:
    if ( (a2 & 0x4000000) == 0
      || (OpacityInternal = CVisual::GetOpacityInternal(this), OpacityInternal == 1.0)
      || (v13 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, OpacityInternal), v2 = v13, v13 >= 0) )
    {
      if ( (a2 & 0x20000000) == 0
        || (v8 = *((float *)this + 32), v17.x = *((FLOAT *)this + 31), v17.y = v8, *(_QWORD *)&v17.x == CVisual::sc_Size)
        || (v10 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 29LL, (const struct D2DVector2 *)&v17),
            v2 = v10,
            v10 >= 0) )
      {
        if ( (a2 & 0x40000000) == 0 )
          goto LABEL_30;
        CVisual::GetRelativeOffsetInternal(this, &v17);
        v18 = v17;
        v14 = *(_QWORD *)&v17.x - CVisual::sc_defaultRelativeOffset;
        if ( *(_QWORD *)&v17.x == CVisual::sc_defaultRelativeOffset )
          v14 = LODWORD(v18.z) - (unsigned __int64)(unsigned int)dword_1802D9DC8;
        if ( v14
          && (v15 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 30LL, (const struct D2DVector3 *)&v18),
              v2 = v15,
              v15 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1889u);
        }
        else
        {
LABEL_30:
          if ( a2 < 0 )
          {
            CVisual::GetRelativeLayoutSizeInternal(this);
            *(_QWORD *)&v17.x = *(_QWORD *)&v18.x;
            if ( *(_QWORD *)&v18.x != CVisual::sc_defaultRelativeSize )
            {
              v16 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 31LL, (const struct D2DVector2 *)&v17);
              v2 = v16;
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1893u);
            }
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x187Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1873u);
    }
  }
  return v2;
}
