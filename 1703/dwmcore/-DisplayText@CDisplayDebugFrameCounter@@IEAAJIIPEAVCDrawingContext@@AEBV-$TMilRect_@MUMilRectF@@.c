/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180143974
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180143680 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A1CBC (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801438E4 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayText(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        struct CDrawingContext *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int128 v10; // xmm8
  float v12; // xmm3_4
  struct D2D_RECT_F v13; // xmm1
  bool v14; // zf
  int Factory; // eax
  unsigned int v16; // ebx
  _QWORD *v17; // r15
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct D2D_RECT_F v22; // [rsp+58h] [rbp-A1h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-89h] BYREF
  struct D2D_RECT_F v24; // [rsp+88h] [rbp-71h] BYREF
  struct D2D_RECT_F v25; // [rsp+98h] [rbp-61h] BYREF

  v10 = _xmm;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - 60.0;
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v22.top = 0.0;
  v22.bottom = 24.0;
  v22.left = v12 + 20.0;
  v22.right = (float)(v12 + 20.0) + 40.0;
  v13 = v22;
  v22.top = 0.0;
  v14 = *((_BYTE *)this + 16) == 0;
  v22.left = (float)(v12 + 40.0) + 40.0;
  v22.bottom = 24.0;
  v25 = v13;
  v22.right = v22.left + 40.0;
  if ( v14 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 24);
    v16 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Factory, 0x9Cu);
      return v16;
    }
    v17 = (_QWORD *)((char *)this + 32);
    v18 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, wchar_t *, char *))(**((_QWORD **)this + 3) + 120LL))(
            *((_QWORD *)this + 3),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            word_1801D5868,
            (char *)this + 32);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xABu);
      return v16;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 24LL))(*v17, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 32LL))(*v17, 2LL);
    *((_BYTE *)this + 16) = 1;
  }
  v24.top = 0.0;
  v24.left = v12 + 0.0;
  *(_OWORD *)&v23[1] = _xmm;
  v24.bottom = 24.0;
  v24.right = v12 + 120.0;
  CDrawingContext::DrawSolidRectangleInternal((__int64)a4, &v24, (const struct _D3DCOLORVALUE *)&v23[1]);
  if ( a2 <= 0x1E )
    v10 = _xmm;
  *(_OWORD *)&v23[1] = v10;
  v19 = CDisplayDebugFrameCounter::DisplayNumber(
          (struct IDWriteTextFormat **)this,
          a2,
          (struct _D3DCOLORVALUE *)&v23[1],
          &v25,
          a4);
  v16 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC3u);
  }
  else
  {
    *(_OWORD *)&v23[1] = _xmm;
    v20 = CDisplayDebugFrameCounter::DisplayNumber(
            (struct IDWriteTextFormat **)this,
            a3,
            (struct _D3DCOLORVALUE *)&v23[1],
            &v22,
            a4);
    v16 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC6u);
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(float *)a7 = v12 + 0.0;
      *(float *)(a7 + 8) = v12 + 120.0;
      *(_DWORD *)(a7 + 12) = 1103101952;
    }
  }
  return v16;
}
