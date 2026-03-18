/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x180096324 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ??9D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1800BC1CC (--9D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x1801754E0 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::NotifyCurrentPropertyValues(CComponentTransform3D *this, int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  float v7; // xmm2_4
  struct _D3DMATRIX *v8; // rcx
  signed int v10; // eax
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  signed int v13; // eax
  signed int v14; // eax
  unsigned int v15; // edx
  const struct D2DQuaternion *v16; // rcx
  signed int v17; // eax
  signed int v18; // eax
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // edx
  signed int v24; // eax
  struct _D3DMATRIX v25; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v26[4]; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( (a2 & 0x80000) == 0
    || *((_QWORD *)this + 19) == CComponentTransform3D::sc_defaultAnchor
    || (v10 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                this,
                0x13u,
                (CComponentTransform3D *)((char *)this + 152)),
        v2 = v10,
        v10 >= 0) )
  {
    if ( (a2 & 0x40000) == 0 )
      goto LABEL_39;
    v5 = *((_QWORD *)this + 20) - CComponentTransform3D::sc_defaultCenter;
    if ( !v5 )
      v5 = *((unsigned int *)this + 42) - (unsigned __int64)(unsigned int)dword_180272640;
    if ( v5
      && (v11 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                  this,
                  0x12u,
                  (CComponentTransform3D *)((char *)this + 160)),
          v2 = v11,
          v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x258u);
    }
    else
    {
LABEL_39:
      if ( (a2 & 0x200000) == 0 )
        goto LABEL_40;
      v12 = *(_QWORD *)((char *)this + 172) - CComponentTransform3D::sc_defaultRotationAxis;
      if ( !v12 )
        v12 = *((unsigned int *)this + 45) - (unsigned __int64)(unsigned int)dword_18026E180;
      if ( v12
        && (v13 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                    this,
                    0x15u,
                    (CComponentTransform3D *)((char *)this + 172)),
            v2 = v13,
            v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x260u);
      }
      else
      {
LABEL_40:
        if ( (a2 & 0x400000) == 0 )
          goto LABEL_41;
        v6 = *((_QWORD *)this + 23) - CComponentTransform3D::sc_defaultScale;
        if ( !v6 )
          v6 = *((unsigned int *)this + 48) - (unsigned __int64)(unsigned int)dword_18026E190;
        if ( v6
          && (v14 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                      this,
                      0x16u,
                      (CComponentTransform3D *)((char *)this + 184)),
              v2 = v14,
              v14 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x268u);
        }
        else
        {
LABEL_41:
          if ( (a2 & 0x100000) != 0
            && (unsigned int)D2DQuaternion::operator!=(
                               (char *)this + 196,
                               &CComponentTransform3D::sc_defaultOrientation)
            && (v17 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, v15, v16), v2 = v17, v17 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x270u);
          }
          else if ( (a2 & 0x1000) == 0
                 || (v7 = *((float *)this + 53), v7 == 0.0)
                 || (v18 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xCu, v7), v2 = v18, v18 >= 0) )
          {
            if ( (a2 & 0x20000) != 0
              && !CMILMatrix::IsEqualTo<0>(
                    (float *)this + 54,
                    (float *)&CComponentTransform3D::sc_defaultTransformMatrix) )
            {
              D3DMatrix = CMILMatrix::GetD3DMatrix(v8, &v25);
              v20 = *(_OWORD *)&D3DMatrix->_21;
              v26[0] = *(_OWORD *)&D3DMatrix->_11;
              v21 = *(_OWORD *)&D3DMatrix->_31;
              v26[1] = v20;
              v22 = *(_OWORD *)&D3DMatrix->_41;
              v26[2] = v21;
              v26[3] = v22;
              v24 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(this, v23, (const struct D2DMatrix *)v26);
              v2 = v24;
              if ( v24 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x281u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x278u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x250u);
  }
  return v2;
}
