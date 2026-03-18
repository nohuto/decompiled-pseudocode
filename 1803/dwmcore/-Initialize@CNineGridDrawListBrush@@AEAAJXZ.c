/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180004F0C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800044C8 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180004500 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800063EC (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x180006514 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18008DAE8 (-IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r14
  __int64 v4; // rcx
  char IsPrimitiveClampedToContentRect; // di
  unsigned int v6; // xmm3_4
  unsigned int v7; // xmm1_4
  FLOAT v8; // xmm2_4
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  int AllHollowRects; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int128 v16; // xmm0
  struct D2D_MATRIX_3X2_F *v18; // [rsp+28h] [rbp-49h]
  char v19; // [rsp+38h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v20; // [rsp+48h] [rbp-29h] BYREF
  __int128 v21; // [rsp+60h] [rbp-11h] BYREF
  __int64 v22; // [rsp+70h] [rbp-1h]
  _QWORD v23[2]; // [rsp+78h] [rbp+7h] BYREF
  int v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+8Ch] [rbp+1Bh]
  int v26; // [rsp+90h] [rbp+1Fh]
  _BYTE v27[16]; // [rsp+98h] [rbp+27h] BYREF

  v1 = *((_QWORD *)this + 7);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 8LL))(*(_QWORD *)(v4 + 56), 2LL) )
  {
    IsPrimitiveClampedToContentRect = CSurfaceDrawListBrush::IsPrimitiveClampedToContentRect(*((CSurfaceDrawListBrush **)this
                                                                                             + 7));
    *((_BYTE *)this + 578) = IsPrimitiveClampedToContentRect;
  }
  else
  {
    IsPrimitiveClampedToContentRect = *((_BYTE *)this + 578);
  }
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v20, &v20.m12, (float *)&v21, v18);
  v19 = *((_BYTE *)this + 576);
  *(float *)&v6 = v20.m11 * *((float *)this + 10);
  *(float *)&v7 = v20.m12 * *((float *)this + 9);
  v8 = v20.m12 * *((float *)this + 11);
  v20.m21 = v20.m11 * *((float *)this + 8);
  *(_QWORD *)&v20.m[1][1] = __PAIR64__(v6, v7);
  v20.dy = v8;
  v10 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 96),
          v9,
          (const struct D2D_RECT_F *)v20.m[1],
          (CNineGridDrawListBrush *)((char *)this + 80),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 64),
          v19,
          IsPrimitiveClampedToContentRect);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x65u);
  }
  else if ( *((_DWORD *)this + 30) || *((_DWORD *)this + 78) || *((_DWORD *)this + 126) )
  {
    v26 = 0;
    v23[0] = v27;
    v24 = 1;
    v23[1] = v27;
    v25 = 1;
    AllHollowRects = CoordMap::GetAllHollowRects((__int64)this + 96, (__int64)v23);
    v11 = AllHollowRects;
    if ( AllHollowRects < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllHollowRects, 0x6Au);
    }
    else
    {
      if ( v26 )
      {
        v13 = *(_OWORD *)v23[0];
        *((_BYTE *)this + 577) = 1;
        *((_OWORD *)this + 35) = v13;
      }
      v14 = v21;
      *((_BYTE *)this + 52) = 1;
      v15 = v22;
      *(_OWORD *)v2 = v14;
      v16 = *(_OWORD *)&v20.m[1][0];
      *((_QWORD *)v2 + 2) = v15;
      *((_OWORD *)this + 2) = v16;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v23);
  }
  return v11;
}
