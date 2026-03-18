/*
 * XREFs of ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0038980
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0037FA0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UpdateStats(
        CCompositionSurface *this,
        unsigned __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  __int64 result; // rax
  __int128 *v4; // r11
  struct CCompositionBuffer *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct CCompositionBuffer *v8; // [rsp+48h] [rbp+20h] BYREF

  result = CCompositionSurface::FindBuffer(this, a2, &v8);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    v6 = *v4;
    v7 = v4[1];
    *((_DWORD *)v8 + 45) = 0;
    *((_DWORD *)v5 + 54) = 0;
    *(_OWORD *)((char *)v5 + 184) = v6;
    *((_BYTE *)v5 + 41) = 1;
    *(_OWORD *)((char *)v5 + 200) = v7;
  }
  return result;
}
