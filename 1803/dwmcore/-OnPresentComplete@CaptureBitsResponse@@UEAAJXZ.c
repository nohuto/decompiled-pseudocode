/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18001E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18001E4E4 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18001E56C (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  int v2; // eax
  signed int v3; // ebx
  HANDLE FileMappingW; // rax
  int Bits; // eax
  int v6; // eax
  unsigned int v7; // ebx
  signed int LastError; // eax
  int v10; // r9d
  int v11; // r9d
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]
  DWORD dwMaximumSizeLowa; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    dwMaximumSizeLow = 311;
    v10 = v2;
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[32], 0LL);
    *((_QWORD *)this + 14) = FileMappingW;
    if ( FileMappingW )
      goto LABEL_3;
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    dwMaximumSizeLow = 321;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v10 = v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, dwMaximumSizeLow);
LABEL_3:
  if ( v3 < 0 )
  {
    dwMaximumSizeLowa = 98;
    v11 = v3;
  }
  else
  {
    Bits = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v3 = Bits;
    if ( Bits < 0 )
    {
      dwMaximumSizeLowa = 100;
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v3 = Bits;
      if ( Bits >= 0 )
        goto LABEL_6;
      dwMaximumSizeLowa = 104;
    }
    v11 = Bits;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, dwMaximumSizeLowa);
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 32LL))(this, (unsigned int)v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6Bu);
  return v7;
}
