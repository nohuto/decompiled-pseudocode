/*
 * XREFs of ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801482F0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180148718 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CoRenderHost::BeginRender(
        CoRenderHost *a1,
        __int64 a2,
        struct CD3DSurface *a3,
        __int64 a4,
        float *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // eax
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // eax
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // eax
  float v19; // xmm0_4
  int v20; // eax
  float v22; // [rsp+40h] [rbp-48h]
  _DWORD v23[4]; // [rsp+48h] [rbp-40h] BYREF

  v8 = CoRenderHost::SetDeviceFromSurface(a1, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xBEu);
  }
  else
  {
    v10 = *((_QWORD *)a1 + 3);
    v11 = *a5 + 6291456.25;
    v12 = v11;
    v13 = a5[1];
    v23[0] = (int)(LODWORD(v12) << 10) >> 11;
    v14 = v13 + 6291456.25;
    v15 = v14;
    v16 = a5[2];
    v23[1] = (int)(LODWORD(v15) << 10) >> 11;
    v17 = v16 + 6291456.25;
    v18 = v17;
    v19 = a5[3];
    v23[2] = (int)(LODWORD(v18) << 10) >> 11;
    v22 = v19 + 6291456.25;
    v23[3] = (int)(LODWORD(v22) << 10) >> 11;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v10 + 72LL))(
            v10,
            a2,
            *(_QWORD *)(*((_QWORD *)a1 + 4) + 128LL),
            *(_QWORD *)(*((_QWORD *)a1 + 4) + 192LL),
            a4,
            v23);
    v9 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xD3u);
  }
  return v9;
}
