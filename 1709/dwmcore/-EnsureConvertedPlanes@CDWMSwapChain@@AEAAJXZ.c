/*
 * XREFs of ?EnsureConvertedPlanes@CDWMSwapChain@@AEAAJXZ @ 0x1801B034C
 * Callers:
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AFF98 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CDWMSwapChain::EnsureConvertedPlanes(CDWMSwapChain *this)
{
  unsigned int v1; // edi
  void *v3; // rax
  unsigned int i; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 71) )
  {
    v3 = operator new(saturated_mul(*((unsigned int *)this + 141), 0x88uLL));
    *((_QWORD *)this + 71) = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 136LL * *((unsigned int *)this + 141));
      **((_DWORD **)this + 71) = 0;
      *(_DWORD *)(*((_QWORD *)this + 71) + 4LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 71) + 76LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 71) + 80LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 71) + 96LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 71) + 104LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 71) + 120LL) = 2;
      for ( i = 1; i < *((_DWORD *)this + 141); ++i )
        *(_DWORD *)(136LL * i + *((_QWORD *)this + 71)) = i;
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xDEu);
    }
  }
  return v1;
}
