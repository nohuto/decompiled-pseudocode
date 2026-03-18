/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18015DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18001E4E4 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18001E56C (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(enum DXGI_FORMAT *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int Bits; // eax

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2Eu);
  }
  else
  {
    v4 = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x30u);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bits, 0x35u);
    }
  }
  (*(void (__fastcall **)(enum DXGI_FORMAT *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
  return v3;
}
