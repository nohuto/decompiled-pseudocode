/*
 * XREFs of ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180198808
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x18018FE88 (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DGradientBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1LinearGradientBrush **a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  int CurrentD2DLinearGradientBrush; // eax
  unsigned int v10; // ebx
  unsigned int v11; // xmm2_4
  float v12; // xmm1_4
  int v13; // xmm1_4
  struct ID2D1LinearGradientBrush *v14; // rbx
  __int64 v15; // rcx
  float v17; // [rsp+30h] [rbp-30h] BYREF
  float v18; // [rsp+34h] [rbp-2Ch]
  struct ID2D1LinearGradientBrush *v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+54h] [rbp-Ch]

  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  v19 = 0LL;
  v17 = v6;
  v18 = v7;
  CurrentD2DLinearGradientBrush = CGradientBrush::GetCurrentD2DLinearGradientBrush(this, a2, &v19);
  v10 = CurrentD2DLinearGradientBrush;
  if ( CurrentD2DLinearGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentD2DLinearGradientBrush, 0xE8u);
    if ( v19 )
      (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
    if ( *((_DWORD *)this + 25) == 1 )
    {
      *(float *)&v11 = (float)(v17 * *((float *)this + 46)) + a3->left;
      *(float *)&v20 = (float)(*((float *)this + 44) * v17) + a3->left;
      v12 = (float)(v18 * *((float *)this + 47)) + a3->top;
      *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(v11, (float)(v18 * *((float *)this + 45)) + a3->top);
      *((float *)&v20 + 3) = v12;
    }
    else
    {
      v13 = *((_DWORD *)this + 46);
      *(_QWORD *)&v20 = *((_QWORD *)this + 22);
      HIDWORD(v20) = *((_DWORD *)this + 47);
      DWORD2(v20) = v13;
    }
    v14 = v19;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, v20);
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v14 + 72LL))(
      v14,
      *((_QWORD *)&v20 + 1));
    v15 = *((_QWORD *)this + 20);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v15 + 176LL))(v15, &v17, &v20);
    }
    else
    {
      v21 = 0;
      v22 = 0;
      v20 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, __int128 *))(*(_QWORD *)v14 + 40LL))(v14, &v20);
    *a4 = v14;
    return 0;
  }
  return v10;
}
