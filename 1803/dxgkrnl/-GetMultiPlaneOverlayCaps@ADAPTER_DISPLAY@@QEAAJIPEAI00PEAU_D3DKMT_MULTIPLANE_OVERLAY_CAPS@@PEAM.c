/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C00E1794
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00D73A0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0152CCC (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C015F968 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r14
  ADAPTER_RENDER *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int MultiPlaneOverlayCaps; // eax
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v20; // rax
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v21; // [rsp+30h] [rbp-38h] BYREF

  v11 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    *a4 = 0;
    *a5 = 0;
    LODWORD(v12) = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2464LL);
    if ( v13 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2464LL) + 16LL);
        if ( *(_QWORD *)(v16 + 1112) )
        {
          if ( *(_BYTE *)(v16 + 2410) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
          {
            memset(&v21.MaxPlanes, 0, 24);
            v21.VidPnSourceId = v11;
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v21);
            v12 = MultiPlaneOverlayCaps;
            if ( MultiPlaneOverlayCaps < 0 )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
              v20[3] = v12;
              v20[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
              v20[5] = v11;
              WdLogEvent5_WdError(v20);
            }
            else
            {
              if ( v21.MaxPlanes )
              {
                MaxStretchFactor = v21.MaxStretchFactor;
                MaxShrinkFactor = v21.MaxShrinkFactor;
                *a3 = v21.MaxPlanes;
                *a4 = v21.MaxRGBPlanes;
                *a5 = v21.MaxYUVPlanes;
                *a7 = MaxStretchFactor;
                *a8 = MaxShrinkFactor;
                a6->Value ^= (*(_WORD *)&v21.OverlayCaps.0 ^ (unsigned __int16)a6->Value) & 0x7FF;
              }
              else
              {
                *a3 = 1;
                *a4 = 0;
                *a5 = 0;
                a6->Value = 0;
                *a7 = 1.0;
                *a8 = 1.0;
              }
              a6->Value |= 0x800u;
            }
          }
        }
      }
    }
    return (unsigned int)v12;
  }
}
