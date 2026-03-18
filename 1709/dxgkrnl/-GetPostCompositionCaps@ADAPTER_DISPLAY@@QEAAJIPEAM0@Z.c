/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C00ABAF8
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AB964 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00B9400 (DxgkGetPostCompositionCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x1C017A7E4 (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  ADAPTER_RENDER *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int PostCompositionCaps; // eax
  __int64 v14; // rcx
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v16; // rax
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v17; // [rsp+20h] [rbp-48h] BYREF

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = v7;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2312LL);
    if ( v9 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2312LL) + 16LL);
        if ( *(_QWORD *)(v12 + 1112) )
        {
          if ( *(_BYTE *)(v12 + 2266) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
          {
            v17.MaxStretchFactor = 0.0;
            v17.VidPnSourceId = v7;
            v17.MaxShrinkFactor = 0.0;
            PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v17);
            v8 = PostCompositionCaps;
            if ( PostCompositionCaps < 0 )
            {
              v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
              v16[3] = v8;
              v16[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
              v16[5] = v7;
              WdLogEvent5_WdError(v16);
            }
            else
            {
              MaxShrinkFactor = v17.MaxShrinkFactor;
              *a3 = v17.MaxStretchFactor;
              *a4 = MaxShrinkFactor;
            }
          }
        }
      }
    }
    return (unsigned int)v8;
  }
}
