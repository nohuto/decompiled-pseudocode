/*
 * XREFs of ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18004A608
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18004A304 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003A080 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180049D10 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18004A830 (-GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x18004A9BC (-GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ.c)
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18004ADA0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPath(
        CHwSurfaceRenderTarget *this,
        CD2DContext *a2,
        const struct ID2DContextOwner *a3,
        __int64 a4,
        CRectanglesShape *a5,
        struct CD3DDeviceLevel1 *a6,
        __int128 *a7,
        CLegacyMilBrushRealizer *a8,
        float *a9,
        int a10)
{
  __int64 (__fastcall *v14)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v16; // edi
  struct CD3DDeviceLevel1 *v17; // rbx
  CBrushResourceRealizer *v18; // r14
  struct CMILBrush *(__fastcall *v19)(CLegacyMilBrushRealizer *__hidden, bool); // rax
  struct CMILBrush *RealizedBrushNoRef; // rax
  struct CMILBrush *v21; // rbp
  float OpacityFromRealizedBrush; // xmm0_4
  int v23; // eax
  char *v24; // rdx
  char *v25; // r8
  __int64 v26; // r9
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  struct CD3DDeviceLevel1 *v30; // [rsp+90h] [rbp+8h] BYREF

  v14 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 208LL);
  if ( v14 == CHwDisplayRenderTarget::GetDeviceNoRef )
  {
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v30);
  }
  else if ( v14 == CHwSurfaceRenderTarget::GetDeviceNoRef )
  {
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v30);
  }
  else
  {
    DeviceNoRef = v14(this, &v30);
  }
  v16 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceNoRef, 0xB0u);
  }
  else
  {
    v17 = v30;
    v18 = a8;
    ++*((_DWORD *)v30 + 234);
    v19 = *(struct CMILBrush *(__fastcall **)(CLegacyMilBrushRealizer *__hidden, bool))(*(_QWORD *)v18 + 48LL);
    if ( v19 == CBrushResourceRealizer::GetRealizedBrushNoRef )
    {
      RealizedBrushNoRef = CBrushResourceRealizer::GetRealizedBrushNoRef(v18, 0);
    }
    else if ( v19 == CLegacyMilBrushRealizer::GetRealizedBrushNoRef )
    {
      RealizedBrushNoRef = CLegacyMilBrushRealizer::GetRealizedBrushNoRef(v18, 0);
    }
    else
    {
      RealizedBrushNoRef = v19(v18, 0);
    }
    v21 = RealizedBrushNoRef;
    OpacityFromRealizedBrush = CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(v18);
    if ( v21 )
    {
      v23 = CHwSurfaceRenderTarget::FillPathWithBrush(
              this,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              v21,
              SLODWORD(OpacityFromRealizedBrush),
              a9,
              a10);
      v16 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xCBu);
        v24 = (char *)*((_QWORD *)v17 + 127);
        v25 = (char *)v17 + 1008;
        while ( v24 != v25 && *((_DWORD *)v24 + 8) == *((_DWORD *)v17 + 234) )
        {
          *((_DWORD *)v24 + 8) = 0;
          v24 = (char *)*((_QWORD *)v24 + 1);
        }
      }
      else
      {
        v24 = (char *)*((_QWORD *)v17 + 127);
        v25 = (char *)v17 + 1008;
        while ( v24 != v25 && *((_DWORD *)v24 + 8) == *((_DWORD *)v17 + 234) )
        {
          *((_DWORD *)v24 + 8) = 0;
          v24 = (char *)*((_QWORD *)v24 + 1);
        }
      }
    }
    else
    {
      v24 = (char *)*((_QWORD *)v17 + 127);
      v25 = (char *)v17 + 1008;
      while ( v24 != v25 && *((_DWORD *)v24 + 8) == *((_DWORD *)v17 + 234) )
      {
        *((_DWORD *)v24 + 8) = 0;
        v24 = (char *)*((_QWORD *)v24 + 1);
      }
    }
    v26 = *(_QWORD *)v24;
    if ( *(char **)v24 != v25 )
    {
      v28 = (_QWORD *)*((_QWORD *)v17 + 127);
      *(_QWORD *)v24 = v25;
      *((_QWORD *)v17 + 127) = v24;
      v29 = (_QWORD *)*((_QWORD *)v17 + 125);
      *v29 = v26;
      *(_QWORD *)(v26 + 8) = v29;
      *((_QWORD *)v17 + 125) = v28;
      *v28 = (char *)v17 + 992;
    }
    --*((_DWORD *)v17 + 234);
  }
  if ( v16 == -2003304441 || v16 == -2003304438 )
    return 0;
  return v16;
}
