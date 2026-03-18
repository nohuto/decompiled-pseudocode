/*
 * XREFs of ?UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C0017E04
 * Callers:
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C0017C9C (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UpdateStatsAndCustomPresentDuration(
        CCompositionSurface *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  __int128 *v6; // r11
  struct CCompositionBuffer *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  struct CCompositionBuffer *v10; // [rsp+20h] [rbp-18h] BYREF

  result = CCompositionSurface::FindBuffer(a1, a2, &v10);
  if ( (int)result >= 0 )
  {
    v7 = v10;
    v8 = *v6;
    v9 = v6[1];
    *((_BYTE *)v10 + 41) = 1;
    *(_OWORD *)((char *)v7 + 184) = v8;
    *((_DWORD *)v7 + 45) = a4;
    *(_OWORD *)((char *)v7 + 200) = v9;
    *((_DWORD *)v7 + 54) = 2;
  }
  return result;
}
