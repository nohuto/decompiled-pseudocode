/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4B54
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@M@?$vector@MV?$allocator@M@std@@@std@@QEAAX$$QEAM@Z @ 0x1801A44C8 (--$emplace_back@M@-$vector@MV-$allocator@M@std@@@std@@QEAAX$$QEAM@Z.c)
 *     ?GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ @ 0x1801A4DEC (-GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A541C (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  __int64 *v1; // r15
  __int64 v3; // rsi
  float StrokeThickness; // xmm0_4
  __int64 v5; // rcx
  __int64 v6; // rdx
  float v7; // xmm6_4
  CD3DDeviceManager *v8; // rcx
  float *v9; // rbx
  unsigned __int64 v10; // r14
  float v11; // xmm0_4
  char *v12; // rbx
  __int64 v13; // r14
  bool v14; // zf
  int D2DFactoryNoRef; // eax
  int v16; // eax
  struct CD2DFactory *v18; // [rsp+38h] [rbp-39h] BYREF
  void *lpMem; // [rsp+40h] [rbp-31h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h]
  _DWORD v21[4]; // [rsp+58h] [rbp-19h] BYREF
  int v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+6Ch] [rbp-5h]
  float v24; // [rsp+70h] [rbp-1h]
  BOOL v25; // [rsp+74h] [rbp+3h]

  v1 = (__int64 *)((char *)this + 120);
  v3 = 0LL;
  if ( !*((_QWORD *)this + 15) )
  {
    StrokeThickness = CSpriteVectorShape::GetStrokeThickness(this);
    v6 = *(_QWORD *)(v5 + 152) - *(_QWORD *)(v5 + 144);
    v7 = 1.0 / StrokeThickness;
    lpMem = 0LL;
    v20 = 0LL;
    std::vector<float>::reserve(&lpMem, v6 >> 2);
    v9 = (float *)*((_QWORD *)this + 18);
    v10 = (unsigned __int64)(*((_QWORD *)this + 19) - (_QWORD)v9 + 3LL) >> 2;
    if ( (unsigned __int64)v9 > *((_QWORD *)this + 19) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        *(float *)&v18 = v7 * *v9;
        std::vector<float>::emplace_back<float>((__int64)&lpMem, &v18);
        ++v9;
        ++v3;
      }
      while ( v3 != v10 );
    }
    v11 = *((float *)this + 47);
    v21[0] = *((_DWORD *)this + 43);
    v21[1] = *((_DWORD *)this + 44);
    v21[2] = *((_DWORD *)this + 42);
    v21[3] = *((_DWORD *)this + 45);
    if ( v11 >= 1.0 )
      v22 = LODWORD(v11);
    else
      v22 = 1065353216;
    v12 = (char *)lpMem;
    v13 = v20;
    v24 = v7 * *((float *)this + 46);
    v14 = *((_BYTE *)this + 196) == 0;
    v23 = (_QWORD)v20 != (_QWORD)lpMem ? 5 : 0;
    v25 = !v14;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v8, &v18);
    LODWORD(v3) = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x1EEu);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
      v16 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *, _QWORD, __int64 *))(**((_QWORD **)v18 + 3) + 144LL))(
              *((_QWORD *)v18 + 3),
              v21,
              v12,
              (unsigned int)((v13 - (__int64)v12) >> 2),
              v1);
      LODWORD(v3) = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1F3u);
    }
    if ( v12 )
      std::_Deallocate(v12, (__int64)(*((_QWORD *)&v20 + 1) - (_QWORD)v12) >> 2, 4uLL);
  }
  return (unsigned int)v3;
}
