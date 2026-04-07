/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BD2C
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B7B0 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000C014 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x18008AA8C (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 *     ?SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z @ 0x18008AE84 (-SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm5_4
  const struct D2D1::Matrix4x4F *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  LONG v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int128 v22; // [rsp+58h] [rbp-B0h]
  __int128 v23; // [rsp+68h] [rbp-A0h]
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  __int128 v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+98h] [rbp-70h]
  __int128 v27; // [rsp+A8h] [rbp-60h]
  struct tagRECT v28; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-30h]
  __int128 v31; // [rsp+E8h] [rbp-20h]
  float v32; // [rsp+F8h] [rbp-10h]
  float v33; // [rsp+FCh] [rbp-Ch]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+104h] [rbp-4h]
  _OWORD v36[4]; // [rsp+108h] [rbp+0h] BYREF

  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)((char *)this + 856), &v28);
  v34 = 0;
  v35 = 1065353216;
  v24 = _xmm;
  v26 = _xmm;
  v29 = _xmm;
  v31 = _xmm;
  v2 = (float)((float)((float)v28.right - (float)v28.left) * 0.5) + (float)v28.left;
  v25 = _xmm;
  v27 = _xmm;
  v30 = _xmm;
  v3 = (float)((float)((float)v28.bottom - (float)v28.top) * 0.5) + (float)v28.top;
  LODWORD(v32) = LODWORD(v2) ^ _xmm;
  v21 = _xmm;
  LODWORD(v33) = LODWORD(v3) ^ _xmm;
  v20 = _xmm;
  v23 = _xmm;
  v22 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v20,
    (const struct D2D1::Matrix4x4F *)&v24,
    (const struct D2D1::Matrix4x4F *)&v29);
  v24 = v20;
  v25 = v21;
  v6 = fmaxf(v5, v4) * *((float *)this + 234);
  v26 = v22;
  v27 = v23;
  v7 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)&v29, v6);
  v20 = _xmm;
  v21 = _xmm;
  v22 = _xmm;
  v23 = _xmm;
  D2D1::Matrix4x4F::SetProduct((D2D1::Matrix4x4F *)&v20, (const struct D2D1::Matrix4x4F *)&v24, v7);
  v24 = v20;
  v34 = 0;
  v26 = v22;
  v29 = _xmm;
  v25 = v21;
  v31 = _xmm;
  v27 = v23;
  v20 = _xmm;
  v30 = _xmm;
  v21 = _xmm;
  v22 = _xmm;
  v32 = v2;
  v33 = v3;
  v35 = 1065353216;
  v23 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v20,
    (const struct D2D1::Matrix4x4F *)&v24,
    (const struct D2D1::Matrix4x4F *)&v29);
  v8 = *((_QWORD *)this + 37);
  v25 = v21;
  v36[1] = v21;
  v26 = v22;
  v27 = v23;
  v36[2] = v22;
  v36[0] = v20;
  v36[3] = v23;
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *(unsigned int *)(v8 + 24);
  v24 = v20;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v9 + 1104LL))(v9, v10, v36);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = *((_QWORD *)this + 37);
    v28.left = *(_DWORD *)(*((_QWORD *)this + 36) + 24LL);
    v14 = *(_DWORD *)(v13 + 24);
    v15 = *((_QWORD *)this + 38);
    v28.top = v14;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagRECT *, __int64))(**(_QWORD **)(v15 + 16) + 1112LL))(
            *(_QWORD *)(v15 + 16),
            *(unsigned int *)(v15 + 24),
            &v28,
            2LL);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 39)
                                                                                            + 16LL)
                                                                              + 984LL))(
              *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 39) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 38) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 38) + 24LL));
      v12 = v17;
      if ( v17 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 16LL) + 376LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 3) + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 39) + 24LL));
        v12 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x769u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x765u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x75Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x751u);
  }
  return v12;
}
