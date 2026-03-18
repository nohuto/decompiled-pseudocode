/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180148AA0
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801487D0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180147E70 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x180148BCC (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180148CD0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     Template_xddd @ 0x180148E00 (Template_xddd.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x40Eu);
  }
  else
  {
    v4 = *((_DWORD *)this + 154);
    if ( v4 < *((_DWORD *)this + 152) )
    {
      v5 = *((_DWORD *)this + 155);
      if ( v5 < *((_DWORD *)this + 153) )
      {
        *((_DWORD *)this + 155) = v5 + 1;
      }
      else
      {
        v6 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
        v7 = *((_DWORD *)this + 76) / v6;
        *((_DWORD *)this + 158) = v4 / v7 * (*((_DWORD *)this + 151) - *((_DWORD *)this + 149));
        *((_DWORD *)this + 157) = v6 * (v4 % v7);
        v8 = CMagnifierRenderTarget::SliceRect(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x424u);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xddd(
              v10,
              v9,
              *((_QWORD *)this + 37),
              *((_DWORD *)this + 154),
              *((_DWORD *)this + 157),
              *((_DWORD *)this + 158));
          ++*((_DWORD *)this + 154);
          *((_DWORD *)this + 155) = 0;
        }
      }
    }
  }
  if ( v3 < 0 || *((int *)this + 160) < 0 || *((_DWORD *)this + 154) >= *((_DWORD *)this + 152) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v3;
}
