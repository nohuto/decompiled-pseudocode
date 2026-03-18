/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C00E657C
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C009FB60 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6378 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C01767B8 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rsi
  __int64 v12; // rdi
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  int MultiPlaneOverlayCaps; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v24; // rax
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v25; // [rsp+30h] [rbp-38h] BYREF

  v11 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v17 = WdLogNewEntry5_WdError(a8, a2);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    *a4 = 0;
    LODWORD(v12) = 0;
    *a5 = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2288LL);
    if ( v13 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2288LL) + 16LL);
        if ( *(_QWORD *)(v18 + 1104) )
        {
          if ( *(_BYTE *)(v18 + 2242) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v11, v14, v15) )
          {
            memset(&v25.MaxPlanes, 0, 24);
            v25.VidPnSourceId = v11;
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v25);
            v12 = MultiPlaneOverlayCaps;
            if ( MultiPlaneOverlayCaps < 0 )
            {
              v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
              v24[3] = v12;
              v24[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
              v24[5] = v11;
              WdLogEvent5_WdError(v24);
            }
            else
            {
              MaxStretchFactor = v25.MaxStretchFactor;
              MaxShrinkFactor = v25.MaxShrinkFactor;
              *a3 = v25.MaxPlanes;
              *a4 = v25.MaxRGBPlanes;
              *a5 = v25.MaxYUVPlanes;
              *a7 = MaxStretchFactor;
              *a8 = MaxShrinkFactor;
              a6->Value = *(_WORD *)&v25.OverlayCaps.0 & 0x7FF | a6->Value & 0xFFFFF800 | 0x800;
            }
          }
        }
      }
    }
    return (unsigned int)v12;
  }
}
