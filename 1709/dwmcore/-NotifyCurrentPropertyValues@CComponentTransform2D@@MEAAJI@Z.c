/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z @ 0x180159E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800964CC (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::NotifyCurrentPropertyValues(CComponentTransform2D *this, char a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  float v9; // xmm2_4
  signed int v10; // eax
  __int64 v11; // rdx
  const struct D2D_MATRIX_3X2_F *v12; // rcx
  signed int v13; // eax

  v2 = 0;
  if ( (a2 & 1) == 0
    || *((_QWORD *)this + 9) == CComponentTransform2D::sc_defaultAnchor
    || (v5 = CPropertyChangeResource::NotifyVector2PropertyChanged(
               this,
               0,
               (CComponentTransform2D *)((char *)this + 72)),
        v2 = v5,
        v5 >= 0) )
  {
    if ( (a2 & 2) == 0
      || *((_QWORD *)this + 10) == CComponentTransform2D::sc_defaultCenter
      || (v6 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                 this,
                 1u,
                 (CComponentTransform2D *)((char *)this + 80)),
          v2 = v6,
          v6 >= 0) )
    {
      if ( (a2 & 4) == 0
        || *((_QWORD *)this + 11) == CComponentTransform2D::sc_defaultOffset
        || (v7 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                   this,
                   2u,
                   (CComponentTransform2D *)((char *)this + 88)),
            v2 = v7,
            v7 >= 0) )
      {
        if ( (a2 & 0x20) == 0
          || *((_QWORD *)this + 12) == CComponentTransform2D::sc_defaultScale
          || (v8 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                     this,
                     5u,
                     (CComponentTransform2D *)((char *)this + 96)),
              v2 = v8,
              v8 >= 0) )
        {
          if ( (a2 & 8) == 0
            || (v9 = *((float *)this + 26), v9 == 0.0)
            || (v10 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 3u, v9), v2 = v10, v10 >= 0) )
          {
            if ( (a2 & 0x40) != 0 && !D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 108)) )
            {
              v13 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(this, v11, v12);
              v2 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x216u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x20Eu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x206u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1FEu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1F6u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x1EEu);
  }
  return v2;
}
