/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180138AF0
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801382C0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180137E60 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x180138C1C (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180138D20 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xddd @ 0x180138DE8 (McTemplateU0xddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Slice(CMagnifierRenderTarget *this)
{
  signed int v2; // eax
  int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  signed int v8; // eax
  int v9; // edx
  int v10; // ecx

  v2 = CMagnifierRenderTarget::EnsureRenderTargets(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x298u);
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2AEu);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xddd(
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
