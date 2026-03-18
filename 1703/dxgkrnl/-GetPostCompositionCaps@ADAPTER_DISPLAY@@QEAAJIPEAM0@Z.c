/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C00E6500
 * Callers:
 *     DxgkGetPostCompositionCaps @ 0x1C00A00F0 (DxgkGetPostCompositionCaps.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6378 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x1C0176A1C (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(ADAPTER_DISPLAY *this, __int64 a2, float *a3, float *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  int PostCompositionCaps; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v19; // rax
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v20; // [rsp+20h] [rbp-48h] BYREF

  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = v7;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2288LL);
    if ( v9 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2288LL) + 16LL);
        if ( *(_QWORD *)(v14 + 1112) )
        {
          if ( *(_BYTE *)(v14 + 2242) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v7, v10, v11) )
          {
            v20.MaxStretchFactor = 0.0;
            v20.VidPnSourceId = v7;
            v20.MaxShrinkFactor = 0.0;
            PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v20);
            v8 = PostCompositionCaps;
            if ( PostCompositionCaps < 0 )
            {
              v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
              v19[3] = v8;
              v19[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
              v19[5] = v7;
              WdLogEvent5_WdError(v19);
            }
            else
            {
              MaxShrinkFactor = v20.MaxShrinkFactor;
              *a3 = v20.MaxStretchFactor;
              *a4 = MaxShrinkFactor;
            }
          }
        }
      }
    }
    return (unsigned int)v8;
  }
}
