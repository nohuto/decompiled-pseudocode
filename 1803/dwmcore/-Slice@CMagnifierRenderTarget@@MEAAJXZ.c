/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015AFB0
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x18015A790 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015A350 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18015B0DC (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015B1E0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xddd @ 0x18015B238 (McTemplateU0xddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Slice(CMagnifierRenderTarget *this)
{
  int v2; // eax
  int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v2 = CMagnifierRenderTarget::EnsureRenderTargets(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x29Au);
  }
  else
  {
    v4 = *((_DWORD *)this + 168);
    if ( v4 < *((_DWORD *)this + 166) )
    {
      v5 = *((_DWORD *)this + 169);
      if ( v5 < *((_DWORD *)this + 167) )
      {
        *((_DWORD *)this + 169) = v5 + 1;
      }
      else
      {
        v6 = *((_DWORD *)this + 164) - *((_DWORD *)this + 162);
        v7 = *((_DWORD *)this + 90) / v6;
        *((_DWORD *)this + 172) = v4 / v7 * (*((_DWORD *)this + 165) - *((_DWORD *)this + 163));
        *((_DWORD *)this + 171) = v6 * (v4 % v7);
        v8 = CMagnifierRenderTarget::SliceRect(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2B0u);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xddd(
              v10,
              v9,
              *((_QWORD *)this + 44),
              *((_DWORD *)this + 168),
              *((_DWORD *)this + 171),
              *((_DWORD *)this + 172));
          ++*((_DWORD *)this + 168);
          *((_DWORD *)this + 169) = 0;
        }
      }
    }
  }
  if ( v3 < 0 || *((int *)this + 174) < 0 || *((_DWORD *)this + 168) >= *((_DWORD *)this + 166) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v3;
}
