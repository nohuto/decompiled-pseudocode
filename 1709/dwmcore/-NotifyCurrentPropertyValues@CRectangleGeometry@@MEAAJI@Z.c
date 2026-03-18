/*
 * XREFs of ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEAAJI@Z @ 0x1801756D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::NotifyCurrentPropertyValues(CRectangleGeometry *this, __int16 a2)
{
  unsigned int v2; // ebx
  float v5; // xmm2_4
  signed int v6; // eax
  float v7; // xmm2_4
  signed int v8; // eax
  float v9; // xmm2_4
  signed int v10; // eax
  float v11; // xmm2_4
  signed int v12; // eax
  float v13; // xmm2_4
  signed int v14; // eax
  float v15; // xmm2_4
  signed int v16; // eax
  float v17; // xmm2_4
  signed int v18; // eax
  float v19; // xmm2_4
  signed int v20; // eax
  float v21; // xmm2_4
  signed int v22; // eax
  float v23; // xmm2_4
  signed int v24; // eax
  float v25; // xmm2_4
  signed int v26; // eax
  float v27; // xmm2_4
  signed int v28; // eax

  v2 = 0;
  if ( (a2 & 2) == 0
    || (v5 = *((float *)this + 26), v5 == 0.0)
    || (v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 1u, v5), v2 = v6, v6 >= 0) )
  {
    if ( (a2 & 4) == 0
      || (v7 = *((float *)this + 27), v7 == 0.0)
      || (v8 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 2u, v7), v2 = v8, v8 >= 0) )
    {
      if ( (a2 & 8) == 0
        || (v9 = *((float *)this + 28), v9 == 0.0)
        || (v10 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 3u, v9), v2 = v10, v10 >= 0) )
      {
        if ( (a2 & 0x10) == 0
          || (v11 = *((float *)this + 29), v11 == 0.0)
          || (v12 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 4u, v11), v2 = v12, v12 >= 0) )
        {
          if ( (a2 & 0x20) == 0
            || (v13 = *((float *)this + 30), v13 == 0.0)
            || (v14 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 5u, v13), v2 = v14, v14 >= 0) )
          {
            if ( (a2 & 0x40) == 0
              || (v15 = *((float *)this + 31), v15 == 0.0)
              || (v16 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 6u, v15), v2 = v16, v16 >= 0) )
            {
              if ( (a2 & 0x80u) == 0
                || (v17 = *((float *)this + 32), v17 == 0.0)
                || (v18 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 7u, v17), v2 = v18, v18 >= 0) )
              {
                if ( (a2 & 0x100) == 0
                  || (v19 = *((float *)this + 33), v19 == 0.0)
                  || (v20 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 8u, v19), v2 = v20, v20 >= 0) )
                {
                  if ( (a2 & 0x200) == 0
                    || (v21 = *((float *)this + 34), v21 == 0.0)
                    || (v22 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 9u, v21), v2 = v22, v22 >= 0) )
                  {
                    if ( (a2 & 0x400) == 0
                      || (v23 = *((float *)this + 35), v23 == 0.0)
                      || (v24 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xAu, v23), v2 = v24, v24 >= 0) )
                    {
                      if ( (a2 & 0x800) == 0
                        || (v25 = *((float *)this + 36), v25 == 0.0)
                        || (v26 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xBu, v25),
                            v2 = v26,
                            v26 >= 0) )
                      {
                        if ( (a2 & 0x1000) != 0 )
                        {
                          v27 = *((float *)this + 37);
                          if ( v27 != 0.0 )
                          {
                            v28 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xCu, v27);
                            v2 = v28;
                            if ( v28 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x307u);
                          }
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x2FFu);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x2F7u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x2EFu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x2E7u);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x2DFu);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x2D7u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2CFu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x2C7u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x2BFu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2B7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x2AFu);
  }
  return v2;
}
