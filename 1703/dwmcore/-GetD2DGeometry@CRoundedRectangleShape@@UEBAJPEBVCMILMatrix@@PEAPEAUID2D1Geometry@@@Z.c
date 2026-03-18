/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z @ 0x18007B300 (--$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801B0958 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // ebx
  bool v7; // r9
  float *v8; // rcx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void **v13; // rcx
  int v14; // eax

  v3 = 0;
  v7 = *((_QWORD *)this + 7) == 0LL;
  if ( !a2 )
  {
    v13 = (void **)((char *)this + 64);
    if ( !*v13 )
      goto LABEL_14;
    SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(v13);
    goto LABEL_13;
  }
  v8 = (float *)*((_QWORD *)this + 8);
  if ( !v8 )
  {
    v9 = operator new(0x44uLL);
    v10 = v9;
    if ( v9 )
    {
      *v9 = *(_OWORD *)a2;
      v9[1] = *((_OWORD *)a2 + 1);
      v9[2] = *((_OWORD *)a2 + 2);
      v9[3] = *((_OWORD *)a2 + 3);
      *((_DWORD *)v9 + 16) = *((_DWORD *)a2 + 16);
    }
    else
    {
      v10 = 0LL;
    }
    *((_QWORD *)this + 8) = v10;
    if ( !v10 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
      return v3;
    }
    goto LABEL_15;
  }
  if ( !CMILMatrix::IsEqualTo<0>(v8, (float *)a2) )
  {
    *(_OWORD *)v12 = *(_OWORD *)v11;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(v11 + 48);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(v11 + 64);
LABEL_13:
    v7 = 1;
  }
LABEL_14:
  if ( !v7 )
  {
LABEL_17:
    SetInterface<ID2D1Bitmap1,ID2D1Bitmap1>(a3, *((_QWORD *)this + 7));
    return v3;
  }
LABEL_15:
  v14 = CRoundedRectangleShape::BuildRoundedRectangleShape(this);
  v3 = v14;
  if ( v14 >= 0 )
    goto LABEL_17;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x52u);
  return v3;
}
