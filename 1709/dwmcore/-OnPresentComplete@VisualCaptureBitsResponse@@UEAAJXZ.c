/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18013B980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18007F9EC (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18007FA74 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18007FB70 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  signed int Bits; // eax

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x2Eu);
  }
  else
  {
    v4 = CaptureBitsResponse::MapSectionBitmap(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x30u);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bits, 0x35u);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
  return v3;
}
